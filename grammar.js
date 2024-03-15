const
  letter = /[a-zA-Z]/
  decimal_digit = /[0-9]/
  octal_digit = /[0-7]/
  hex_digit = /[0-9A-Fa-f]/

function proto_string($, quote) {
  return seq(
    quote,
    repeat(choice(
      token.immediate(prec(1, new RegExp(`[^${quote}\\\\]+`))),
      $.escape_sequence
    )),
    quote,
  )
}

function proto_message($, body) {
  return seq(
    field("keyword", "message"),
    field("name", alias($.identifier, $.message_name)),
    alias(body, $.message_body),
  )
}

function proto_oneof($, body) {
  return seq(
    field("keyword", "oneof"),
    field("name", alias($.identifier, $.oneof_name)),
    alias(body, $.oneof_body),
  )
}

function proto_message_value($, bodyStart, bodyEnd) {
  return seq(
    bodyStart,
    repeat(seq(
      field("name", $.identifier),
      optional(":"),
      field("value", choice(
        $.constant,
        seq(
          "[",
          $.constant,
          repeat(seq(",", $.constant)),
          "]",
        ),
      )),
      optional(choice(",", ";")),
    )),
    bodyEnd,
  )
}

function basic_block($, extras) {
  return seq(
    "{",
    repeat(choice(
      $.option,
      $.empty_statement,
      ...extras
    )),
    "}",
  )
}

const commonSyntax = {
  empty_statement: $ => ";",

  // import = "import" [ "weak" | "public" ] strLit ";"
  import: $ => seq(
    field("keyword", "import"),
    optional(field("modifier", choice($.weak, $.public))),
    field("path", $.string),
    ";",
  ),

  // package = "package" fullIdent ";"
  package: $ => seq(
    field("keyword", "package"),
    field("name", $.full_ident),
    ";",
  ),

  // option = "option" optionName  "=" constant ";"
  // optionName = optionNamePart { "." optionNamePart }
  // optionNamePart = { ident | "(" ["."] fullIdent ")" }
  option: $ => seq(
    field("keyword", "option"),
    $._option_assignment,
    ";",
  ),
  _option_assignment: $ => seq(
    field("name", $.option_name),
    "=",
    field("value", $.constant)
  ),
  option_name: $ => seq(
    $._option_name_part,
    repeat(seq(".", $._option_name_part)),
  ),
  _option_name_part: $ => field("part", choice(
    $.identifier,
    seq("(", $.full_ident, ")"),
  )),

  // enum = "enum" enumName enumBody
  // enumBody = "{" { option | enumField | emptyStatement } "}"
  // enumField = ident "=" [ "-" ] intLit [ "[" enumValueOption { ","  enumValueOption } "]" ]";"
  // enumValueOption = optionName "=" constant
  enum: $ => seq(
    field("keyword", "enum"),
    field("name", alias($.identifier, $.enum_name)),
    $.enum_body,
  ),
  enum_body: $ => basic_block($, [$.value]),
  value: $ => seq(
    field("name", $.identifier),
    "=",
    field("tag", seq(optional("-"), $.int_lit)),
    optional(field("options", $.value_options)),
    ";",
  ),
  value_options: $ => seq(
    "[",
    $.value_option,
    repeat(seq(",", $.value_option)),
    "]",
  ),
  value_option: $ => $._option_assignment,

  field_options: $ => seq(
    "[",
    $.field_option,
    repeat(seq(",", $.field_option)),
    "]",
  ),
  field_option: $ => $._option_assignment,

  // reserved = "reserved" ( ranges | strFieldNames ) ";"
  // ranges = range { "," range }
  // range =  intLit [ "to" ( intLit | "max" ) ]
  // strFieldNames = strFieldName { "," strFieldName }
  // strFieldName = "'" fieldName "'" | """ fieldName """
  reserved: $ => seq(
    field("keyword", "reserved"),
    choice($.ranges, $.field_names),
    ";",
  ),

  ranges: $ => seq($.range, repeat(seq(",", $.range))),
  range: $ => seq(
    field("start", $.int_lit),
    optional(seq(
      field("keyword", "to"),
      field("end", choice($.int_lit, $.max)),
    )),
  ),

  field_names: $ => seq(
    $.string,
    repeat(seq(",", $.string)),
  ),

  map_field: $ => seq(
    field("keyword", "map"),
    "<",
    field("key_type", $.key_type),
    ",",
    field("val_type", $.type),
    ">",
    field("name", $.identifier),
    "=",
    field("tag", $.int_lit),
    optional(field("options", $.field_options)),
    ";",
  ),

  // service = "service" serviceName "{" { option | rpc | emptyStatement } "}"
  // rpc = "rpc" rpcName "(" [ "stream" ] messageType ")" "returns" "(" [ "stream" ]
  //          messageType ")" (( "{" {option | emptyStatement } "}" ) | ";")
  service: $ => seq(
    field("keyword", "service"),
    field("name", alias($.identifier, $.service_name)),
    $.service_body,
  ),
  service_body: $ => basic_block($, [$.rpc]),

  rpc: $ => seq(
    field("keyword", "rpc"),
    field("name", alias($.identifier, $.rpc_name)),
    "(",
    optional(field("is_stream", $.stream)),
    field("arg_type", $.message_or_enum_type),
    ")",
    field("keyword", "returns"),
    "(",
    optional(field("is_stream", $.stream)),
    field("ret_type", $.message_or_enum_type),
    ")",
    choice($.rpc_body, ";"),
  ),
  rpc_body: $ => basic_block($, []),
  stream: $ => "stream",

  key_type: $ => choice(
    "int32",
    "int64",
    "uint32",
    "uint64",
    "sint32",
    "sint64",
    "fixed32",
    "fixed64",
    "sfixed32",
    "sfixed64",
    "bool",
    "string",
  ),
  type: $ => choice(
    "double",
    "float",
    "int32",
    "int64",
    "uint32",
    "uint64",
    "sint32",
    "sint64",
    "fixed32",
    "fixed64",
    "sfixed32",
    "sfixed64",
    "bool",
    "string",
    "bytes",
    $.message_or_enum_type,
  ),
  message_or_enum_type: $ => seq(
    optional("."),
    repeat(seq(
        field("part", $.identifier),
        ".",
    )),
    field("type", $.identifier),
  ),

  // ident = letter { letter | decimalDigit | "_" }
  identifier: $ => token(seq(
    letter,
    optional(repeat(choice(
        letter,
        decimal_digit,
        "_",
    ))),
  )),
  // fullIdent = ident { "." ident }
  full_ident: $ => seq(
    field("part", $.identifier),
    optional(repeat(seq(".", field("part", $.identifier)))),
  ),

  // constant = fullIdent | ( [ "-" | "+" ] intLit ) | ( [ "-" | "+" ] floatLit ) | strLit | boolLit
  constant: $ => choice(
    $.full_ident,
    seq(
      optional(choice("-", "+")),
      $.int_lit,
    ),
    seq(
      optional(choice("-", "+")),
      $.float_lit,
    ),
    $.string,
    $.bool,
    $.message_value,
  ),
  message_value: $ => choice(
    proto_message_value($, "<", ">"),
    proto_message_value($, "{", "}"),
  ),

  // boolLit = "true" | "false"
  bool: $ => choice($.true, $.false),

  // intLit = decimalLit | octalLit | hexLit
  int_lit: $ => choice(
    $.decimal_lit,
    $.octal_lit,
    $.hex_lit,
  ),

  // decimalLit = ( "1" … "9" ) { decimalDigit }
  decimal_lit: $ => token(
    choice(
        seq(
      /[1-9]/,
      repeat(decimal_digit)
        ),
        "0", // include zero as decimal
    ),
  ),

  // octalLit = "0" { octalDigit }
  // we change the rule a little (repeat1) so that 0
  // doesn"t match octal_lit but decimal_lit
  octal_lit: $ => token(seq(
    "0",
    repeat1(octal_digit),
  )),

  // hexLit = "0" ( "x" | "X" ) hexDigit { hexDigit }
  hex_lit: $ => token(seq(
    "0",
    choice("x", "X"),
    hex_digit,
    repeat(hex_digit),
  )),

  // floatLit = ( decimals "." [ decimals ] [ exponent ] | decimals exponent | "."decimals [ exponent ] ) | "inf" | "nan"
  // decimals = decimalDigit { decimalDigit }
  // exponent = ( "e" | "E" ) [ "+" | "-" ] decimals
  float_lit: $ => {
    const decimals = seq(
        decimal_digit,
        repeat(decimal_digit),
    );

    const exponent = seq(
        choice("e", "E"),
        optional(choice("+", "-")),
        decimals,
    );

    return token(choice(
      seq(
        decimals,
        ".",
        optional(decimals),
        optional(exponent),
      ),
      seq(
        decimals,
        exponent,
      ),
      seq(
        ".",
        decimals,
        optional(exponent),
      ),
      "inf",
      "nan",
    ));
  },
  string: $ => choice(
    proto_string($, "\""),
    proto_string($, "'"),
  ),
  escape_sequence: $ => token.immediate(seq(
    "\\",
    choice(
      /[^xuU]/,
      /\d{2,3}/,
      /x[0-9a-fA-F]{2,}/,
      /u[0-9a-fA-F]{4}/,
      /U[0-9a-fA-F]{8}/
    )
  )),

  comment: $ => token(choice(
    seq("//", /.*/),
    seq(
      "/*",
      /[^*]*\*+([^/*][^*]*\*+)*/,
      "/"
    )
  )),

  // keywords
  true: $ => "true",
  false: $ => "false",
  max: $ => "max",
  weak: $ => "weak",
  public: $ => "public",
  repeated: $ => "repeated",
}

const proto2Syntax = {
  syntax2: $ => seq(
    field("keyword", "syntax"),
    "=",
    field("version", choice("\"proto2\"", "'proto2'")),
    ";",
  ),

  // message = "message" messageName messageBody
  // messageBody = "{" { field | enum | message | extend | extensions | group |
  // 			option | oneof | mapField | reserved | emptyStatement } "}"
  message2: $ => proto_message($, alias($.message_body2, $.message_body)),
  message_body2: $ => basic_block($, [
    $.reserved,
    $.extend,
    $.extensions,
    $.enum,
    alias($.message2, $.message),
    alias($.oneof2, $.oneof),
    alias($.field2, $.field),
    alias($.map_field2, $.map_field),
    $.group_field,
  ]),

  // extend = "extend" messageType "{" {field | group} "}"
  extend: $ => seq(
    field("keyword", "extend"),
    field("name", $.message_or_enum_type),
    "{",
    repeat(choice(alias($.field2, $.field), $.group_field)),
    "}",
  ),

  oneof2: $ => proto_oneof($, $.oneof_body2),
  oneof_body2: $ => basic_block($, [
    alias($.field2, $.field)
  ]),

  field2: $ => seq(
    field("label", choice($.required, $.optional, $.repeated)),
    field("type", $.type),
    field("name", $.identifier),
    "=",
    field("tag", $.int_lit),
    optional(field("options", $.field_options)),
    ";",
  ),

  map_field2: $ => seq(
    field("label", choice($.required, $.optional, $.repeated)),
    field("keyword", "map"),
    "<",
    field("key_type", $.key_type),
    ",",
    field("val_type", $.type),
    ">",
    field("name", $.identifier),
    "=",
    field("tag", $.int_lit),
    optional(field("options", $.field_options)),
    ";",
  ),

  // group = label "group" groupName "=" fieldNumber messageBody
  group_field: $ => seq(
    field("label", choice($.required, $.optional, $.repeated)),
    field("keyword", "group"),
    field("name", $.identifier),
    "=",
    field("tag", $.int_lit),
    alias($.message_body2, $.message_body)
  ),

  // extensions = "extensions" ranges ";"
  extensions: $ => seq(
    field("keyword", "extensions"),
    $.ranges,
    ";",
  ),

  // keywords
  required: $ => "required",
  optional: $ => "optional",
}

const proto3Syntax = {
  syntax3: $ => seq(
    field("keyword", "syntax"),
    "=",
    field("version", choice("\"proto3\"", "'proto3'")),
    ";",
  ),

  // message = "message" messageName messageBody
  // messageBody = "{" { field | enum | message | option | oneof | mapField |
  // 			reserved | emptyStatement } "}"
  message3: $ => proto_message($, alias($.message_body3, $.message_body)),
  message_body3: $ => basic_block($, [
    $.reserved,
    $.enum,
    alias($.message3, $.message),
    alias($.oneof3, $.oneof),
    alias($.field3, $.field),
    $.map_field,
  ]),

  oneof3: $ => proto_oneof($, $.oneof_body3),
  oneof_body3: $ => basic_block($, [
    alias($.field3, $.field)
  ]),

  field3: $ => seq(
    optional(field("label", choice($.optional, $.repeated))),
    field("type", $.type),
    field("name", $.identifier),
    "=",
    field("tag", $.int_lit),
    optional(field("options", $.field_options)),
    ";",
  ),
}

const editionSyntax = {
  syntaxEditions: $ => seq(
    field("keyword", "syntax"),
    "=",
    field("version", choice("\"editions\"", "'editions'")),
    ";",
  ),
  edition: $ => seq(
    field("keyword", "edition"),
    "=",
    field("version", choice(
        seq("\"", $.edition_version, "\""),
        seq("'", $.edition_version, "'")
    )),
    ";",
  ),

  edition_version: $ => /[0-9]{4}/,
}

module.exports = grammar({
  name: "proto",

  extras: $ => [$.comment, /\s/],

  rules: {
    source_file: $ => choice(
      seq(
        $.syntax2,
        optional(repeat(choice(
          $.import,
          $.package,
          $.option,
          $.extend,
          $.enum,
          alias($.message2, $.message),
          $.service,
          $.empty_statement,
        ))),
      ),
      seq(
        $.syntax3,
        optional(repeat(choice(
          $.import,
          $.package,
          $.option,
          $.enum,
          alias($.message3, $.message),
          $.service,
          $.empty_statement,
        )))
      ),
      seq(
        choice($.syntaxEditions),
        $.edition,
        optional(repeat(choice(
          $.import,
          $.package,
          $.option,
          $.enum,
          alias($.message3, $.message),
          $.service,
          $.empty_statement,
        )))
      ),
      seq(
        choice($.syntaxEditions, $.edition),
        optional(repeat(choice(
          $.import,
          $.package,
          $.option,
          $.enum,
          alias($.message3, $.message),
          $.service,
          $.empty_statement,
        )))
      )
    ),

    ...commonSyntax,
    ...proto2Syntax,
    ...proto3Syntax,
    ...editionSyntax,
  }
});
