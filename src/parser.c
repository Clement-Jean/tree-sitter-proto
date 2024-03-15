#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 372
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 147
#define ALIAS_COUNT 5
#define TOKEN_COUNT 75
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 18
#define MAX_ALIAS_SEQUENCE_LENGTH 12
#define PRODUCTION_ID_COUNT 51

enum ts_symbol_identifiers {
  anon_sym_SEMI = 1,
  anon_sym_import = 2,
  anon_sym_package = 3,
  anon_sym_option = 4,
  anon_sym_EQ = 5,
  anon_sym_DOT = 6,
  anon_sym_LPAREN = 7,
  anon_sym_RPAREN = 8,
  anon_sym_enum = 9,
  anon_sym_LBRACE = 10,
  anon_sym_RBRACE = 11,
  anon_sym_DASH = 12,
  anon_sym_LBRACK = 13,
  anon_sym_COMMA = 14,
  anon_sym_RBRACK = 15,
  anon_sym_reserved = 16,
  anon_sym_to = 17,
  anon_sym_map = 18,
  anon_sym_LT = 19,
  anon_sym_GT = 20,
  anon_sym_service = 21,
  anon_sym_rpc = 22,
  anon_sym_returns = 23,
  sym_stream = 24,
  anon_sym_int32 = 25,
  anon_sym_int64 = 26,
  anon_sym_uint32 = 27,
  anon_sym_uint64 = 28,
  anon_sym_sint32 = 29,
  anon_sym_sint64 = 30,
  anon_sym_fixed32 = 31,
  anon_sym_fixed64 = 32,
  anon_sym_sfixed32 = 33,
  anon_sym_sfixed64 = 34,
  anon_sym_bool = 35,
  anon_sym_string = 36,
  anon_sym_double = 37,
  anon_sym_float = 38,
  anon_sym_bytes = 39,
  sym_identifier = 40,
  anon_sym_PLUS = 41,
  anon_sym_COLON = 42,
  sym_decimal_lit = 43,
  sym_octal_lit = 44,
  sym_hex_lit = 45,
  sym_float_lit = 46,
  anon_sym_DQUOTE = 47,
  aux_sym_string_token1 = 48,
  anon_sym_SQUOTE = 49,
  aux_sym_string_token2 = 50,
  sym_escape_sequence = 51,
  sym_comment = 52,
  sym_true = 53,
  sym_false = 54,
  sym_max = 55,
  sym_weak = 56,
  sym_public = 57,
  sym_repeated = 58,
  anon_sym_syntax = 59,
  anon_sym_DQUOTEproto2_DQUOTE = 60,
  anon_sym_SQUOTEproto2_SQUOTE = 61,
  anon_sym_message = 62,
  anon_sym_extend = 63,
  anon_sym_oneof = 64,
  anon_sym_group = 65,
  anon_sym_extensions = 66,
  sym_required = 67,
  sym_optional = 68,
  anon_sym_DQUOTEproto3_DQUOTE = 69,
  anon_sym_SQUOTEproto3_SQUOTE = 70,
  anon_sym_DQUOTEeditions_DQUOTE = 71,
  anon_sym_SQUOTEeditions_SQUOTE = 72,
  anon_sym_edition = 73,
  sym_edition_version = 74,
  sym_source_file = 75,
  sym_empty_statement = 76,
  sym_import = 77,
  sym_package = 78,
  sym_option = 79,
  sym__option_assignment = 80,
  sym_option_name = 81,
  sym__option_name_part = 82,
  sym_enum = 83,
  sym_enum_body = 84,
  sym_value = 85,
  sym_value_options = 86,
  sym_value_option = 87,
  sym_field_options = 88,
  sym_field_option = 89,
  sym_reserved = 90,
  sym_ranges = 91,
  sym_range = 92,
  sym_field_names = 93,
  sym_map_field = 94,
  sym_service = 95,
  sym_service_body = 96,
  sym_rpc = 97,
  sym_rpc_body = 98,
  sym_key_type = 99,
  sym_type = 100,
  sym_message_or_enum_type = 101,
  sym_full_ident = 102,
  sym_constant = 103,
  sym_message_value = 104,
  sym_bool = 105,
  sym_int_lit = 106,
  sym_string = 107,
  sym_syntax2 = 108,
  sym_message2 = 109,
  sym_message_body2 = 110,
  sym_extend = 111,
  sym_oneof2 = 112,
  sym_oneof_body2 = 113,
  sym_field2 = 114,
  sym_map_field2 = 115,
  sym_group_field = 116,
  sym_extensions = 117,
  sym_syntax3 = 118,
  sym_message3 = 119,
  sym_message_body3 = 120,
  sym_oneof3 = 121,
  sym_oneof_body3 = 122,
  sym_field3 = 123,
  sym_syntaxEditions = 124,
  sym_edition = 125,
  aux_sym_source_file_repeat1 = 126,
  aux_sym_source_file_repeat2 = 127,
  aux_sym_option_name_repeat1 = 128,
  aux_sym_enum_body_repeat1 = 129,
  aux_sym_value_options_repeat1 = 130,
  aux_sym_field_options_repeat1 = 131,
  aux_sym_ranges_repeat1 = 132,
  aux_sym_field_names_repeat1 = 133,
  aux_sym_service_body_repeat1 = 134,
  aux_sym_rpc_body_repeat1 = 135,
  aux_sym_message_or_enum_type_repeat1 = 136,
  aux_sym_full_ident_repeat1 = 137,
  aux_sym_message_value_repeat1 = 138,
  aux_sym_message_value_repeat2 = 139,
  aux_sym_string_repeat1 = 140,
  aux_sym_string_repeat2 = 141,
  aux_sym_message_body2_repeat1 = 142,
  aux_sym_extend_repeat1 = 143,
  aux_sym_oneof_body2_repeat1 = 144,
  aux_sym_message_body3_repeat1 = 145,
  aux_sym_oneof_body3_repeat1 = 146,
  alias_sym_enum_name = 147,
  alias_sym_message_name = 148,
  alias_sym_oneof_name = 149,
  alias_sym_rpc_name = 150,
  alias_sym_service_name = 151,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [anon_sym_import] = "import",
  [anon_sym_package] = "package",
  [anon_sym_option] = "option",
  [anon_sym_EQ] = "=",
  [anon_sym_DOT] = ".",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_enum] = "enum",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DASH] = "-",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_reserved] = "reserved",
  [anon_sym_to] = "to",
  [anon_sym_map] = "map",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_service] = "service",
  [anon_sym_rpc] = "rpc",
  [anon_sym_returns] = "returns",
  [sym_stream] = "stream",
  [anon_sym_int32] = "int32",
  [anon_sym_int64] = "int64",
  [anon_sym_uint32] = "uint32",
  [anon_sym_uint64] = "uint64",
  [anon_sym_sint32] = "sint32",
  [anon_sym_sint64] = "sint64",
  [anon_sym_fixed32] = "fixed32",
  [anon_sym_fixed64] = "fixed64",
  [anon_sym_sfixed32] = "sfixed32",
  [anon_sym_sfixed64] = "sfixed64",
  [anon_sym_bool] = "bool",
  [anon_sym_string] = "string",
  [anon_sym_double] = "double",
  [anon_sym_float] = "float",
  [anon_sym_bytes] = "bytes",
  [sym_identifier] = "identifier",
  [anon_sym_PLUS] = "+",
  [anon_sym_COLON] = ":",
  [sym_decimal_lit] = "decimal_lit",
  [sym_octal_lit] = "octal_lit",
  [sym_hex_lit] = "hex_lit",
  [sym_float_lit] = "float_lit",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_token2] = "string_token2",
  [sym_escape_sequence] = "escape_sequence",
  [sym_comment] = "comment",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_max] = "max",
  [sym_weak] = "weak",
  [sym_public] = "public",
  [sym_repeated] = "repeated",
  [anon_sym_syntax] = "syntax",
  [anon_sym_DQUOTEproto2_DQUOTE] = "\"proto2\"",
  [anon_sym_SQUOTEproto2_SQUOTE] = "'proto2'",
  [anon_sym_message] = "message",
  [anon_sym_extend] = "extend",
  [anon_sym_oneof] = "oneof",
  [anon_sym_group] = "group",
  [anon_sym_extensions] = "extensions",
  [sym_required] = "required",
  [sym_optional] = "optional",
  [anon_sym_DQUOTEproto3_DQUOTE] = "\"proto3\"",
  [anon_sym_SQUOTEproto3_SQUOTE] = "'proto3'",
  [anon_sym_DQUOTEeditions_DQUOTE] = "\"editions\"",
  [anon_sym_SQUOTEeditions_SQUOTE] = "'editions'",
  [anon_sym_edition] = "edition",
  [sym_edition_version] = "edition_version",
  [sym_source_file] = "source_file",
  [sym_empty_statement] = "empty_statement",
  [sym_import] = "import",
  [sym_package] = "package",
  [sym_option] = "option",
  [sym__option_assignment] = "_option_assignment",
  [sym_option_name] = "option_name",
  [sym__option_name_part] = "_option_name_part",
  [sym_enum] = "enum",
  [sym_enum_body] = "enum_body",
  [sym_value] = "value",
  [sym_value_options] = "value_options",
  [sym_value_option] = "value_option",
  [sym_field_options] = "field_options",
  [sym_field_option] = "field_option",
  [sym_reserved] = "reserved",
  [sym_ranges] = "ranges",
  [sym_range] = "range",
  [sym_field_names] = "field_names",
  [sym_map_field] = "map_field",
  [sym_service] = "service",
  [sym_service_body] = "service_body",
  [sym_rpc] = "rpc",
  [sym_rpc_body] = "rpc_body",
  [sym_key_type] = "key_type",
  [sym_type] = "type",
  [sym_message_or_enum_type] = "message_or_enum_type",
  [sym_full_ident] = "full_ident",
  [sym_constant] = "constant",
  [sym_message_value] = "message_value",
  [sym_bool] = "bool",
  [sym_int_lit] = "int_lit",
  [sym_string] = "string",
  [sym_syntax2] = "syntax2",
  [sym_message2] = "message",
  [sym_message_body2] = "message_body",
  [sym_extend] = "extend",
  [sym_oneof2] = "oneof",
  [sym_oneof_body2] = "oneof_body",
  [sym_field2] = "field",
  [sym_map_field2] = "map_field",
  [sym_group_field] = "group_field",
  [sym_extensions] = "extensions",
  [sym_syntax3] = "syntax3",
  [sym_message3] = "message",
  [sym_message_body3] = "message_body",
  [sym_oneof3] = "oneof",
  [sym_oneof_body3] = "oneof_body",
  [sym_field3] = "field",
  [sym_syntaxEditions] = "syntaxEditions",
  [sym_edition] = "edition",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
  [aux_sym_option_name_repeat1] = "option_name_repeat1",
  [aux_sym_enum_body_repeat1] = "enum_body_repeat1",
  [aux_sym_value_options_repeat1] = "value_options_repeat1",
  [aux_sym_field_options_repeat1] = "field_options_repeat1",
  [aux_sym_ranges_repeat1] = "ranges_repeat1",
  [aux_sym_field_names_repeat1] = "field_names_repeat1",
  [aux_sym_service_body_repeat1] = "service_body_repeat1",
  [aux_sym_rpc_body_repeat1] = "rpc_body_repeat1",
  [aux_sym_message_or_enum_type_repeat1] = "message_or_enum_type_repeat1",
  [aux_sym_full_ident_repeat1] = "full_ident_repeat1",
  [aux_sym_message_value_repeat1] = "message_value_repeat1",
  [aux_sym_message_value_repeat2] = "message_value_repeat2",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_string_repeat2] = "string_repeat2",
  [aux_sym_message_body2_repeat1] = "message_body2_repeat1",
  [aux_sym_extend_repeat1] = "extend_repeat1",
  [aux_sym_oneof_body2_repeat1] = "oneof_body2_repeat1",
  [aux_sym_message_body3_repeat1] = "message_body3_repeat1",
  [aux_sym_oneof_body3_repeat1] = "oneof_body3_repeat1",
  [alias_sym_enum_name] = "enum_name",
  [alias_sym_message_name] = "message_name",
  [alias_sym_oneof_name] = "oneof_name",
  [alias_sym_rpc_name] = "rpc_name",
  [alias_sym_service_name] = "service_name",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_package] = anon_sym_package,
  [anon_sym_option] = anon_sym_option,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_reserved] = anon_sym_reserved,
  [anon_sym_to] = anon_sym_to,
  [anon_sym_map] = anon_sym_map,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_service] = anon_sym_service,
  [anon_sym_rpc] = anon_sym_rpc,
  [anon_sym_returns] = anon_sym_returns,
  [sym_stream] = sym_stream,
  [anon_sym_int32] = anon_sym_int32,
  [anon_sym_int64] = anon_sym_int64,
  [anon_sym_uint32] = anon_sym_uint32,
  [anon_sym_uint64] = anon_sym_uint64,
  [anon_sym_sint32] = anon_sym_sint32,
  [anon_sym_sint64] = anon_sym_sint64,
  [anon_sym_fixed32] = anon_sym_fixed32,
  [anon_sym_fixed64] = anon_sym_fixed64,
  [anon_sym_sfixed32] = anon_sym_sfixed32,
  [anon_sym_sfixed64] = anon_sym_sfixed64,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_double] = anon_sym_double,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_bytes] = anon_sym_bytes,
  [sym_identifier] = sym_identifier,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_decimal_lit] = sym_decimal_lit,
  [sym_octal_lit] = sym_octal_lit,
  [sym_hex_lit] = sym_hex_lit,
  [sym_float_lit] = sym_float_lit,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_comment] = sym_comment,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_max] = sym_max,
  [sym_weak] = sym_weak,
  [sym_public] = sym_public,
  [sym_repeated] = sym_repeated,
  [anon_sym_syntax] = anon_sym_syntax,
  [anon_sym_DQUOTEproto2_DQUOTE] = anon_sym_DQUOTEproto2_DQUOTE,
  [anon_sym_SQUOTEproto2_SQUOTE] = anon_sym_SQUOTEproto2_SQUOTE,
  [anon_sym_message] = anon_sym_message,
  [anon_sym_extend] = anon_sym_extend,
  [anon_sym_oneof] = anon_sym_oneof,
  [anon_sym_group] = anon_sym_group,
  [anon_sym_extensions] = anon_sym_extensions,
  [sym_required] = sym_required,
  [sym_optional] = sym_optional,
  [anon_sym_DQUOTEproto3_DQUOTE] = anon_sym_DQUOTEproto3_DQUOTE,
  [anon_sym_SQUOTEproto3_SQUOTE] = anon_sym_SQUOTEproto3_SQUOTE,
  [anon_sym_DQUOTEeditions_DQUOTE] = anon_sym_DQUOTEeditions_DQUOTE,
  [anon_sym_SQUOTEeditions_SQUOTE] = anon_sym_SQUOTEeditions_SQUOTE,
  [anon_sym_edition] = anon_sym_edition,
  [sym_edition_version] = sym_edition_version,
  [sym_source_file] = sym_source_file,
  [sym_empty_statement] = sym_empty_statement,
  [sym_import] = sym_import,
  [sym_package] = sym_package,
  [sym_option] = sym_option,
  [sym__option_assignment] = sym__option_assignment,
  [sym_option_name] = sym_option_name,
  [sym__option_name_part] = sym__option_name_part,
  [sym_enum] = sym_enum,
  [sym_enum_body] = sym_enum_body,
  [sym_value] = sym_value,
  [sym_value_options] = sym_value_options,
  [sym_value_option] = sym_value_option,
  [sym_field_options] = sym_field_options,
  [sym_field_option] = sym_field_option,
  [sym_reserved] = sym_reserved,
  [sym_ranges] = sym_ranges,
  [sym_range] = sym_range,
  [sym_field_names] = sym_field_names,
  [sym_map_field] = sym_map_field,
  [sym_service] = sym_service,
  [sym_service_body] = sym_service_body,
  [sym_rpc] = sym_rpc,
  [sym_rpc_body] = sym_rpc_body,
  [sym_key_type] = sym_key_type,
  [sym_type] = sym_type,
  [sym_message_or_enum_type] = sym_message_or_enum_type,
  [sym_full_ident] = sym_full_ident,
  [sym_constant] = sym_constant,
  [sym_message_value] = sym_message_value,
  [sym_bool] = sym_bool,
  [sym_int_lit] = sym_int_lit,
  [sym_string] = sym_string,
  [sym_syntax2] = sym_syntax2,
  [sym_message2] = sym_message2,
  [sym_message_body2] = sym_message_body2,
  [sym_extend] = sym_extend,
  [sym_oneof2] = sym_oneof2,
  [sym_oneof_body2] = sym_oneof_body2,
  [sym_field2] = sym_field2,
  [sym_map_field2] = sym_map_field,
  [sym_group_field] = sym_group_field,
  [sym_extensions] = sym_extensions,
  [sym_syntax3] = sym_syntax3,
  [sym_message3] = sym_message2,
  [sym_message_body3] = sym_message_body2,
  [sym_oneof3] = sym_oneof2,
  [sym_oneof_body3] = sym_oneof_body2,
  [sym_field3] = sym_field2,
  [sym_syntaxEditions] = sym_syntaxEditions,
  [sym_edition] = sym_edition,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_source_file_repeat2] = aux_sym_source_file_repeat2,
  [aux_sym_option_name_repeat1] = aux_sym_option_name_repeat1,
  [aux_sym_enum_body_repeat1] = aux_sym_enum_body_repeat1,
  [aux_sym_value_options_repeat1] = aux_sym_value_options_repeat1,
  [aux_sym_field_options_repeat1] = aux_sym_field_options_repeat1,
  [aux_sym_ranges_repeat1] = aux_sym_ranges_repeat1,
  [aux_sym_field_names_repeat1] = aux_sym_field_names_repeat1,
  [aux_sym_service_body_repeat1] = aux_sym_service_body_repeat1,
  [aux_sym_rpc_body_repeat1] = aux_sym_rpc_body_repeat1,
  [aux_sym_message_or_enum_type_repeat1] = aux_sym_message_or_enum_type_repeat1,
  [aux_sym_full_ident_repeat1] = aux_sym_full_ident_repeat1,
  [aux_sym_message_value_repeat1] = aux_sym_message_value_repeat1,
  [aux_sym_message_value_repeat2] = aux_sym_message_value_repeat2,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_string_repeat2] = aux_sym_string_repeat2,
  [aux_sym_message_body2_repeat1] = aux_sym_message_body2_repeat1,
  [aux_sym_extend_repeat1] = aux_sym_extend_repeat1,
  [aux_sym_oneof_body2_repeat1] = aux_sym_oneof_body2_repeat1,
  [aux_sym_message_body3_repeat1] = aux_sym_message_body3_repeat1,
  [aux_sym_oneof_body3_repeat1] = aux_sym_oneof_body3_repeat1,
  [alias_sym_enum_name] = alias_sym_enum_name,
  [alias_sym_message_name] = alias_sym_message_name,
  [alias_sym_oneof_name] = alias_sym_oneof_name,
  [alias_sym_rpc_name] = alias_sym_rpc_name,
  [alias_sym_service_name] = alias_sym_service_name,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_package] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_option] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_reserved] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_to] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_map] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_service] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rpc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_returns] = {
    .visible = true,
    .named = false,
  },
  [sym_stream] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_int32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sint32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sint64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fixed32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fixed64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sfixed32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sfixed64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_double] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_decimal_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_octal_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_hex_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_float_lit] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [sym_max] = {
    .visible = true,
    .named = true,
  },
  [sym_weak] = {
    .visible = true,
    .named = true,
  },
  [sym_public] = {
    .visible = true,
    .named = true,
  },
  [sym_repeated] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_syntax] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTEproto2_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTEproto2_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_message] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extend] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_oneof] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_group] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extensions] = {
    .visible = true,
    .named = false,
  },
  [sym_required] = {
    .visible = true,
    .named = true,
  },
  [sym_optional] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTEproto3_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTEproto3_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTEeditions_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTEeditions_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_edition] = {
    .visible = true,
    .named = false,
  },
  [sym_edition_version] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_empty_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_import] = {
    .visible = true,
    .named = true,
  },
  [sym_package] = {
    .visible = true,
    .named = true,
  },
  [sym_option] = {
    .visible = true,
    .named = true,
  },
  [sym__option_assignment] = {
    .visible = false,
    .named = true,
  },
  [sym_option_name] = {
    .visible = true,
    .named = true,
  },
  [sym__option_name_part] = {
    .visible = false,
    .named = true,
  },
  [sym_enum] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_body] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_value_options] = {
    .visible = true,
    .named = true,
  },
  [sym_value_option] = {
    .visible = true,
    .named = true,
  },
  [sym_field_options] = {
    .visible = true,
    .named = true,
  },
  [sym_field_option] = {
    .visible = true,
    .named = true,
  },
  [sym_reserved] = {
    .visible = true,
    .named = true,
  },
  [sym_ranges] = {
    .visible = true,
    .named = true,
  },
  [sym_range] = {
    .visible = true,
    .named = true,
  },
  [sym_field_names] = {
    .visible = true,
    .named = true,
  },
  [sym_map_field] = {
    .visible = true,
    .named = true,
  },
  [sym_service] = {
    .visible = true,
    .named = true,
  },
  [sym_service_body] = {
    .visible = true,
    .named = true,
  },
  [sym_rpc] = {
    .visible = true,
    .named = true,
  },
  [sym_rpc_body] = {
    .visible = true,
    .named = true,
  },
  [sym_key_type] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_message_or_enum_type] = {
    .visible = true,
    .named = true,
  },
  [sym_full_ident] = {
    .visible = true,
    .named = true,
  },
  [sym_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_message_value] = {
    .visible = true,
    .named = true,
  },
  [sym_bool] = {
    .visible = true,
    .named = true,
  },
  [sym_int_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_syntax2] = {
    .visible = true,
    .named = true,
  },
  [sym_message2] = {
    .visible = true,
    .named = true,
  },
  [sym_message_body2] = {
    .visible = true,
    .named = true,
  },
  [sym_extend] = {
    .visible = true,
    .named = true,
  },
  [sym_oneof2] = {
    .visible = true,
    .named = true,
  },
  [sym_oneof_body2] = {
    .visible = true,
    .named = true,
  },
  [sym_field2] = {
    .visible = true,
    .named = true,
  },
  [sym_map_field2] = {
    .visible = true,
    .named = true,
  },
  [sym_group_field] = {
    .visible = true,
    .named = true,
  },
  [sym_extensions] = {
    .visible = true,
    .named = true,
  },
  [sym_syntax3] = {
    .visible = true,
    .named = true,
  },
  [sym_message3] = {
    .visible = true,
    .named = true,
  },
  [sym_message_body3] = {
    .visible = true,
    .named = true,
  },
  [sym_oneof3] = {
    .visible = true,
    .named = true,
  },
  [sym_oneof_body3] = {
    .visible = true,
    .named = true,
  },
  [sym_field3] = {
    .visible = true,
    .named = true,
  },
  [sym_syntaxEditions] = {
    .visible = true,
    .named = true,
  },
  [sym_edition] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_file_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_option_name_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enum_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_value_options_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_field_options_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ranges_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_field_names_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_service_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_rpc_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_message_or_enum_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_full_ident_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_message_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_message_value_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_message_body2_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_extend_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_oneof_body2_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_message_body3_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_oneof_body3_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_enum_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_message_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_oneof_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_rpc_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_service_name] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
  field_arg_type = 1,
  field_end = 2,
  field_is_stream = 3,
  field_key_type = 4,
  field_keyword = 5,
  field_label = 6,
  field_modifier = 7,
  field_name = 8,
  field_options = 9,
  field_part = 10,
  field_path = 11,
  field_ret_type = 12,
  field_start = 13,
  field_tag = 14,
  field_type = 15,
  field_val_type = 16,
  field_value = 17,
  field_version = 18,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_arg_type] = "arg_type",
  [field_end] = "end",
  [field_is_stream] = "is_stream",
  [field_key_type] = "key_type",
  [field_keyword] = "keyword",
  [field_label] = "label",
  [field_modifier] = "modifier",
  [field_name] = "name",
  [field_options] = "options",
  [field_part] = "part",
  [field_path] = "path",
  [field_ret_type] = "ret_type",
  [field_start] = "start",
  [field_tag] = "tag",
  [field_type] = "type",
  [field_val_type] = "val_type",
  [field_value] = "value",
  [field_version] = "version",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 2},
  [7] = {.index = 9, .length = 2},
  [8] = {.index = 11, .length = 3},
  [9] = {.index = 14, .length = 2},
  [10] = {.index = 9, .length = 2},
  [11] = {.index = 9, .length = 2},
  [12] = {.index = 9, .length = 2},
  [13] = {.index = 16, .length = 1},
  [14] = {.index = 17, .length = 2},
  [15] = {.index = 19, .length = 3},
  [16] = {.index = 22, .length = 1},
  [17] = {.index = 23, .length = 3},
  [18] = {.index = 26, .length = 2},
  [19] = {.index = 28, .length = 1},
  [20] = {.index = 29, .length = 2},
  [21] = {.index = 31, .length = 4},
  [22] = {.index = 35, .length = 1},
  [23] = {.index = 36, .length = 2},
  [24] = {.index = 38, .length = 2},
  [25] = {.index = 40, .length = 4},
  [26] = {.index = 44, .length = 1},
  [27] = {.index = 9, .length = 2},
  [28] = {.index = 45, .length = 2},
  [29] = {.index = 47, .length = 3},
  [30] = {.index = 50, .length = 4},
  [31] = {.index = 54, .length = 3},
  [32] = {.index = 57, .length = 2},
  [33] = {.index = 59, .length = 3},
  [34] = {.index = 62, .length = 3},
  [35] = {.index = 65, .length = 5},
  [36] = {.index = 70, .length = 4},
  [37] = {.index = 74, .length = 4},
  [38] = {.index = 78, .length = 4},
  [39] = {.index = 82, .length = 4},
  [40] = {.index = 86, .length = 4},
  [41] = {.index = 90, .length = 5},
  [42] = {.index = 95, .length = 5},
  [43] = {.index = 100, .length = 5},
  [44] = {.index = 105, .length = 5},
  [45] = {.index = 110, .length = 6},
  [46] = {.index = 116, .length = 6},
  [47] = {.index = 122, .length = 6},
  [48] = {.index = 128, .length = 6},
  [49] = {.index = 134, .length = 7},
  [50] = {.index = 141, .length = 7},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_part, 0},
  [1] =
    {field_part, 0, .inherited = true},
  [2] =
    {field_type, 0},
  [3] =
    {field_keyword, 0},
    {field_version, 2},
  [5] =
    {field_keyword, 0},
    {field_path, 1},
  [7] =
    {field_part, 0},
    {field_part, 1, .inherited = true},
  [9] =
    {field_keyword, 0},
    {field_name, 1},
  [11] =
    {field_keyword, 0},
    {field_name, 1, .inherited = true},
    {field_value, 1, .inherited = true},
  [14] =
    {field_part, 0, .inherited = true},
    {field_part, 1, .inherited = true},
  [16] =
    {field_type, 1},
  [17] =
    {field_part, 0, .inherited = true},
    {field_type, 1},
  [19] =
    {field_keyword, 0},
    {field_modifier, 1},
    {field_path, 2},
  [22] =
    {field_part, 1},
  [23] =
    {field_part, 0},
    {field_part, 1},
    {field_part, 2},
  [26] =
    {field_name, 0},
    {field_value, 2},
  [28] =
    {field_part, 1, .inherited = true},
  [29] =
    {field_part, 1, .inherited = true},
    {field_type, 2},
  [31] =
    {field_keyword, 0},
    {field_version, 2},
    {field_version, 3},
    {field_version, 4},
  [35] =
    {field_start, 0},
  [36] =
    {field_name, 0},
    {field_value, 1},
  [38] =
    {field_name, 1, .inherited = true},
    {field_value, 1, .inherited = true},
  [40] =
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [44] =
    {field_keyword, 0},
  [45] =
    {field_name, 0},
    {field_tag, 2},
  [47] =
    {field_end, 2},
    {field_keyword, 1},
    {field_start, 0},
  [50] =
    {field_name, 0},
    {field_value, 1},
    {field_value, 2},
    {field_value, 3},
  [54] =
    {field_name, 0},
    {field_tag, 2},
    {field_tag, 3},
  [57] =
    {field_name, 0, .inherited = true},
    {field_value, 0, .inherited = true},
  [59] =
    {field_name, 0},
    {field_options, 3},
    {field_tag, 2},
  [62] =
    {field_name, 1},
    {field_tag, 3},
    {field_type, 0},
  [65] =
    {field_name, 0},
    {field_value, 1},
    {field_value, 2},
    {field_value, 3},
    {field_value, 4},
  [70] =
    {field_name, 0},
    {field_value, 2},
    {field_value, 3},
    {field_value, 4},
  [74] =
    {field_name, 0},
    {field_options, 4},
    {field_tag, 2},
    {field_tag, 3},
  [78] =
    {field_keyword, 1},
    {field_label, 0},
    {field_name, 2},
    {field_tag, 4},
  [82] =
    {field_label, 0},
    {field_name, 2},
    {field_tag, 4},
    {field_type, 1},
  [86] =
    {field_name, 1},
    {field_options, 4},
    {field_tag, 3},
    {field_type, 0},
  [90] =
    {field_name, 0},
    {field_value, 2},
    {field_value, 3},
    {field_value, 4},
    {field_value, 5},
  [95] =
    {field_label, 0},
    {field_name, 2},
    {field_options, 5},
    {field_tag, 4},
    {field_type, 1},
  [100] =
    {field_arg_type, 3},
    {field_keyword, 0},
    {field_keyword, 5},
    {field_name, 1},
    {field_ret_type, 7},
  [105] =
    {field_key_type, 2},
    {field_keyword, 0},
    {field_name, 6},
    {field_tag, 8},
    {field_val_type, 4},
  [110] =
    {field_arg_type, 4},
    {field_is_stream, 3},
    {field_keyword, 0},
    {field_keyword, 6},
    {field_name, 1},
    {field_ret_type, 8},
  [116] =
    {field_arg_type, 3},
    {field_is_stream, 7},
    {field_keyword, 0},
    {field_keyword, 5},
    {field_name, 1},
    {field_ret_type, 8},
  [122] =
    {field_key_type, 3},
    {field_keyword, 1},
    {field_label, 0},
    {field_name, 7},
    {field_tag, 9},
    {field_val_type, 5},
  [128] =
    {field_key_type, 2},
    {field_keyword, 0},
    {field_name, 6},
    {field_options, 9},
    {field_tag, 8},
    {field_val_type, 4},
  [134] =
    {field_arg_type, 4},
    {field_is_stream, 3},
    {field_is_stream, 8},
    {field_keyword, 0},
    {field_keyword, 6},
    {field_name, 1},
    {field_ret_type, 9},
  [141] =
    {field_key_type, 3},
    {field_keyword, 1},
    {field_label, 0},
    {field_name, 7},
    {field_options, 10},
    {field_tag, 9},
    {field_val_type, 5},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [10] = {
    [1] = alias_sym_enum_name,
  },
  [11] = {
    [1] = alias_sym_service_name,
  },
  [12] = {
    [1] = alias_sym_message_name,
  },
  [27] = {
    [1] = alias_sym_oneof_name,
  },
  [43] = {
    [1] = alias_sym_rpc_name,
  },
  [45] = {
    [1] = alias_sym_rpc_name,
  },
  [46] = {
    [1] = alias_sym_rpc_name,
  },
  [49] = {
    [1] = alias_sym_rpc_name,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 2,
  [6] = 3,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 29,
  [31] = 31,
  [32] = 28,
  [33] = 27,
  [34] = 26,
  [35] = 13,
  [36] = 16,
  [37] = 12,
  [38] = 38,
  [39] = 15,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 43,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 11,
  [64] = 64,
  [65] = 65,
  [66] = 21,
  [67] = 67,
  [68] = 68,
  [69] = 24,
  [70] = 13,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 22,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 16,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 13,
  [84] = 16,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 87,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 22,
  [98] = 11,
  [99] = 72,
  [100] = 100,
  [101] = 101,
  [102] = 71,
  [103] = 103,
  [104] = 67,
  [105] = 24,
  [106] = 74,
  [107] = 107,
  [108] = 68,
  [109] = 23,
  [110] = 110,
  [111] = 111,
  [112] = 110,
  [113] = 20,
  [114] = 19,
  [115] = 111,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 111,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 110,
  [124] = 124,
  [125] = 125,
  [126] = 125,
  [127] = 127,
  [128] = 127,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 138,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 149,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 165,
  [168] = 165,
  [169] = 169,
  [170] = 165,
  [171] = 171,
  [172] = 165,
  [173] = 173,
  [174] = 13,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 175,
  [179] = 177,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 176,
  [203] = 203,
  [204] = 16,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 208,
  [247] = 247,
  [248] = 224,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 261,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 261,
  [271] = 264,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 263,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 325,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 343,
  [345] = 345,
  [346] = 294,
  [347] = 312,
  [348] = 325,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 325,
  [353] = 325,
  [354] = 354,
  [355] = 355,
  [356] = 351,
  [357] = 342,
  [358] = 318,
  [359] = 355,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 355,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 298,
  [368] = 366,
  [369] = 287,
  [370] = 308,
  [371] = 371,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(230);
      if (lookahead == '"') ADVANCE(418);
      if (lookahead == '\'') ADVANCE(425);
      if (lookahead == '(') ADVANCE(241);
      if (lookahead == ')') ADVANCE(242);
      if (lookahead == '+') ADVANCE(403);
      if (lookahead == ',') ADVANCE(249);
      if (lookahead == '-') ADVANCE(247);
      if (lookahead == '.') ADVANCE(240);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '0') ADVANCE(405);
      if (lookahead == ':') ADVANCE(404);
      if (lookahead == ';') ADVANCE(231);
      if (lookahead == '<') ADVANCE(256);
      if (lookahead == '=') ADVANCE(238);
      if (lookahead == '>') ADVANCE(257);
      if (lookahead == '[') ADVANCE(248);
      if (lookahead == '\\') ADVANCE(42);
      if (lookahead == ']') ADVANCE(250);
      if (lookahead == 'b') ADVANCE(148);
      if (lookahead == 'd') ADVANCE(144);
      if (lookahead == 'e') ADVANCE(67);
      if (lookahead == 'f') ADVANCE(43);
      if (lookahead == 'g') ADVANCE(175);
      if (lookahead == 'i') ADVANCE(125);
      if (lookahead == 'm') ADVANCE(44);
      if (lookahead == 'n') ADVANCE(45);
      if (lookahead == 'o') ADVANCE(134);
      if (lookahead == 'p') ADVANCE(47);
      if (lookahead == 'r') ADVANCE(74);
      if (lookahead == 's') ADVANCE(83);
      if (lookahead == 't') ADVANCE(145);
      if (lookahead == 'u') ADVANCE(117);
      if (lookahead == 'w') ADVANCE(84);
      if (lookahead == '{') ADVANCE(245);
      if (lookahead == '}') ADVANCE(246);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(228)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(407);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(418);
      if (lookahead == '\'') ADVANCE(425);
      if (lookahead == '+') ADVANCE(403);
      if (lookahead == '-') ADVANCE(247);
      if (lookahead == '.') ADVANCE(214);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '0') ADVANCE(406);
      if (lookahead == ':') ADVANCE(404);
      if (lookahead == '<') ADVANCE(256);
      if (lookahead == '[') ADVANCE(248);
      if (lookahead == 'f') ADVANCE(399);
      if (lookahead == 'i') ADVANCE(354);
      if (lookahead == 'n') ADVANCE(400);
      if (lookahead == 't') ADVANCE(371);
      if (lookahead == '{') ADVANCE(245);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(407);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(418);
      if (lookahead == '\'') ADVANCE(425);
      if (lookahead == '-') ADVANCE(247);
      if (lookahead == '.') ADVANCE(239);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '0') ADVANCE(408);
      if (lookahead == ';') ADVANCE(231);
      if (lookahead == '=') ADVANCE(238);
      if (lookahead == 'b') ADVANCE(312);
      if (lookahead == 'd') ADVANCE(358);
      if (lookahead == 'e') ADVANCE(353);
      if (lookahead == 'f') ADVANCE(310);
      if (lookahead == 'i') ADVANCE(352);
      if (lookahead == 'm') ADVANCE(309);
      if (lookahead == 'o') ADVANCE(311);
      if (lookahead == 'r') ADVANCE(319);
      if (lookahead == 's') ADVANCE(308);
      if (lookahead == 'u') ADVANCE(341);
      if (lookahead == '}') ADVANCE(246);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(409);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(418);
      if (lookahead == '/') ADVANCE(420);
      if (lookahead == '\\') ADVANCE(42);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(423);
      if (lookahead != 0) ADVANCE(424);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(447);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(460);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(462);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(93);
      if (lookahead == '\'') ADVANCE(97);
      if (lookahead == '.') ADVANCE(239);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ';') ADVANCE(231);
      if (lookahead == 'b') ADVANCE(312);
      if (lookahead == 'd') ADVANCE(358);
      if (lookahead == 'f') ADVANCE(310);
      if (lookahead == 'i') ADVANCE(352);
      if (lookahead == 'o') ADVANCE(367);
      if (lookahead == 'r') ADVANCE(327);
      if (lookahead == 's') ADVANCE(308);
      if (lookahead == 'u') ADVANCE(341);
      if (lookahead == '}') ADVANCE(246);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(425);
      if (lookahead == '/') ADVANCE(427);
      if (lookahead == '\\') ADVANCE(42);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(430);
      if (lookahead != 0) ADVANCE(431);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(448);
      END_STATE();
    case 10:
      if (lookahead == '\'') ADVANCE(461);
      END_STATE();
    case 11:
      if (lookahead == '\'') ADVANCE(463);
      END_STATE();
    case 12:
      if (lookahead == '(') ADVANCE(241);
      if (lookahead == ')') ADVANCE(242);
      if (lookahead == ',') ADVANCE(249);
      if (lookahead == '.') ADVANCE(239);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ';') ADVANCE(231);
      if (lookahead == '>') ADVANCE(257);
      if (lookahead == ']') ADVANCE(250);
      if (lookahead == '{') ADVANCE(245);
      if (lookahead == '}') ADVANCE(246);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '/') ADVANCE(436);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(435);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(416);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(466);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(416);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(416);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(239);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == 'b') ADVANCE(312);
      if (lookahead == 'd') ADVANCE(358);
      if (lookahead == 'f') ADVANCE(310);
      if (lookahead == 'g') ADVANCE(373);
      if (lookahead == 'i') ADVANCE(352);
      if (lookahead == 'm') ADVANCE(395);
      if (lookahead == 's') ADVANCE(308);
      if (lookahead == 'u') ADVANCE(341);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(239);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == 'b') ADVANCE(312);
      if (lookahead == 'd') ADVANCE(358);
      if (lookahead == 'f') ADVANCE(310);
      if (lookahead == 'g') ADVANCE(373);
      if (lookahead == 'i') ADVANCE(352);
      if (lookahead == 's') ADVANCE(308);
      if (lookahead == 'u') ADVANCE(341);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 21:
      if (lookahead == '.') ADVANCE(239);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == 'b') ADVANCE(312);
      if (lookahead == 'd') ADVANCE(358);
      if (lookahead == 'f') ADVANCE(310);
      if (lookahead == 'i') ADVANCE(352);
      if (lookahead == 's') ADVANCE(308);
      if (lookahead == 'u') ADVANCE(341);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(21)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 22:
      if (lookahead == '.') ADVANCE(239);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == 's') ADVANCE(383);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(22)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 23:
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '0') ADVANCE(408);
      if (lookahead == 'm') ADVANCE(52);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(23)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(409);
      END_STATE();
    case 24:
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ';') ADVANCE(231);
      if (lookahead == 'o') ADVANCE(369);
      if (lookahead == '}') ADVANCE(246);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(24)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 25:
      if (lookahead == '2') ADVANCE(263);
      END_STATE();
    case 26:
      if (lookahead == '2') ADVANCE(271);
      END_STATE();
    case 27:
      if (lookahead == '2') ADVANCE(267);
      END_STATE();
    case 28:
      if (lookahead == '2') ADVANCE(275);
      END_STATE();
    case 29:
      if (lookahead == '2') ADVANCE(279);
      END_STATE();
    case 30:
      if (lookahead == '2') ADVANCE(4);
      if (lookahead == '3') ADVANCE(5);
      END_STATE();
    case 31:
      if (lookahead == '2') ADVANCE(9);
      if (lookahead == '3') ADVANCE(10);
      END_STATE();
    case 32:
      if (lookahead == '3') ADVANCE(25);
      if (lookahead == '6') ADVANCE(37);
      END_STATE();
    case 33:
      if (lookahead == '3') ADVANCE(26);
      if (lookahead == '6') ADVANCE(38);
      END_STATE();
    case 34:
      if (lookahead == '3') ADVANCE(27);
      if (lookahead == '6') ADVANCE(39);
      END_STATE();
    case 35:
      if (lookahead == '3') ADVANCE(28);
      if (lookahead == '6') ADVANCE(40);
      END_STATE();
    case 36:
      if (lookahead == '3') ADVANCE(29);
      if (lookahead == '6') ADVANCE(41);
      END_STATE();
    case 37:
      if (lookahead == '4') ADVANCE(265);
      END_STATE();
    case 38:
      if (lookahead == '4') ADVANCE(273);
      END_STATE();
    case 39:
      if (lookahead == '4') ADVANCE(269);
      END_STATE();
    case 40:
      if (lookahead == '4') ADVANCE(277);
      END_STATE();
    case 41:
      if (lookahead == '4') ADVANCE(281);
      END_STATE();
    case 42:
      if (lookahead == 'U') ADVANCE(227);
      if (lookahead == 'u') ADVANCE(223);
      if (lookahead == 'x') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(434);
      if (lookahead != 0) ADVANCE(432);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(122);
      if (lookahead == 'i') ADVANCE(211);
      if (lookahead == 'l') ADVANCE(151);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(162);
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(129);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(58);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(58);
      if (lookahead == 'u') ADVANCE(56);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(102);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(210);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(128);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(118);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(209);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(185);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(103);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(193);
      END_STATE();
    case 56:
      if (lookahead == 'b') ADVANCE(123);
      END_STATE();
    case 57:
      if (lookahead == 'b') ADVANCE(124);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(119);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(259);
      END_STATE();
    case 60:
      if (lookahead == 'c') ADVANCE(443);
      END_STATE();
    case 61:
      if (lookahead == 'c') ADVANCE(81);
      END_STATE();
    case 62:
      if (lookahead == 'd') ADVANCE(451);
      END_STATE();
    case 63:
      if (lookahead == 'd') ADVANCE(451);
      if (lookahead == 's') ADVANCE(109);
      END_STATE();
    case 64:
      if (lookahead == 'd') ADVANCE(444);
      END_STATE();
    case 65:
      if (lookahead == 'd') ADVANCE(457);
      END_STATE();
    case 66:
      if (lookahead == 'd') ADVANCE(251);
      END_STATE();
    case 67:
      if (lookahead == 'd') ADVANCE(113);
      if (lookahead == 'n') ADVANCE(201);
      if (lookahead == 'x') ADVANCE(189);
      END_STATE();
    case 68:
      if (lookahead == 'd') ADVANCE(113);
      if (lookahead == 'n') ADVANCE(201);
      if (lookahead == 'x') ADVANCE(194);
      END_STATE();
    case 69:
      if (lookahead == 'd') ADVANCE(35);
      END_STATE();
    case 70:
      if (lookahead == 'd') ADVANCE(36);
      END_STATE();
    case 71:
      if (lookahead == 'd') ADVANCE(114);
      END_STATE();
    case 72:
      if (lookahead == 'd') ADVANCE(115);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(166);
      if (lookahead == 'p') ADVANCE(59);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(437);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(439);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(287);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(449);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(233);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(258);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(168);
      if (lookahead == 'f') ADVANCE(116);
      if (lookahead == 'i') ADVANCE(136);
      if (lookahead == 't') ADVANCE(169);
      if (lookahead == 'y') ADVANCE(137);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(71);
      if (lookahead == 'p') ADVANCE(173);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(135);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(72);
      if (lookahead == 'p') ADVANCE(176);
      END_STATE();
    case 98:
      if (lookahead == 'f') ADVANCE(415);
      END_STATE();
    case 99:
      if (lookahead == 'f') ADVANCE(415);
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 100:
      if (lookahead == 'f') ADVANCE(452);
      END_STATE();
    case 101:
      if (lookahead == 'g') ADVANCE(285);
      END_STATE();
    case 102:
      if (lookahead == 'g') ADVANCE(79);
      END_STATE();
    case 103:
      if (lookahead == 'g') ADVANCE(80);
      END_STATE();
    case 104:
      if (lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 105:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 106:
      if (lookahead == 'i') ADVANCE(154);
      END_STATE();
    case 107:
      if (lookahead == 'i') ADVANCE(156);
      END_STATE();
    case 108:
      if (lookahead == 'i') ADVANCE(174);
      END_STATE();
    case 109:
      if (lookahead == 'i') ADVANCE(157);
      END_STATE();
    case 110:
      if (lookahead == 'i') ADVANCE(158);
      END_STATE();
    case 111:
      if (lookahead == 'i') ADVANCE(159);
      END_STATE();
    case 112:
      if (lookahead == 'i') ADVANCE(160);
      END_STATE();
    case 113:
      if (lookahead == 'i') ADVANCE(196);
      END_STATE();
    case 114:
      if (lookahead == 'i') ADVANCE(198);
      END_STATE();
    case 115:
      if (lookahead == 'i') ADVANCE(199);
      END_STATE();
    case 116:
      if (lookahead == 'i') ADVANCE(212);
      END_STATE();
    case 117:
      if (lookahead == 'i') ADVANCE(143);
      END_STATE();
    case 118:
      if (lookahead == 'k') ADVANCE(442);
      END_STATE();
    case 119:
      if (lookahead == 'k') ADVANCE(54);
      END_STATE();
    case 120:
      if (lookahead == 'l') ADVANCE(283);
      END_STATE();
    case 121:
      if (lookahead == 'l') ADVANCE(458);
      END_STATE();
    case 122:
      if (lookahead == 'l') ADVANCE(184);
      END_STATE();
    case 123:
      if (lookahead == 'l') ADVANCE(104);
      END_STATE();
    case 124:
      if (lookahead == 'l') ADVANCE(78);
      END_STATE();
    case 125:
      if (lookahead == 'm') ADVANCE(165);
      if (lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 126:
      if (lookahead == 'm') ADVANCE(165);
      if (lookahead == 'n') ADVANCE(98);
      END_STATE();
    case 127:
      if (lookahead == 'm') ADVANCE(243);
      END_STATE();
    case 128:
      if (lookahead == 'm') ADVANCE(261);
      END_STATE();
    case 129:
      if (lookahead == 'n') ADVANCE(415);
      END_STATE();
    case 130:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 131:
      if (lookahead == 'n') ADVANCE(235);
      END_STATE();
    case 132:
      if (lookahead == 'n') ADVANCE(464);
      END_STATE();
    case 133:
      if (lookahead == 'n') ADVANCE(234);
      END_STATE();
    case 134:
      if (lookahead == 'n') ADVANCE(90);
      if (lookahead == 'p') ADVANCE(188);
      END_STATE();
    case 135:
      if (lookahead == 'n') ADVANCE(101);
      END_STATE();
    case 136:
      if (lookahead == 'n') ADVANCE(195);
      END_STATE();
    case 137:
      if (lookahead == 'n') ADVANCE(190);
      END_STATE();
    case 138:
      if (lookahead == 'n') ADVANCE(178);
      END_STATE();
    case 139:
      if (lookahead == 'n') ADVANCE(179);
      END_STATE();
    case 140:
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 141:
      if (lookahead == 'n') ADVANCE(181);
      END_STATE();
    case 142:
      if (lookahead == 'n') ADVANCE(182);
      END_STATE();
    case 143:
      if (lookahead == 'n') ADVANCE(197);
      END_STATE();
    case 144:
      if (lookahead == 'o') ADVANCE(206);
      END_STATE();
    case 145:
      if (lookahead == 'o') ADVANCE(253);
      if (lookahead == 'r') ADVANCE(205);
      END_STATE();
    case 146:
      if (lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 147:
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 148:
      if (lookahead == 'o') ADVANCE(149);
      if (lookahead == 'y') ADVANCE(187);
      END_STATE();
    case 149:
      if (lookahead == 'o') ADVANCE(120);
      END_STATE();
    case 150:
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 151:
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 152:
      if (lookahead == 'o') ADVANCE(171);
      END_STATE();
    case 153:
      if (lookahead == 'o') ADVANCE(202);
      END_STATE();
    case 154:
      if (lookahead == 'o') ADVANCE(131);
      END_STATE();
    case 155:
      if (lookahead == 'o') ADVANCE(191);
      END_STATE();
    case 156:
      if (lookahead == 'o') ADVANCE(132);
      END_STATE();
    case 157:
      if (lookahead == 'o') ADVANCE(139);
      END_STATE();
    case 158:
      if (lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 159:
      if (lookahead == 'o') ADVANCE(142);
      END_STATE();
    case 160:
      if (lookahead == 'o') ADVANCE(133);
      END_STATE();
    case 161:
      if (lookahead == 'o') ADVANCE(192);
      END_STATE();
    case 162:
      if (lookahead == 'p') ADVANCE(254);
      if (lookahead == 'x') ADVANCE(441);
      END_STATE();
    case 163:
      if (lookahead == 'p') ADVANCE(454);
      END_STATE();
    case 164:
      if (lookahead == 'p') ADVANCE(59);
      END_STATE();
    case 165:
      if (lookahead == 'p') ADVANCE(152);
      END_STATE();
    case 166:
      if (lookahead == 'p') ADVANCE(92);
      if (lookahead == 'q') ADVANCE(204);
      if (lookahead == 's') ADVANCE(91);
      if (lookahead == 't') ADVANCE(203);
      END_STATE();
    case 167:
      if (lookahead == 'p') ADVANCE(200);
      END_STATE();
    case 168:
      if (lookahead == 'r') ADVANCE(207);
      END_STATE();
    case 169:
      if (lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 170:
      if (lookahead == 'r') ADVANCE(208);
      END_STATE();
    case 171:
      if (lookahead == 'r') ADVANCE(186);
      END_STATE();
    case 172:
      if (lookahead == 'r') ADVANCE(138);
      END_STATE();
    case 173:
      if (lookahead == 'r') ADVANCE(155);
      END_STATE();
    case 174:
      if (lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 175:
      if (lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 176:
      if (lookahead == 'r') ADVANCE(161);
      END_STATE();
    case 177:
      if (lookahead == 's') ADVANCE(291);
      END_STATE();
    case 178:
      if (lookahead == 's') ADVANCE(260);
      END_STATE();
    case 179:
      if (lookahead == 's') ADVANCE(456);
      END_STATE();
    case 180:
      if (lookahead == 's') ADVANCE(183);
      END_STATE();
    case 181:
      if (lookahead == 's') ADVANCE(6);
      END_STATE();
    case 182:
      if (lookahead == 's') ADVANCE(11);
      END_STATE();
    case 183:
      if (lookahead == 's') ADVANCE(48);
      END_STATE();
    case 184:
      if (lookahead == 's') ADVANCE(77);
      END_STATE();
    case 185:
      if (lookahead == 't') ADVANCE(289);
      END_STATE();
    case 186:
      if (lookahead == 't') ADVANCE(232);
      END_STATE();
    case 187:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 188:
      if (lookahead == 't') ADVANCE(106);
      END_STATE();
    case 189:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 190:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 191:
      if (lookahead == 't') ADVANCE(147);
      END_STATE();
    case 192:
      if (lookahead == 't') ADVANCE(150);
      END_STATE();
    case 193:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 194:
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 195:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 196:
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 197:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 198:
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 199:
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 200:
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 201:
      if (lookahead == 'u') ADVANCE(127);
      END_STATE();
    case 202:
      if (lookahead == 'u') ADVANCE(163);
      END_STATE();
    case 203:
      if (lookahead == 'u') ADVANCE(172);
      END_STATE();
    case 204:
      if (lookahead == 'u') ADVANCE(108);
      END_STATE();
    case 205:
      if (lookahead == 'u') ADVANCE(76);
      END_STATE();
    case 206:
      if (lookahead == 'u') ADVANCE(57);
      END_STATE();
    case 207:
      if (lookahead == 'v') ADVANCE(105);
      END_STATE();
    case 208:
      if (lookahead == 'v') ADVANCE(89);
      END_STATE();
    case 209:
      if (lookahead == 'x') ADVANCE(441);
      END_STATE();
    case 210:
      if (lookahead == 'x') ADVANCE(446);
      END_STATE();
    case 211:
      if (lookahead == 'x') ADVANCE(75);
      END_STATE();
    case 212:
      if (lookahead == 'x') ADVANCE(96);
      END_STATE();
    case 213:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(417);
      END_STATE();
    case 214:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(416);
      END_STATE();
    case 215:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(417);
      END_STATE();
    case 216:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(465);
      END_STATE();
    case 217:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(216);
      END_STATE();
    case 218:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      END_STATE();
    case 219:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(432);
      END_STATE();
    case 220:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(414);
      END_STATE();
    case 221:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(219);
      END_STATE();
    case 222:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(221);
      END_STATE();
    case 223:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(222);
      END_STATE();
    case 224:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(223);
      END_STATE();
    case 225:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(224);
      END_STATE();
    case 226:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(225);
      END_STATE();
    case 227:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(226);
      END_STATE();
    case 228:
      if (eof) ADVANCE(230);
      if (lookahead == '"') ADVANCE(418);
      if (lookahead == '\'') ADVANCE(425);
      if (lookahead == '(') ADVANCE(241);
      if (lookahead == ')') ADVANCE(242);
      if (lookahead == '+') ADVANCE(403);
      if (lookahead == ',') ADVANCE(249);
      if (lookahead == '-') ADVANCE(247);
      if (lookahead == '.') ADVANCE(240);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '0') ADVANCE(405);
      if (lookahead == ':') ADVANCE(404);
      if (lookahead == ';') ADVANCE(231);
      if (lookahead == '<') ADVANCE(256);
      if (lookahead == '=') ADVANCE(238);
      if (lookahead == '>') ADVANCE(257);
      if (lookahead == '[') ADVANCE(248);
      if (lookahead == ']') ADVANCE(250);
      if (lookahead == 'b') ADVANCE(148);
      if (lookahead == 'd') ADVANCE(144);
      if (lookahead == 'e') ADVANCE(67);
      if (lookahead == 'f') ADVANCE(43);
      if (lookahead == 'g') ADVANCE(175);
      if (lookahead == 'i') ADVANCE(125);
      if (lookahead == 'm') ADVANCE(44);
      if (lookahead == 'n') ADVANCE(45);
      if (lookahead == 'o') ADVANCE(134);
      if (lookahead == 'p') ADVANCE(47);
      if (lookahead == 'r') ADVANCE(74);
      if (lookahead == 's') ADVANCE(83);
      if (lookahead == 't') ADVANCE(145);
      if (lookahead == 'u') ADVANCE(117);
      if (lookahead == 'w') ADVANCE(84);
      if (lookahead == '{') ADVANCE(245);
      if (lookahead == '}') ADVANCE(246);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(228)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(407);
      END_STATE();
    case 229:
      if (eof) ADVANCE(230);
      if (lookahead == '.') ADVANCE(214);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '0') ADVANCE(406);
      if (lookahead == ';') ADVANCE(231);
      if (lookahead == 'e') ADVANCE(68);
      if (lookahead == 'i') ADVANCE(126);
      if (lookahead == 'm') ADVANCE(73);
      if (lookahead == 'n') ADVANCE(45);
      if (lookahead == 'o') ADVANCE(167);
      if (lookahead == 'p') ADVANCE(46);
      if (lookahead == 'r') ADVANCE(164);
      if (lookahead == 's') ADVANCE(82);
      if (lookahead == '}') ADVANCE(246);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(229)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(407);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_package);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_option);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_option);
      if (lookahead == 'a') ADVANCE(121);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_option);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == 'a') ADVANCE(344);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_option);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(416);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_enum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_reserved);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_reserved);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_map);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_map);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_service);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_rpc);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_returns);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_stream);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_stream);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_int32);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_int32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_int64);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_int64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_uint32);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_uint32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_uint64);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_uint64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_sint32);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_sint32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_sint64);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_sint64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_fixed32);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_fixed32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_fixed64);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_fixed64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_sfixed32);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_sfixed32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_sfixed64);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_sfixed64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_double);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_bytes);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_bytes);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3') ADVANCE(293);
      if (lookahead == '6') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3') ADVANCE(294);
      if (lookahead == '6') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3') ADVANCE(295);
      if (lookahead == '6') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3') ADVANCE(296);
      if (lookahead == '6') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3') ADVANCE(297);
      if (lookahead == '6') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e') ||
          lookahead == 'g' ||
          lookahead == 'h' ||
          ('j' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == 'f') ADVANCE(342);
      if (lookahead == 'i') ADVANCE(356);
      if (lookahead == 't') ADVANCE(374);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == 'a') ADVANCE(365);
      if (lookahead == 'e') ADVANCE(376);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          lookahead == 'j' ||
          lookahead == 'k' ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == 'i') ADVANCE(393);
      if (lookahead == 'l') ADVANCE(360);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          lookahead == 'o' ||
          ('q' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == 'n') ADVANCE(331);
      if (lookahead == 'p') ADVANCE(382);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'x') ||
          lookahead == 'z') ADVANCE(402);
      if (lookahead == 'o') ADVANCE(359);
      if (lookahead == 'y') ADVANCE(381);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'o') ||
          lookahead == 'q' ||
          lookahead == 'r' ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == 'p') ADVANCE(329);
      if (lookahead == 's') ADVANCE(325);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'a' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == 'b') ADVANCE(346);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'c') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == 'd') ADVANCE(445);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'c') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == 'd') ADVANCE(252);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'c') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == 'd') ADVANCE(301);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'c') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == 'd') ADVANCE(302);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == 'e') ADVANCE(313);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == 'e') ADVANCE(317);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == 'e') ADVANCE(288);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == 'e') ADVANCE(450);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == 'e') ADVANCE(438);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == 'e') ADVANCE(440);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == 'e') ADVANCE(370);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == 'e') ADVANCE(315);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == 'e') ADVANCE(368);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == 'e') ADVANCE(375);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == 'e') ADVANCE(401);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == 'e') ADVANCE(316);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == 'e') ADVANCE(361);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == 'e') ADVANCE(397);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == 'e') ADVANCE(318);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == 'f') ADVANCE(402);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == 'f') ADVANCE(453);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f') ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == 'g') ADVANCE(286);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f') ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == 'g') ADVANCE(322);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == 'i') ADVANCE(355);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == 'i') ADVANCE(363);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == 'i') ADVANCE(364);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == 'i') ADVANCE(357);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == 'i') ADVANCE(394);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == 'l') ADVANCE(284);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == 'l') ADVANCE(459);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == 'l') ADVANCE(378);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == 'l') ADVANCE(321);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == 'm') ADVANCE(244);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == 'm') ADVANCE(262);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == 'n') ADVANCE(402);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == 'n') ADVANCE(236);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == 'n') ADVANCE(237);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == 'n') ADVANCE(379);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == 'n') ADVANCE(389);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == 'n') ADVANCE(334);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == 'n') ADVANCE(336);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == 'n') ADVANCE(385);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == 'n') ADVANCE(387);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == 'o') ADVANCE(388);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == 'o') ADVANCE(343);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == 'o') ADVANCE(398);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == 'o') ADVANCE(335);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == 'o') ADVANCE(390);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == 'o') ADVANCE(350);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == 'o') ADVANCE(351);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'o') ||
          ('q' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == 'p') ADVANCE(255);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'o') ||
          ('q' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == 'p') ADVANCE(455);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'o') ||
          ('q' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == 'p') ADVANCE(382);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'o') ||
          ('q' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == 'p') ADVANCE(329);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'o') ||
          ('q' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == 'p') ADVANCE(386);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == 'r') ADVANCE(392);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == 'r') ADVANCE(391);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == 'r') ADVANCE(332);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == 'r') ADVANCE(362);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == 'r') ADVANCE(338);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == 's') ADVANCE(292);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == 's') ADVANCE(377);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == 's') ADVANCE(396);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == 's') ADVANCE(324);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == 't') ADVANCE(298);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == 't') ADVANCE(290);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == 't') ADVANCE(328);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == 't') ADVANCE(339);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == 't') ADVANCE(372);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == 't') ADVANCE(326);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == 't') ADVANCE(299);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == 't') ADVANCE(340);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == 't') ADVANCE(300);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == 'u') ADVANCE(314);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == 'u') ADVANCE(347);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == 'u') ADVANCE(366);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == 'u') ADVANCE(323);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'u') ||
          ('w' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == 'v') ADVANCE(330);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'w') ||
          lookahead == 'y' ||
          lookahead == 'z') ADVANCE(402);
      if (lookahead == 'x') ADVANCE(320);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'w') ||
          lookahead == 'y' ||
          lookahead == 'z') ADVANCE(402);
      if (lookahead == 'x') ADVANCE(333);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == 'a') ADVANCE(365);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == 'a') ADVANCE(337);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == 'a') ADVANCE(348);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == 'a') ADVANCE(380);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == 'a') ADVANCE(345);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == 'a') ADVANCE(349);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == 'a') ADVANCE(384);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_decimal_lit);
      if (lookahead == '.') ADVANCE(416);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(213);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(220);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(411);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_decimal_lit);
      if (lookahead == '.') ADVANCE(416);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(213);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(220);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(412);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_decimal_lit);
      if (lookahead == '.') ADVANCE(416);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(407);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_decimal_lit);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(413);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_decimal_lit);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(409);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_octal_lit);
      if (lookahead == '.') ADVANCE(416);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(213);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(412);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_octal_lit);
      if (lookahead == '.') ADVANCE(416);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(213);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(410);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_octal_lit);
      if (lookahead == '.') ADVANCE(416);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(213);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(412);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_octal_lit);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(413);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_hex_lit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(414);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_float_lit);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_float_lit);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(416);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_float_lit);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(417);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(419);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(422);
      if (lookahead == '/') ADVANCE(419);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(424);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(421);
      if (lookahead == '/') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(422);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(422);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(420);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(424);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(424);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\n') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '*') ADVANCE(429);
      if (lookahead == '/') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(431);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '*') ADVANCE(428);
      if (lookahead == '/') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(429);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '*') ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(429);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '/') ADVANCE(427);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(431);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(431);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(432);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_max);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_weak);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_public);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_repeated);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_repeated);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_syntax);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_DQUOTEproto2_DQUOTE);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_SQUOTEproto2_SQUOTE);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_message);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_message);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_extend);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_oneof);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_oneof);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_group);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_group);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_extensions);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_required);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_optional);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_optional);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_DQUOTEproto3_DQUOTE);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_SQUOTEproto3_SQUOTE);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_DQUOTEeditions_DQUOTE);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_SQUOTEeditions_SQUOTE);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_edition);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_edition_version);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_edition_version);
      if (lookahead == '.') ADVANCE(416);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 7},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 7},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 7},
  [34] = {.lex_state = 7},
  [35] = {.lex_state = 7},
  [36] = {.lex_state = 7},
  [37] = {.lex_state = 7},
  [38] = {.lex_state = 19},
  [39] = {.lex_state = 7},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 20},
  [42] = {.lex_state = 21},
  [43] = {.lex_state = 21},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 21},
  [46] = {.lex_state = 21},
  [47] = {.lex_state = 21},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 229},
  [53] = {.lex_state = 229},
  [54] = {.lex_state = 229},
  [55] = {.lex_state = 229},
  [56] = {.lex_state = 229},
  [57] = {.lex_state = 229},
  [58] = {.lex_state = 229},
  [59] = {.lex_state = 229},
  [60] = {.lex_state = 229},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 229},
  [84] = {.lex_state = 229},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 2},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 12},
  [91] = {.lex_state = 229},
  [92] = {.lex_state = 12},
  [93] = {.lex_state = 229},
  [94] = {.lex_state = 229},
  [95] = {.lex_state = 12},
  [96] = {.lex_state = 229},
  [97] = {.lex_state = 229},
  [98] = {.lex_state = 229},
  [99] = {.lex_state = 229},
  [100] = {.lex_state = 229},
  [101] = {.lex_state = 229},
  [102] = {.lex_state = 229},
  [103] = {.lex_state = 229},
  [104] = {.lex_state = 229},
  [105] = {.lex_state = 229},
  [106] = {.lex_state = 229},
  [107] = {.lex_state = 229},
  [108] = {.lex_state = 229},
  [109] = {.lex_state = 229},
  [110] = {.lex_state = 24},
  [111] = {.lex_state = 24},
  [112] = {.lex_state = 24},
  [113] = {.lex_state = 229},
  [114] = {.lex_state = 229},
  [115] = {.lex_state = 24},
  [116] = {.lex_state = 12},
  [117] = {.lex_state = 229},
  [118] = {.lex_state = 229},
  [119] = {.lex_state = 24},
  [120] = {.lex_state = 24},
  [121] = {.lex_state = 229},
  [122] = {.lex_state = 229},
  [123] = {.lex_state = 24},
  [124] = {.lex_state = 229},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 12},
  [131] = {.lex_state = 12},
  [132] = {.lex_state = 12},
  [133] = {.lex_state = 7},
  [134] = {.lex_state = 2},
  [135] = {.lex_state = 12},
  [136] = {.lex_state = 229},
  [137] = {.lex_state = 12},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 229},
  [140] = {.lex_state = 12},
  [141] = {.lex_state = 12},
  [142] = {.lex_state = 12},
  [143] = {.lex_state = 12},
  [144] = {.lex_state = 12},
  [145] = {.lex_state = 229},
  [146] = {.lex_state = 12},
  [147] = {.lex_state = 12},
  [148] = {.lex_state = 12},
  [149] = {.lex_state = 229},
  [150] = {.lex_state = 23},
  [151] = {.lex_state = 22},
  [152] = {.lex_state = 12},
  [153] = {.lex_state = 22},
  [154] = {.lex_state = 12},
  [155] = {.lex_state = 12},
  [156] = {.lex_state = 12},
  [157] = {.lex_state = 12},
  [158] = {.lex_state = 12},
  [159] = {.lex_state = 12},
  [160] = {.lex_state = 12},
  [161] = {.lex_state = 2},
  [162] = {.lex_state = 229},
  [163] = {.lex_state = 22},
  [164] = {.lex_state = 12},
  [165] = {.lex_state = 12},
  [166] = {.lex_state = 12},
  [167] = {.lex_state = 12},
  [168] = {.lex_state = 12},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 12},
  [171] = {.lex_state = 2},
  [172] = {.lex_state = 12},
  [173] = {.lex_state = 24},
  [174] = {.lex_state = 24},
  [175] = {.lex_state = 12},
  [176] = {.lex_state = 2},
  [177] = {.lex_state = 2},
  [178] = {.lex_state = 12},
  [179] = {.lex_state = 2},
  [180] = {.lex_state = 12},
  [181] = {.lex_state = 2},
  [182] = {.lex_state = 12},
  [183] = {.lex_state = 2},
  [184] = {.lex_state = 24},
  [185] = {.lex_state = 12},
  [186] = {.lex_state = 3},
  [187] = {.lex_state = 8},
  [188] = {.lex_state = 12},
  [189] = {.lex_state = 229},
  [190] = {.lex_state = 229},
  [191] = {.lex_state = 229},
  [192] = {.lex_state = 3},
  [193] = {.lex_state = 8},
  [194] = {.lex_state = 229},
  [195] = {.lex_state = 8},
  [196] = {.lex_state = 2},
  [197] = {.lex_state = 2},
  [198] = {.lex_state = 2},
  [199] = {.lex_state = 229},
  [200] = {.lex_state = 229},
  [201] = {.lex_state = 3},
  [202] = {.lex_state = 2},
  [203] = {.lex_state = 24},
  [204] = {.lex_state = 24},
  [205] = {.lex_state = 24},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 2},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 12},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 12},
  [223] = {.lex_state = 12},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 12},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 12},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 12},
  [232] = {.lex_state = 2},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 12},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 12},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 12},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 2},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 12},
  [253] = {.lex_state = 12},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 12},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 12},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 12},
  [267] = {.lex_state = 2},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 2},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 12},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 12},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 12},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 2},
  [283] = {.lex_state = 12},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 12},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 12},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 12},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 12},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 12},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 12},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 12},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 12},
  [333] = {.lex_state = 12},
  [334] = {.lex_state = 12},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 7},
  [338] = {.lex_state = 7},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 12},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 12},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 12},
  [355] = {.lex_state = 12},
  [356] = {.lex_state = 12},
  [357] = {.lex_state = 12},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 12},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 12},
  [362] = {.lex_state = 2},
  [363] = {.lex_state = 12},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 12},
  [370] = {.lex_state = 12},
  [371] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_package] = ACTIONS(1),
    [anon_sym_option] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_reserved] = ACTIONS(1),
    [anon_sym_to] = ACTIONS(1),
    [anon_sym_map] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_service] = ACTIONS(1),
    [anon_sym_rpc] = ACTIONS(1),
    [anon_sym_returns] = ACTIONS(1),
    [sym_stream] = ACTIONS(1),
    [anon_sym_int32] = ACTIONS(1),
    [anon_sym_int64] = ACTIONS(1),
    [anon_sym_uint32] = ACTIONS(1),
    [anon_sym_uint64] = ACTIONS(1),
    [anon_sym_sint32] = ACTIONS(1),
    [anon_sym_sint64] = ACTIONS(1),
    [anon_sym_fixed32] = ACTIONS(1),
    [anon_sym_fixed64] = ACTIONS(1),
    [anon_sym_sfixed32] = ACTIONS(1),
    [anon_sym_sfixed64] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_double] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_bytes] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_decimal_lit] = ACTIONS(1),
    [sym_octal_lit] = ACTIONS(1),
    [sym_hex_lit] = ACTIONS(1),
    [sym_float_lit] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_max] = ACTIONS(1),
    [sym_weak] = ACTIONS(1),
    [sym_public] = ACTIONS(1),
    [sym_repeated] = ACTIONS(1),
    [anon_sym_syntax] = ACTIONS(1),
    [anon_sym_message] = ACTIONS(1),
    [anon_sym_extend] = ACTIONS(1),
    [anon_sym_oneof] = ACTIONS(1),
    [anon_sym_group] = ACTIONS(1),
    [anon_sym_extensions] = ACTIONS(1),
    [sym_required] = ACTIONS(1),
    [sym_optional] = ACTIONS(1),
    [anon_sym_edition] = ACTIONS(1),
    [sym_edition_version] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(365),
    [sym_syntax2] = STATE(54),
    [sym_syntax3] = STATE(59),
    [sym_syntaxEditions] = STATE(52),
    [sym_edition] = STATE(59),
    [sym_comment] = ACTIONS(3),
    [anon_sym_syntax] = ACTIONS(5),
    [anon_sym_edition] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_SEMI,
    ACTIONS(11), 1,
      anon_sym_option,
    ACTIONS(13), 1,
      anon_sym_DOT,
    ACTIONS(15), 1,
      anon_sym_enum,
    ACTIONS(17), 1,
      anon_sym_RBRACE,
    ACTIONS(19), 1,
      anon_sym_reserved,
    ACTIONS(21), 1,
      anon_sym_map,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(29), 1,
      anon_sym_message,
    ACTIONS(31), 1,
      anon_sym_oneof,
    STATE(274), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(277), 1,
      sym_message_or_enum_type,
    STATE(287), 1,
      sym_type,
    ACTIONS(27), 2,
      sym_repeated,
      sym_optional,
    STATE(4), 9,
      sym_empty_statement,
      sym_option,
      sym_enum,
      sym_reserved,
      sym_map_field,
      sym_message3,
      sym_oneof3,
      sym_field3,
      aux_sym_message_body3_repeat1,
    ACTIONS(23), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [75] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_SEMI,
    ACTIONS(11), 1,
      anon_sym_option,
    ACTIONS(13), 1,
      anon_sym_DOT,
    ACTIONS(15), 1,
      anon_sym_enum,
    ACTIONS(19), 1,
      anon_sym_reserved,
    ACTIONS(21), 1,
      anon_sym_map,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(29), 1,
      anon_sym_message,
    ACTIONS(31), 1,
      anon_sym_oneof,
    ACTIONS(33), 1,
      anon_sym_RBRACE,
    STATE(274), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(277), 1,
      sym_message_or_enum_type,
    STATE(287), 1,
      sym_type,
    ACTIONS(27), 2,
      sym_repeated,
      sym_optional,
    STATE(5), 9,
      sym_empty_statement,
      sym_option,
      sym_enum,
      sym_reserved,
      sym_map_field,
      sym_message3,
      sym_oneof3,
      sym_field3,
      aux_sym_message_body3_repeat1,
    ACTIONS(23), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [150] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_SEMI,
    ACTIONS(38), 1,
      anon_sym_option,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(44), 1,
      anon_sym_enum,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    ACTIONS(49), 1,
      anon_sym_reserved,
    ACTIONS(52), 1,
      anon_sym_map,
    ACTIONS(58), 1,
      sym_identifier,
    ACTIONS(64), 1,
      anon_sym_message,
    ACTIONS(67), 1,
      anon_sym_oneof,
    STATE(274), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(277), 1,
      sym_message_or_enum_type,
    STATE(287), 1,
      sym_type,
    ACTIONS(61), 2,
      sym_repeated,
      sym_optional,
    STATE(4), 9,
      sym_empty_statement,
      sym_option,
      sym_enum,
      sym_reserved,
      sym_map_field,
      sym_message3,
      sym_oneof3,
      sym_field3,
      aux_sym_message_body3_repeat1,
    ACTIONS(55), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [225] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_SEMI,
    ACTIONS(11), 1,
      anon_sym_option,
    ACTIONS(13), 1,
      anon_sym_DOT,
    ACTIONS(15), 1,
      anon_sym_enum,
    ACTIONS(19), 1,
      anon_sym_reserved,
    ACTIONS(21), 1,
      anon_sym_map,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(29), 1,
      anon_sym_message,
    ACTIONS(31), 1,
      anon_sym_oneof,
    ACTIONS(70), 1,
      anon_sym_RBRACE,
    STATE(274), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(277), 1,
      sym_message_or_enum_type,
    STATE(287), 1,
      sym_type,
    ACTIONS(27), 2,
      sym_repeated,
      sym_optional,
    STATE(4), 9,
      sym_empty_statement,
      sym_option,
      sym_enum,
      sym_reserved,
      sym_map_field,
      sym_message3,
      sym_oneof3,
      sym_field3,
      aux_sym_message_body3_repeat1,
    ACTIONS(23), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [300] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_SEMI,
    ACTIONS(11), 1,
      anon_sym_option,
    ACTIONS(13), 1,
      anon_sym_DOT,
    ACTIONS(15), 1,
      anon_sym_enum,
    ACTIONS(19), 1,
      anon_sym_reserved,
    ACTIONS(21), 1,
      anon_sym_map,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(29), 1,
      anon_sym_message,
    ACTIONS(31), 1,
      anon_sym_oneof,
    ACTIONS(72), 1,
      anon_sym_RBRACE,
    STATE(274), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(277), 1,
      sym_message_or_enum_type,
    STATE(287), 1,
      sym_type,
    ACTIONS(27), 2,
      sym_repeated,
      sym_optional,
    STATE(2), 9,
      sym_empty_statement,
      sym_option,
      sym_enum,
      sym_reserved,
      sym_map_field,
      sym_message3,
      sym_oneof3,
      sym_field3,
      aux_sym_message_body3_repeat1,
    ACTIONS(23), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [375] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      anon_sym_SEMI,
    ACTIONS(77), 1,
      anon_sym_option,
    ACTIONS(80), 1,
      anon_sym_DOT,
    ACTIONS(83), 1,
      anon_sym_RBRACE,
    ACTIONS(88), 1,
      sym_identifier,
    STATE(274), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(277), 1,
      sym_message_or_enum_type,
    STATE(369), 1,
      sym_type,
    ACTIONS(91), 2,
      sym_repeated,
      sym_optional,
    STATE(7), 4,
      sym_empty_statement,
      sym_option,
      sym_field3,
      aux_sym_oneof_body3_repeat1,
    ACTIONS(85), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [430] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(94), 1,
      anon_sym_SEMI,
    ACTIONS(96), 1,
      anon_sym_option,
    ACTIONS(98), 1,
      anon_sym_RBRACE,
    STATE(274), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(277), 1,
      sym_message_or_enum_type,
    STATE(369), 1,
      sym_type,
    ACTIONS(100), 2,
      sym_repeated,
      sym_optional,
    STATE(9), 4,
      sym_empty_statement,
      sym_option,
      sym_field3,
      aux_sym_oneof_body3_repeat1,
    ACTIONS(23), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [485] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(94), 1,
      anon_sym_SEMI,
    ACTIONS(96), 1,
      anon_sym_option,
    ACTIONS(102), 1,
      anon_sym_RBRACE,
    STATE(274), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(277), 1,
      sym_message_or_enum_type,
    STATE(369), 1,
      sym_type,
    ACTIONS(100), 2,
      sym_repeated,
      sym_optional,
    STATE(7), 4,
      sym_empty_statement,
      sym_option,
      sym_field3,
      aux_sym_oneof_body3_repeat1,
    ACTIONS(23), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [540] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(106), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_reserved,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_identifier,
      sym_repeated,
      anon_sym_message,
      anon_sym_oneof,
      sym_optional,
  [575] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(110), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_reserved,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_identifier,
      sym_repeated,
      anon_sym_message,
      anon_sym_oneof,
      sym_optional,
  [610] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(114), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_reserved,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_identifier,
      sym_repeated,
      anon_sym_message,
      anon_sym_oneof,
      sym_optional,
  [645] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(118), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_reserved,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_identifier,
      sym_repeated,
      anon_sym_message,
      anon_sym_oneof,
      sym_optional,
  [680] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(122), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_reserved,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_identifier,
      sym_repeated,
      anon_sym_message,
      anon_sym_oneof,
      sym_optional,
  [715] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(126), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_reserved,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_identifier,
      sym_repeated,
      anon_sym_message,
      anon_sym_oneof,
      sym_optional,
  [750] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(130), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_reserved,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_identifier,
      sym_repeated,
      anon_sym_message,
      anon_sym_oneof,
      sym_optional,
  [785] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(134), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_reserved,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_identifier,
      sym_repeated,
      anon_sym_message,
      anon_sym_oneof,
      sym_optional,
  [820] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(138), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_reserved,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_identifier,
      sym_repeated,
      anon_sym_message,
      anon_sym_oneof,
      sym_optional,
  [855] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(142), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_reserved,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_identifier,
      sym_repeated,
      anon_sym_message,
      anon_sym_oneof,
      sym_optional,
  [890] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(146), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_reserved,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_identifier,
      sym_repeated,
      anon_sym_message,
      anon_sym_oneof,
      sym_optional,
  [925] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(150), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_reserved,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_identifier,
      sym_repeated,
      anon_sym_message,
      anon_sym_oneof,
      sym_optional,
  [960] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(154), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_reserved,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_identifier,
      sym_repeated,
      anon_sym_message,
      anon_sym_oneof,
      sym_optional,
  [995] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(158), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_reserved,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_identifier,
      sym_repeated,
      anon_sym_message,
      anon_sym_oneof,
      sym_optional,
  [1030] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(162), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_reserved,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_identifier,
      sym_repeated,
      anon_sym_message,
      anon_sym_oneof,
      sym_optional,
  [1065] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(166), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_reserved,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_identifier,
      sym_repeated,
      anon_sym_message,
      anon_sym_oneof,
      sym_optional,
  [1100] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(170), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_reserved,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_identifier,
      sym_repeated,
      anon_sym_message,
      anon_sym_oneof,
      sym_optional,
  [1135] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(174), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_reserved,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_identifier,
      sym_repeated,
      anon_sym_message,
      anon_sym_oneof,
      sym_optional,
  [1170] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_SEMI,
    ACTIONS(178), 1,
      anon_sym_option,
    ACTIONS(180), 1,
      anon_sym_enum,
    ACTIONS(182), 1,
      anon_sym_RBRACE,
    ACTIONS(184), 1,
      anon_sym_reserved,
    ACTIONS(188), 1,
      anon_sym_message,
    ACTIONS(190), 1,
      anon_sym_extend,
    ACTIONS(192), 1,
      anon_sym_oneof,
    ACTIONS(194), 1,
      anon_sym_extensions,
    ACTIONS(186), 3,
      sym_repeated,
      sym_required,
      sym_optional,
    STATE(29), 12,
      sym_empty_statement,
      sym_option,
      sym_enum,
      sym_reserved,
      sym_message2,
      sym_extend,
      sym_oneof2,
      sym_field2,
      sym_map_field2,
      sym_group_field,
      sym_extensions,
      aux_sym_message_body2_repeat1,
  [1220] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_SEMI,
    ACTIONS(178), 1,
      anon_sym_option,
    ACTIONS(180), 1,
      anon_sym_enum,
    ACTIONS(184), 1,
      anon_sym_reserved,
    ACTIONS(188), 1,
      anon_sym_message,
    ACTIONS(190), 1,
      anon_sym_extend,
    ACTIONS(192), 1,
      anon_sym_oneof,
    ACTIONS(194), 1,
      anon_sym_extensions,
    ACTIONS(196), 1,
      anon_sym_RBRACE,
    ACTIONS(186), 3,
      sym_repeated,
      sym_required,
      sym_optional,
    STATE(31), 12,
      sym_empty_statement,
      sym_option,
      sym_enum,
      sym_reserved,
      sym_message2,
      sym_extend,
      sym_oneof2,
      sym_field2,
      sym_map_field2,
      sym_group_field,
      sym_extensions,
      aux_sym_message_body2_repeat1,
  [1270] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_SEMI,
    ACTIONS(178), 1,
      anon_sym_option,
    ACTIONS(180), 1,
      anon_sym_enum,
    ACTIONS(184), 1,
      anon_sym_reserved,
    ACTIONS(188), 1,
      anon_sym_message,
    ACTIONS(190), 1,
      anon_sym_extend,
    ACTIONS(192), 1,
      anon_sym_oneof,
    ACTIONS(194), 1,
      anon_sym_extensions,
    ACTIONS(198), 1,
      anon_sym_RBRACE,
    ACTIONS(186), 3,
      sym_repeated,
      sym_required,
      sym_optional,
    STATE(31), 12,
      sym_empty_statement,
      sym_option,
      sym_enum,
      sym_reserved,
      sym_message2,
      sym_extend,
      sym_oneof2,
      sym_field2,
      sym_map_field2,
      sym_group_field,
      sym_extensions,
      aux_sym_message_body2_repeat1,
  [1320] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_SEMI,
    ACTIONS(203), 1,
      anon_sym_option,
    ACTIONS(206), 1,
      anon_sym_enum,
    ACTIONS(209), 1,
      anon_sym_RBRACE,
    ACTIONS(211), 1,
      anon_sym_reserved,
    ACTIONS(217), 1,
      anon_sym_message,
    ACTIONS(220), 1,
      anon_sym_extend,
    ACTIONS(223), 1,
      anon_sym_oneof,
    ACTIONS(226), 1,
      anon_sym_extensions,
    ACTIONS(214), 3,
      sym_repeated,
      sym_required,
      sym_optional,
    STATE(31), 12,
      sym_empty_statement,
      sym_option,
      sym_enum,
      sym_reserved,
      sym_message2,
      sym_extend,
      sym_oneof2,
      sym_field2,
      sym_map_field2,
      sym_group_field,
      sym_extensions,
      aux_sym_message_body2_repeat1,
  [1370] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_SEMI,
    ACTIONS(178), 1,
      anon_sym_option,
    ACTIONS(180), 1,
      anon_sym_enum,
    ACTIONS(184), 1,
      anon_sym_reserved,
    ACTIONS(188), 1,
      anon_sym_message,
    ACTIONS(190), 1,
      anon_sym_extend,
    ACTIONS(192), 1,
      anon_sym_oneof,
    ACTIONS(194), 1,
      anon_sym_extensions,
    ACTIONS(229), 1,
      anon_sym_RBRACE,
    ACTIONS(186), 3,
      sym_repeated,
      sym_required,
      sym_optional,
    STATE(30), 12,
      sym_empty_statement,
      sym_option,
      sym_enum,
      sym_reserved,
      sym_message2,
      sym_extend,
      sym_oneof2,
      sym_field2,
      sym_map_field2,
      sym_group_field,
      sym_extensions,
      aux_sym_message_body2_repeat1,
  [1420] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(174), 19,
      anon_sym_option,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_identifier,
      sym_repeated,
      sym_optional,
  [1450] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(170), 19,
      anon_sym_option,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_identifier,
      sym_repeated,
      sym_optional,
  [1480] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(118), 19,
      anon_sym_option,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_identifier,
      sym_repeated,
      sym_optional,
  [1510] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(130), 19,
      anon_sym_option,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_identifier,
      sym_repeated,
      sym_optional,
  [1540] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(114), 19,
      anon_sym_option,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_identifier,
      sym_repeated,
      sym_optional,
  [1570] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(231), 1,
      anon_sym_map,
    ACTIONS(233), 1,
      anon_sym_group,
    STATE(274), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(277), 1,
      sym_message_or_enum_type,
    STATE(361), 1,
      sym_type,
    ACTIONS(23), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [1612] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(126), 19,
      anon_sym_option,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_identifier,
      sym_repeated,
      sym_optional,
  [1642] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_LBRACE,
    ACTIONS(239), 1,
      anon_sym_LBRACK,
    ACTIONS(241), 1,
      anon_sym_LT,
    ACTIONS(243), 1,
      sym_identifier,
    ACTIONS(245), 1,
      anon_sym_COLON,
    ACTIONS(249), 1,
      sym_hex_lit,
    ACTIONS(251), 1,
      sym_float_lit,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    ACTIONS(255), 1,
      anon_sym_SQUOTE,
    STATE(154), 1,
      sym_constant,
    ACTIONS(237), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(247), 2,
      sym_decimal_lit,
      sym_octal_lit,
    ACTIONS(257), 2,
      sym_true,
      sym_false,
    STATE(141), 5,
      sym_full_ident,
      sym_message_value,
      sym_bool,
      sym_int_lit,
      sym_string,
  [1695] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(233), 1,
      anon_sym_group,
    STATE(274), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(277), 1,
      sym_message_or_enum_type,
    STATE(361), 1,
      sym_type,
    ACTIONS(23), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [1734] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      sym_identifier,
    STATE(274), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(277), 1,
      sym_message_or_enum_type,
    STATE(361), 1,
      sym_type,
    ACTIONS(23), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [1770] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      sym_identifier,
    STATE(274), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(277), 1,
      sym_message_or_enum_type,
    STATE(370), 1,
      sym_type,
    ACTIONS(23), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [1806] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_LBRACE,
    ACTIONS(241), 1,
      anon_sym_LT,
    ACTIONS(243), 1,
      sym_identifier,
    ACTIONS(249), 1,
      sym_hex_lit,
    ACTIONS(251), 1,
      sym_float_lit,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    ACTIONS(255), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    STATE(156), 1,
      sym_constant,
    ACTIONS(237), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(247), 2,
      sym_decimal_lit,
      sym_octal_lit,
    ACTIONS(257), 2,
      sym_true,
      sym_false,
    STATE(141), 5,
      sym_full_ident,
      sym_message_value,
      sym_bool,
      sym_int_lit,
      sym_string,
  [1856] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      sym_identifier,
    STATE(274), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(277), 1,
      sym_message_or_enum_type,
    STATE(308), 1,
      sym_type,
    ACTIONS(23), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [1892] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      sym_identifier,
    STATE(274), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(277), 1,
      sym_message_or_enum_type,
    STATE(288), 1,
      sym_type,
    ACTIONS(23), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [1928] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      sym_identifier,
    STATE(274), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(277), 1,
      sym_message_or_enum_type,
    STATE(300), 1,
      sym_type,
    ACTIONS(23), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [1964] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_LBRACE,
    ACTIONS(241), 1,
      anon_sym_LT,
    ACTIONS(243), 1,
      sym_identifier,
    ACTIONS(251), 1,
      sym_float_lit,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    ACTIONS(255), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      sym_hex_lit,
    STATE(215), 1,
      sym_constant,
    ACTIONS(257), 2,
      sym_true,
      sym_false,
    ACTIONS(261), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(263), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(141), 5,
      sym_full_ident,
      sym_message_value,
      sym_bool,
      sym_int_lit,
      sym_string,
  [2011] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_LBRACE,
    ACTIONS(241), 1,
      anon_sym_LT,
    ACTIONS(243), 1,
      sym_identifier,
    ACTIONS(251), 1,
      sym_float_lit,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    ACTIONS(255), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      sym_hex_lit,
    STATE(230), 1,
      sym_constant,
    ACTIONS(257), 2,
      sym_true,
      sym_false,
    ACTIONS(261), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(263), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(141), 5,
      sym_full_ident,
      sym_message_value,
      sym_bool,
      sym_int_lit,
      sym_string,
  [2058] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_LBRACE,
    ACTIONS(241), 1,
      anon_sym_LT,
    ACTIONS(243), 1,
      sym_identifier,
    ACTIONS(251), 1,
      sym_float_lit,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    ACTIONS(255), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      sym_hex_lit,
    STATE(280), 1,
      sym_constant,
    ACTIONS(257), 2,
      sym_true,
      sym_false,
    ACTIONS(261), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(263), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(141), 5,
      sym_full_ident,
      sym_message_value,
      sym_bool,
      sym_int_lit,
      sym_string,
  [2105] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_LBRACE,
    ACTIONS(241), 1,
      anon_sym_LT,
    ACTIONS(243), 1,
      sym_identifier,
    ACTIONS(251), 1,
      sym_float_lit,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    ACTIONS(255), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      sym_hex_lit,
    STATE(212), 1,
      sym_constant,
    ACTIONS(257), 2,
      sym_true,
      sym_false,
    ACTIONS(261), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(263), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(141), 5,
      sym_full_ident,
      sym_message_value,
      sym_bool,
      sym_int_lit,
      sym_string,
  [2152] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_edition,
    ACTIONS(267), 1,
      ts_builtin_sym_end,
    ACTIONS(269), 1,
      anon_sym_SEMI,
    ACTIONS(271), 1,
      anon_sym_import,
    ACTIONS(273), 1,
      anon_sym_package,
    ACTIONS(275), 1,
      anon_sym_option,
    ACTIONS(277), 1,
      anon_sym_enum,
    ACTIONS(279), 1,
      anon_sym_service,
    ACTIONS(281), 1,
      anon_sym_message,
    STATE(58), 1,
      sym_edition,
    STATE(57), 8,
      sym_empty_statement,
      sym_import,
      sym_package,
      sym_option,
      sym_enum,
      sym_service,
      sym_message3,
      aux_sym_source_file_repeat2,
  [2196] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      ts_builtin_sym_end,
    ACTIONS(285), 1,
      anon_sym_SEMI,
    ACTIONS(288), 1,
      anon_sym_import,
    ACTIONS(291), 1,
      anon_sym_package,
    ACTIONS(294), 1,
      anon_sym_option,
    ACTIONS(297), 1,
      anon_sym_enum,
    ACTIONS(300), 1,
      anon_sym_service,
    ACTIONS(303), 1,
      anon_sym_message,
    ACTIONS(306), 1,
      anon_sym_extend,
    STATE(53), 9,
      sym_empty_statement,
      sym_import,
      sym_package,
      sym_option,
      sym_enum,
      sym_service,
      sym_message2,
      sym_extend,
      aux_sym_source_file_repeat1,
  [2238] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      ts_builtin_sym_end,
    ACTIONS(269), 1,
      anon_sym_SEMI,
    ACTIONS(271), 1,
      anon_sym_import,
    ACTIONS(273), 1,
      anon_sym_package,
    ACTIONS(275), 1,
      anon_sym_option,
    ACTIONS(277), 1,
      anon_sym_enum,
    ACTIONS(279), 1,
      anon_sym_service,
    ACTIONS(309), 1,
      anon_sym_message,
    ACTIONS(311), 1,
      anon_sym_extend,
    STATE(55), 9,
      sym_empty_statement,
      sym_import,
      sym_package,
      sym_option,
      sym_enum,
      sym_service,
      sym_message2,
      sym_extend,
      aux_sym_source_file_repeat1,
  [2280] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_SEMI,
    ACTIONS(271), 1,
      anon_sym_import,
    ACTIONS(273), 1,
      anon_sym_package,
    ACTIONS(275), 1,
      anon_sym_option,
    ACTIONS(277), 1,
      anon_sym_enum,
    ACTIONS(279), 1,
      anon_sym_service,
    ACTIONS(309), 1,
      anon_sym_message,
    ACTIONS(311), 1,
      anon_sym_extend,
    ACTIONS(313), 1,
      ts_builtin_sym_end,
    STATE(53), 9,
      sym_empty_statement,
      sym_import,
      sym_package,
      sym_option,
      sym_enum,
      sym_service,
      sym_message2,
      sym_extend,
      aux_sym_source_file_repeat1,
  [2322] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_SEMI,
    ACTIONS(271), 1,
      anon_sym_import,
    ACTIONS(273), 1,
      anon_sym_package,
    ACTIONS(275), 1,
      anon_sym_option,
    ACTIONS(277), 1,
      anon_sym_enum,
    ACTIONS(279), 1,
      anon_sym_service,
    ACTIONS(281), 1,
      anon_sym_message,
    ACTIONS(315), 1,
      ts_builtin_sym_end,
    STATE(60), 8,
      sym_empty_statement,
      sym_import,
      sym_package,
      sym_option,
      sym_enum,
      sym_service,
      sym_message3,
      aux_sym_source_file_repeat2,
  [2360] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_SEMI,
    ACTIONS(271), 1,
      anon_sym_import,
    ACTIONS(273), 1,
      anon_sym_package,
    ACTIONS(275), 1,
      anon_sym_option,
    ACTIONS(277), 1,
      anon_sym_enum,
    ACTIONS(279), 1,
      anon_sym_service,
    ACTIONS(281), 1,
      anon_sym_message,
    ACTIONS(313), 1,
      ts_builtin_sym_end,
    STATE(60), 8,
      sym_empty_statement,
      sym_import,
      sym_package,
      sym_option,
      sym_enum,
      sym_service,
      sym_message3,
      aux_sym_source_file_repeat2,
  [2398] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_SEMI,
    ACTIONS(271), 1,
      anon_sym_import,
    ACTIONS(273), 1,
      anon_sym_package,
    ACTIONS(275), 1,
      anon_sym_option,
    ACTIONS(277), 1,
      anon_sym_enum,
    ACTIONS(279), 1,
      anon_sym_service,
    ACTIONS(281), 1,
      anon_sym_message,
    ACTIONS(313), 1,
      ts_builtin_sym_end,
    STATE(56), 8,
      sym_empty_statement,
      sym_import,
      sym_package,
      sym_option,
      sym_enum,
      sym_service,
      sym_message3,
      aux_sym_source_file_repeat2,
  [2436] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      ts_builtin_sym_end,
    ACTIONS(269), 1,
      anon_sym_SEMI,
    ACTIONS(271), 1,
      anon_sym_import,
    ACTIONS(273), 1,
      anon_sym_package,
    ACTIONS(275), 1,
      anon_sym_option,
    ACTIONS(277), 1,
      anon_sym_enum,
    ACTIONS(279), 1,
      anon_sym_service,
    ACTIONS(281), 1,
      anon_sym_message,
    STATE(57), 8,
      sym_empty_statement,
      sym_import,
      sym_package,
      sym_option,
      sym_enum,
      sym_service,
      sym_message3,
      aux_sym_source_file_repeat2,
  [2474] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      ts_builtin_sym_end,
    ACTIONS(319), 1,
      anon_sym_SEMI,
    ACTIONS(322), 1,
      anon_sym_import,
    ACTIONS(325), 1,
      anon_sym_package,
    ACTIONS(328), 1,
      anon_sym_option,
    ACTIONS(331), 1,
      anon_sym_enum,
    ACTIONS(334), 1,
      anon_sym_service,
    ACTIONS(337), 1,
      anon_sym_message,
    STATE(60), 8,
      sym_empty_statement,
      sym_import,
      sym_package,
      sym_option,
      sym_enum,
      sym_service,
      sym_message3,
      aux_sym_source_file_repeat2,
  [2512] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(320), 1,
      sym_key_type,
    ACTIONS(340), 12,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
  [2533] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(284), 1,
      sym_key_type,
    ACTIONS(340), 12,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
  [2554] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_option,
    ACTIONS(108), 11,
      anon_sym_SEMI,
      anon_sym_enum,
      anon_sym_RBRACE,
      anon_sym_reserved,
      sym_repeated,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_oneof,
      anon_sym_extensions,
      sym_required,
      sym_optional,
  [2574] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      anon_sym_option,
    ACTIONS(342), 11,
      anon_sym_SEMI,
      anon_sym_enum,
      anon_sym_RBRACE,
      anon_sym_reserved,
      sym_repeated,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_oneof,
      anon_sym_extensions,
      sym_required,
      sym_optional,
  [2594] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      anon_sym_option,
    ACTIONS(346), 11,
      anon_sym_SEMI,
      anon_sym_enum,
      anon_sym_RBRACE,
      anon_sym_reserved,
      sym_repeated,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_oneof,
      anon_sym_extensions,
      sym_required,
      sym_optional,
  [2614] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      anon_sym_option,
    ACTIONS(148), 11,
      anon_sym_SEMI,
      anon_sym_enum,
      anon_sym_RBRACE,
      anon_sym_reserved,
      sym_repeated,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_oneof,
      anon_sym_extensions,
      sym_required,
      sym_optional,
  [2634] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_option,
    ACTIONS(350), 11,
      anon_sym_SEMI,
      anon_sym_enum,
      anon_sym_RBRACE,
      anon_sym_reserved,
      sym_repeated,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_oneof,
      anon_sym_extensions,
      sym_required,
      sym_optional,
  [2654] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_option,
    ACTIONS(354), 11,
      anon_sym_SEMI,
      anon_sym_enum,
      anon_sym_RBRACE,
      anon_sym_reserved,
      sym_repeated,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_oneof,
      anon_sym_extensions,
      sym_required,
      sym_optional,
  [2674] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_option,
    ACTIONS(160), 11,
      anon_sym_SEMI,
      anon_sym_enum,
      anon_sym_RBRACE,
      anon_sym_reserved,
      sym_repeated,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_oneof,
      anon_sym_extensions,
      sym_required,
      sym_optional,
  [2694] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      anon_sym_option,
    ACTIONS(116), 11,
      anon_sym_SEMI,
      anon_sym_enum,
      anon_sym_RBRACE,
      anon_sym_reserved,
      sym_repeated,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_oneof,
      anon_sym_extensions,
      sym_required,
      sym_optional,
  [2714] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      anon_sym_option,
    ACTIONS(358), 11,
      anon_sym_SEMI,
      anon_sym_enum,
      anon_sym_RBRACE,
      anon_sym_reserved,
      sym_repeated,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_oneof,
      anon_sym_extensions,
      sym_required,
      sym_optional,
  [2734] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_option,
    ACTIONS(362), 11,
      anon_sym_SEMI,
      anon_sym_enum,
      anon_sym_RBRACE,
      anon_sym_reserved,
      sym_repeated,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_oneof,
      anon_sym_extensions,
      sym_required,
      sym_optional,
  [2754] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      anon_sym_option,
    ACTIONS(366), 11,
      anon_sym_SEMI,
      anon_sym_enum,
      anon_sym_RBRACE,
      anon_sym_reserved,
      sym_repeated,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_oneof,
      anon_sym_extensions,
      sym_required,
      sym_optional,
  [2774] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_option,
    ACTIONS(370), 11,
      anon_sym_SEMI,
      anon_sym_enum,
      anon_sym_RBRACE,
      anon_sym_reserved,
      sym_repeated,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_oneof,
      anon_sym_extensions,
      sym_required,
      sym_optional,
  [2794] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_option,
    ACTIONS(152), 11,
      anon_sym_SEMI,
      anon_sym_enum,
      anon_sym_RBRACE,
      anon_sym_reserved,
      sym_repeated,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_oneof,
      anon_sym_extensions,
      sym_required,
      sym_optional,
  [2814] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_option,
    ACTIONS(374), 11,
      anon_sym_SEMI,
      anon_sym_enum,
      anon_sym_RBRACE,
      anon_sym_reserved,
      sym_repeated,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_oneof,
      anon_sym_extensions,
      sym_required,
      sym_optional,
  [2834] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      anon_sym_option,
    ACTIONS(378), 11,
      anon_sym_SEMI,
      anon_sym_enum,
      anon_sym_RBRACE,
      anon_sym_reserved,
      sym_repeated,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_oneof,
      anon_sym_extensions,
      sym_required,
      sym_optional,
  [2854] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_option,
    ACTIONS(382), 11,
      anon_sym_SEMI,
      anon_sym_enum,
      anon_sym_RBRACE,
      anon_sym_reserved,
      sym_repeated,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_oneof,
      anon_sym_extensions,
      sym_required,
      sym_optional,
  [2874] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      anon_sym_option,
    ACTIONS(128), 11,
      anon_sym_SEMI,
      anon_sym_enum,
      anon_sym_RBRACE,
      anon_sym_reserved,
      sym_repeated,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_oneof,
      anon_sym_extensions,
      sym_required,
      sym_optional,
  [2894] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      anon_sym_option,
    ACTIONS(386), 11,
      anon_sym_SEMI,
      anon_sym_enum,
      anon_sym_RBRACE,
      anon_sym_reserved,
      sym_repeated,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_oneof,
      anon_sym_extensions,
      sym_required,
      sym_optional,
  [2914] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      anon_sym_option,
    ACTIONS(390), 11,
      anon_sym_SEMI,
      anon_sym_enum,
      anon_sym_RBRACE,
      anon_sym_reserved,
      sym_repeated,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_oneof,
      anon_sym_extensions,
      sym_required,
      sym_optional,
  [2934] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      anon_sym_option,
    ACTIONS(394), 11,
      anon_sym_SEMI,
      anon_sym_enum,
      anon_sym_RBRACE,
      anon_sym_reserved,
      sym_repeated,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_oneof,
      anon_sym_extensions,
      sym_required,
      sym_optional,
  [2954] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_RBRACE,
      anon_sym_service,
      anon_sym_rpc,
      anon_sym_message,
      anon_sym_extend,
  [2971] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_RBRACE,
      anon_sym_service,
      anon_sym_rpc,
      anon_sym_message,
      anon_sym_extend,
  [2988] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      anon_sym_SEMI,
    ACTIONS(401), 1,
      anon_sym_option,
    ACTIONS(404), 1,
      anon_sym_RBRACE,
    ACTIONS(406), 3,
      sym_repeated,
      sym_required,
      sym_optional,
    STATE(85), 4,
      sym_empty_statement,
      sym_option,
      sym_field2,
      aux_sym_oneof_body2_repeat1,
  [3012] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_SEMI,
    ACTIONS(178), 1,
      anon_sym_option,
    ACTIONS(409), 1,
      anon_sym_RBRACE,
    ACTIONS(411), 3,
      sym_repeated,
      sym_required,
      sym_optional,
    STATE(85), 4,
      sym_empty_statement,
      sym_option,
      sym_field2,
      aux_sym_oneof_body2_repeat1,
  [3036] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    ACTIONS(255), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      sym_decimal_lit,
    STATE(216), 1,
      sym_string,
    STATE(217), 1,
      sym_int_lit,
    STATE(219), 1,
      sym_range,
    ACTIONS(265), 2,
      sym_octal_lit,
      sym_hex_lit,
    STATE(344), 2,
      sym_ranges,
      sym_field_names,
  [3066] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    ACTIONS(255), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      sym_decimal_lit,
    STATE(216), 1,
      sym_string,
    STATE(217), 1,
      sym_int_lit,
    STATE(219), 1,
      sym_range,
    ACTIONS(265), 2,
      sym_octal_lit,
      sym_hex_lit,
    STATE(343), 2,
      sym_ranges,
      sym_field_names,
  [3096] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_SEMI,
    ACTIONS(178), 1,
      anon_sym_option,
    ACTIONS(413), 1,
      anon_sym_RBRACE,
    ACTIONS(411), 3,
      sym_repeated,
      sym_required,
      sym_optional,
    STATE(86), 4,
      sym_empty_statement,
      sym_option,
      sym_field2,
      aux_sym_oneof_body2_repeat1,
  [3120] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      anon_sym_DOT,
    STATE(90), 1,
      aux_sym_full_ident_repeat1,
    ACTIONS(415), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_GT,
      sym_identifier,
  [3139] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_service,
      anon_sym_message,
      anon_sym_edition,
  [3154] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      anon_sym_DOT,
    STATE(95), 1,
      aux_sym_full_ident_repeat1,
    ACTIONS(422), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_GT,
      sym_identifier,
  [3173] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_service,
      anon_sym_message,
      anon_sym_extend,
  [3188] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_service,
      anon_sym_message,
      anon_sym_extend,
  [3203] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      anon_sym_DOT,
    STATE(90), 1,
      aux_sym_full_ident_repeat1,
    ACTIONS(430), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_GT,
      sym_identifier,
  [3222] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_service,
      anon_sym_message,
      anon_sym_extend,
  [3237] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_service,
      anon_sym_message,
      anon_sym_extend,
  [3252] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_service,
      anon_sym_message,
      anon_sym_extend,
  [3267] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_service,
      anon_sym_message,
      anon_sym_extend,
  [3282] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_service,
      anon_sym_message,
      anon_sym_extend,
  [3297] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_service,
      anon_sym_message,
      anon_sym_extend,
  [3312] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_service,
      anon_sym_message,
      anon_sym_extend,
  [3327] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_service,
      anon_sym_message,
      anon_sym_extend,
  [3342] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_service,
      anon_sym_message,
      anon_sym_extend,
  [3357] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_service,
      anon_sym_message,
      anon_sym_extend,
  [3372] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_service,
      anon_sym_message,
      anon_sym_extend,
  [3387] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_service,
      anon_sym_message,
      anon_sym_extend,
  [3402] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_service,
      anon_sym_message,
      anon_sym_extend,
  [3417] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_service,
      anon_sym_message,
  [3431] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_SEMI,
    ACTIONS(444), 1,
      anon_sym_option,
    ACTIONS(446), 1,
      anon_sym_RBRACE,
    ACTIONS(448), 1,
      sym_identifier,
    STATE(120), 4,
      sym_empty_statement,
      sym_option,
      sym_value,
      aux_sym_enum_body_repeat1,
  [3453] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_SEMI,
    ACTIONS(444), 1,
      anon_sym_option,
    ACTIONS(448), 1,
      sym_identifier,
    ACTIONS(450), 1,
      anon_sym_RBRACE,
    STATE(110), 4,
      sym_empty_statement,
      sym_option,
      sym_value,
      aux_sym_enum_body_repeat1,
  [3475] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_SEMI,
    ACTIONS(444), 1,
      anon_sym_option,
    ACTIONS(448), 1,
      sym_identifier,
    ACTIONS(452), 1,
      anon_sym_RBRACE,
    STATE(120), 4,
      sym_empty_statement,
      sym_option,
      sym_value,
      aux_sym_enum_body_repeat1,
  [3497] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_service,
      anon_sym_message,
  [3511] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_service,
      anon_sym_message,
  [3525] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_SEMI,
    ACTIONS(444), 1,
      anon_sym_option,
    ACTIONS(448), 1,
      sym_identifier,
    ACTIONS(454), 1,
      anon_sym_RBRACE,
    STATE(112), 4,
      sym_empty_statement,
      sym_option,
      sym_value,
      aux_sym_enum_body_repeat1,
  [3547] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 8,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_GT,
      sym_identifier,
  [3561] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_service,
      anon_sym_message,
  [3575] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_service,
      anon_sym_message,
  [3589] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_SEMI,
    ACTIONS(444), 1,
      anon_sym_option,
    ACTIONS(448), 1,
      sym_identifier,
    ACTIONS(462), 1,
      anon_sym_RBRACE,
    STATE(123), 4,
      sym_empty_statement,
      sym_option,
      sym_value,
      aux_sym_enum_body_repeat1,
  [3611] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      anon_sym_SEMI,
    ACTIONS(467), 1,
      anon_sym_option,
    ACTIONS(470), 1,
      anon_sym_RBRACE,
    ACTIONS(472), 1,
      sym_identifier,
    STATE(120), 4,
      sym_empty_statement,
      sym_option,
      sym_value,
      aux_sym_enum_body_repeat1,
  [3633] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_SEMI,
    ACTIONS(275), 1,
      anon_sym_option,
    ACTIONS(475), 1,
      anon_sym_RBRACE,
    ACTIONS(477), 1,
      anon_sym_rpc,
    STATE(122), 4,
      sym_empty_statement,
      sym_option,
      sym_rpc,
      aux_sym_service_body_repeat1,
  [3655] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      anon_sym_SEMI,
    ACTIONS(482), 1,
      anon_sym_option,
    ACTIONS(485), 1,
      anon_sym_RBRACE,
    ACTIONS(487), 1,
      anon_sym_rpc,
    STATE(122), 4,
      sym_empty_statement,
      sym_option,
      sym_rpc,
      aux_sym_service_body_repeat1,
  [3677] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_SEMI,
    ACTIONS(444), 1,
      anon_sym_option,
    ACTIONS(448), 1,
      sym_identifier,
    ACTIONS(490), 1,
      anon_sym_RBRACE,
    STATE(120), 4,
      sym_empty_statement,
      sym_option,
      sym_value,
      aux_sym_enum_body_repeat1,
  [3699] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_SEMI,
    ACTIONS(275), 1,
      anon_sym_option,
    ACTIONS(477), 1,
      anon_sym_rpc,
    ACTIONS(492), 1,
      anon_sym_RBRACE,
    STATE(121), 4,
      sym_empty_statement,
      sym_option,
      sym_rpc,
      aux_sym_service_body_repeat1,
  [3721] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      anon_sym_RBRACE,
    ACTIONS(496), 3,
      sym_repeated,
      sym_required,
      sym_optional,
    STATE(129), 3,
      sym_field2,
      sym_group_field,
      aux_sym_extend_repeat1,
  [3738] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      anon_sym_RBRACE,
    ACTIONS(496), 3,
      sym_repeated,
      sym_required,
      sym_optional,
    STATE(129), 3,
      sym_field2,
      sym_group_field,
      aux_sym_extend_repeat1,
  [3755] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_RBRACE,
    ACTIONS(496), 3,
      sym_repeated,
      sym_required,
      sym_optional,
    STATE(125), 3,
      sym_field2,
      sym_group_field,
      aux_sym_extend_repeat1,
  [3772] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(502), 1,
      anon_sym_RBRACE,
    ACTIONS(496), 3,
      sym_repeated,
      sym_required,
      sym_optional,
    STATE(126), 3,
      sym_field2,
      sym_group_field,
      aux_sym_extend_repeat1,
  [3789] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      anon_sym_RBRACE,
    ACTIONS(506), 3,
      sym_repeated,
      sym_required,
      sym_optional,
    STATE(129), 3,
      sym_field2,
      sym_group_field,
      aux_sym_extend_repeat1,
  [3806] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_LPAREN,
    ACTIONS(511), 1,
      sym_identifier,
    STATE(214), 1,
      sym_value_option,
    STATE(232), 1,
      sym__option_name_part,
    STATE(281), 1,
      sym__option_assignment,
    STATE(324), 1,
      sym_option_name,
  [3828] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 6,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_GT,
      sym_identifier,
  [3840] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 6,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_GT,
      sym_identifier,
  [3852] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 2,
      anon_sym_DQUOTEproto2_DQUOTE,
      anon_sym_SQUOTEproto2_SQUOTE,
    ACTIONS(519), 2,
      anon_sym_DQUOTEproto3_DQUOTE,
      anon_sym_SQUOTEproto3_SQUOTE,
    ACTIONS(521), 2,
      anon_sym_DQUOTEeditions_DQUOTE,
      anon_sym_SQUOTEeditions_SQUOTE,
  [3868] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      sym_decimal_lit,
    STATE(217), 1,
      sym_int_lit,
    STATE(219), 1,
      sym_range,
    STATE(350), 1,
      sym_ranges,
    ACTIONS(265), 2,
      sym_octal_lit,
      sym_hex_lit,
  [3888] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 6,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_GT,
      sym_identifier,
  [3900] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      anon_sym_SEMI,
    ACTIONS(528), 1,
      anon_sym_option,
    ACTIONS(531), 1,
      anon_sym_RBRACE,
    STATE(136), 3,
      sym_empty_statement,
      sym_option,
      aux_sym_rpc_body_repeat1,
  [3918] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_LPAREN,
    ACTIONS(511), 1,
      sym_identifier,
    STATE(232), 1,
      sym__option_name_part,
    STATE(260), 1,
      sym_value_option,
    STATE(281), 1,
      sym__option_assignment,
    STATE(324), 1,
      sym_option_name,
  [3940] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 6,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_to,
  [3952] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_SEMI,
    ACTIONS(275), 1,
      anon_sym_option,
    ACTIONS(535), 1,
      anon_sym_RBRACE,
    STATE(136), 3,
      sym_empty_statement,
      sym_option,
      aux_sym_rpc_body_repeat1,
  [3970] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_LPAREN,
    ACTIONS(511), 1,
      sym_identifier,
    STATE(232), 1,
      sym__option_name_part,
    STATE(250), 1,
      sym_field_option,
    STATE(257), 1,
      sym__option_assignment,
    STATE(324), 1,
      sym_option_name,
  [3992] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 6,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_GT,
      sym_identifier,
  [4004] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 6,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_GT,
      sym_identifier,
  [4016] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 6,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_GT,
      sym_identifier,
  [4028] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 6,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_GT,
      sym_identifier,
  [4040] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_SEMI,
    ACTIONS(275), 1,
      anon_sym_option,
    ACTIONS(543), 1,
      anon_sym_RBRACE,
    STATE(139), 3,
      sym_empty_statement,
      sym_option,
      aux_sym_rpc_body_repeat1,
  [4058] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_LPAREN,
    ACTIONS(511), 1,
      sym_identifier,
    STATE(232), 1,
      sym__option_name_part,
    STATE(257), 1,
      sym__option_assignment,
    STATE(273), 1,
      sym_field_option,
    STATE(324), 1,
      sym_option_name,
  [4080] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 6,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_GT,
      sym_identifier,
  [4092] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_GT,
      sym_identifier,
  [4103] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      sym_hex_lit,
    ACTIONS(547), 1,
      sym_float_lit,
    STATE(132), 1,
      sym_int_lit,
    ACTIONS(247), 2,
      sym_decimal_lit,
      sym_octal_lit,
  [4120] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      sym_decimal_lit,
    ACTIONS(549), 1,
      sym_max,
    STATE(268), 1,
      sym_int_lit,
    ACTIONS(265), 2,
      sym_octal_lit,
      sym_hex_lit,
  [4137] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(551), 1,
      sym_stream,
    STATE(274), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(313), 1,
      sym_message_or_enum_type,
  [4156] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(555), 3,
      anon_sym_RBRACE,
      anon_sym_GT,
      sym_identifier,
  [4169] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(557), 1,
      sym_stream,
    STATE(274), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(335), 1,
      sym_message_or_enum_type,
  [4188] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(561), 3,
      anon_sym_RBRACE,
      anon_sym_GT,
      sym_identifier,
  [4201] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      anon_sym_DOT,
    ACTIONS(565), 4,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_GT,
      sym_identifier,
  [4214] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(569), 3,
      anon_sym_RBRACE,
      anon_sym_GT,
      sym_identifier,
  [4227] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(573), 3,
      anon_sym_RBRACE,
      anon_sym_GT,
      sym_identifier,
  [4240] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      anon_sym_DOT,
    ACTIONS(575), 4,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_GT,
      sym_identifier,
  [4253] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      anon_sym_DOT,
    ACTIONS(577), 4,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_GT,
      sym_identifier,
  [4266] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      anon_sym_DOT,
    ACTIONS(579), 4,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_GT,
      sym_identifier,
  [4279] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      sym_decimal_lit,
    STATE(217), 1,
      sym_int_lit,
    STATE(262), 1,
      sym_range,
    ACTIONS(265), 2,
      sym_octal_lit,
      sym_hex_lit,
  [4296] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      sym_hex_lit,
    ACTIONS(547), 1,
      sym_float_lit,
    STATE(132), 1,
      sym_int_lit,
    ACTIONS(263), 2,
      sym_decimal_lit,
      sym_octal_lit,
  [4313] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(581), 1,
      sym_stream,
    STATE(274), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(323), 1,
      sym_message_or_enum_type,
  [4332] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(585), 3,
      anon_sym_RBRACE,
      anon_sym_GT,
      sym_identifier,
  [4345] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_LPAREN,
    ACTIONS(511), 1,
      sym_identifier,
    STATE(232), 1,
      sym__option_name_part,
    STATE(324), 1,
      sym_option_name,
    STATE(353), 1,
      sym__option_assignment,
  [4364] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(589), 3,
      anon_sym_RBRACE,
      anon_sym_GT,
      sym_identifier,
  [4377] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_LPAREN,
    ACTIONS(511), 1,
      sym_identifier,
    STATE(232), 1,
      sym__option_name_part,
    STATE(324), 1,
      sym_option_name,
    STATE(330), 1,
      sym__option_assignment,
  [4396] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_LPAREN,
    ACTIONS(511), 1,
      sym_identifier,
    STATE(232), 1,
      sym__option_name_part,
    STATE(324), 1,
      sym_option_name,
    STATE(325), 1,
      sym__option_assignment,
  [4415] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    ACTIONS(255), 1,
      anon_sym_SQUOTE,
    STATE(329), 1,
      sym_string,
    ACTIONS(591), 2,
      sym_weak,
      sym_public,
  [4432] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_LPAREN,
    ACTIONS(511), 1,
      sym_identifier,
    STATE(232), 1,
      sym__option_name_part,
    STATE(324), 1,
      sym_option_name,
    STATE(348), 1,
      sym__option_assignment,
  [4451] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      sym_decimal_lit,
    ACTIONS(593), 1,
      anon_sym_DASH,
    STATE(221), 1,
      sym_int_lit,
    ACTIONS(265), 2,
      sym_octal_lit,
      sym_hex_lit,
  [4468] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_LPAREN,
    ACTIONS(511), 1,
      sym_identifier,
    STATE(232), 1,
      sym__option_name_part,
    STATE(324), 1,
      sym_option_name,
    STATE(352), 1,
      sym__option_assignment,
  [4487] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(597), 2,
      anon_sym_option,
      sym_identifier,
  [4499] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(118), 2,
      anon_sym_option,
      sym_identifier,
  [4511] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOT,
    ACTIONS(599), 1,
      sym_identifier,
    STATE(274), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(358), 1,
      sym_message_or_enum_type,
  [4527] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      sym_decimal_lit,
    STATE(248), 1,
      sym_int_lit,
    ACTIONS(265), 2,
      sym_octal_lit,
      sym_hex_lit,
  [4541] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      sym_decimal_lit,
    STATE(246), 1,
      sym_int_lit,
    ACTIONS(265), 2,
      sym_octal_lit,
      sym_hex_lit,
  [4555] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOT,
    ACTIONS(599), 1,
      sym_identifier,
    STATE(274), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(318), 1,
      sym_message_or_enum_type,
  [4571] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      sym_decimal_lit,
    STATE(208), 1,
      sym_int_lit,
    ACTIONS(265), 2,
      sym_octal_lit,
      sym_hex_lit,
  [4585] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOT,
    ACTIONS(599), 1,
      sym_identifier,
    STATE(274), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(327), 1,
      sym_message_or_enum_type,
  [4601] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      sym_decimal_lit,
    STATE(241), 1,
      sym_int_lit,
    ACTIONS(265), 2,
      sym_octal_lit,
      sym_hex_lit,
  [4615] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOT,
    ACTIONS(599), 1,
      sym_identifier,
    STATE(274), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(289), 1,
      sym_message_or_enum_type,
  [4631] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      sym_decimal_lit,
    STATE(207), 1,
      sym_int_lit,
    ACTIONS(265), 2,
      sym_octal_lit,
      sym_hex_lit,
  [4645] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(603), 2,
      anon_sym_option,
      sym_identifier,
  [4657] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      sym_identifier,
    STATE(185), 1,
      aux_sym_message_value_repeat2,
    ACTIONS(605), 2,
      anon_sym_RBRACE,
      anon_sym_GT,
  [4671] = 4,
    ACTIONS(610), 1,
      anon_sym_DQUOTE,
    ACTIONS(614), 1,
      sym_comment,
    STATE(192), 1,
      aux_sym_string_repeat1,
    ACTIONS(612), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [4685] = 4,
    ACTIONS(610), 1,
      anon_sym_SQUOTE,
    ACTIONS(614), 1,
      sym_comment,
    STATE(193), 1,
      aux_sym_string_repeat2,
    ACTIONS(616), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
  [4699] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOT,
    ACTIONS(599), 1,
      sym_identifier,
    STATE(274), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(305), 1,
      sym_message_or_enum_type,
  [4715] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 4,
      anon_sym_SEMI,
      anon_sym_option,
      anon_sym_RBRACE,
      anon_sym_rpc,
  [4725] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 4,
      anon_sym_SEMI,
      anon_sym_option,
      anon_sym_RBRACE,
      anon_sym_rpc,
  [4735] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 4,
      anon_sym_SEMI,
      anon_sym_option,
      anon_sym_RBRACE,
      anon_sym_rpc,
  [4745] = 4,
    ACTIONS(614), 1,
      sym_comment,
    ACTIONS(624), 1,
      anon_sym_DQUOTE,
    STATE(201), 1,
      aux_sym_string_repeat1,
    ACTIONS(626), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [4759] = 4,
    ACTIONS(614), 1,
      sym_comment,
    ACTIONS(624), 1,
      anon_sym_SQUOTE,
    STATE(195), 1,
      aux_sym_string_repeat2,
    ACTIONS(628), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
  [4773] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(630), 4,
      anon_sym_SEMI,
      anon_sym_option,
      anon_sym_RBRACE,
      anon_sym_rpc,
  [4783] = 4,
    ACTIONS(614), 1,
      sym_comment,
    ACTIONS(632), 1,
      anon_sym_SQUOTE,
    STATE(195), 1,
      aux_sym_string_repeat2,
    ACTIONS(634), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
  [4797] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      sym_decimal_lit,
    STATE(279), 1,
      sym_int_lit,
    ACTIONS(265), 2,
      sym_octal_lit,
      sym_hex_lit,
  [4811] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      sym_decimal_lit,
    STATE(220), 1,
      sym_int_lit,
    ACTIONS(265), 2,
      sym_octal_lit,
      sym_hex_lit,
  [4825] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      sym_decimal_lit,
    STATE(242), 1,
      sym_int_lit,
    ACTIONS(265), 2,
      sym_octal_lit,
      sym_hex_lit,
  [4839] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 4,
      anon_sym_SEMI,
      anon_sym_option,
      anon_sym_RBRACE,
      anon_sym_rpc,
  [4849] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(639), 4,
      anon_sym_SEMI,
      anon_sym_option,
      anon_sym_RBRACE,
      anon_sym_rpc,
  [4859] = 4,
    ACTIONS(614), 1,
      sym_comment,
    ACTIONS(641), 1,
      anon_sym_DQUOTE,
    STATE(201), 1,
      aux_sym_string_repeat1,
    ACTIONS(643), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [4873] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      sym_decimal_lit,
    STATE(224), 1,
      sym_int_lit,
    ACTIONS(265), 2,
      sym_octal_lit,
      sym_hex_lit,
  [4887] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(646), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(648), 2,
      anon_sym_option,
      sym_identifier,
  [4899] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(130), 2,
      anon_sym_option,
      sym_identifier,
  [4911] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(650), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(652), 2,
      anon_sym_option,
      sym_identifier,
  [4923] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(654), 1,
      anon_sym_SEMI,
    ACTIONS(656), 1,
      anon_sym_COMMA,
    STATE(206), 1,
      aux_sym_field_names_repeat1,
  [4936] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 1,
      anon_sym_SEMI,
    ACTIONS(661), 1,
      anon_sym_LBRACK,
    STATE(301), 1,
      sym_field_options,
  [4949] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(661), 1,
      anon_sym_LBRACK,
    ACTIONS(663), 1,
      anon_sym_SEMI,
    STATE(294), 1,
      sym_field_options,
  [4962] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(665), 1,
      anon_sym_EQ,
    ACTIONS(667), 1,
      anon_sym_DOT,
    STATE(247), 1,
      aux_sym_option_name_repeat1,
  [4975] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    ACTIONS(255), 1,
      anon_sym_SQUOTE,
    STATE(276), 1,
      sym_string,
  [4988] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(669), 1,
      anon_sym_COMMA,
    ACTIONS(671), 1,
      anon_sym_RBRACK,
    STATE(233), 1,
      aux_sym_message_value_repeat1,
  [5001] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(669), 1,
      anon_sym_COMMA,
    ACTIONS(673), 1,
      anon_sym_RBRACK,
    STATE(235), 1,
      aux_sym_message_value_repeat1,
  [5014] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(675), 3,
      anon_sym_RBRACE,
      anon_sym_GT,
      sym_identifier,
  [5023] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(677), 1,
      anon_sym_COMMA,
    ACTIONS(679), 1,
      anon_sym_RBRACK,
    STATE(239), 1,
      aux_sym_value_options_repeat1,
  [5036] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(669), 1,
      anon_sym_COMMA,
    ACTIONS(681), 1,
      anon_sym_RBRACK,
    STATE(211), 1,
      aux_sym_message_value_repeat1,
  [5049] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(683), 1,
      anon_sym_SEMI,
    ACTIONS(685), 1,
      anon_sym_COMMA,
    STATE(218), 1,
      aux_sym_field_names_repeat1,
  [5062] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(689), 1,
      anon_sym_to,
    ACTIONS(687), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [5073] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(685), 1,
      anon_sym_COMMA,
    ACTIONS(691), 1,
      anon_sym_SEMI,
    STATE(206), 1,
      aux_sym_field_names_repeat1,
  [5086] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(693), 1,
      anon_sym_SEMI,
    ACTIONS(695), 1,
      anon_sym_COMMA,
    STATE(229), 1,
      aux_sym_ranges_repeat1,
  [5099] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(661), 1,
      anon_sym_LBRACK,
    ACTIONS(697), 1,
      anon_sym_SEMI,
    STATE(316), 1,
      sym_field_options,
  [5112] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 1,
      anon_sym_SEMI,
    ACTIONS(701), 1,
      anon_sym_LBRACK,
    STATE(336), 1,
      sym_value_options,
  [5125] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(703), 1,
      anon_sym_RBRACE,
    ACTIONS(705), 1,
      sym_identifier,
    STATE(237), 1,
      aux_sym_message_value_repeat2,
  [5138] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_LPAREN,
    ACTIONS(511), 1,
      sym_identifier,
    STATE(269), 1,
      sym__option_name_part,
  [5151] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(661), 1,
      anon_sym_LBRACK,
    ACTIONS(707), 1,
      anon_sym_SEMI,
    STATE(312), 1,
      sym_field_options,
  [5164] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(709), 3,
      anon_sym_RBRACE,
      anon_sym_GT,
      sym_identifier,
  [5173] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(711), 1,
      anon_sym_SEMI,
    ACTIONS(713), 1,
      anon_sym_COMMA,
    STATE(226), 1,
      aux_sym_ranges_repeat1,
  [5186] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 1,
      anon_sym_SEMI,
    ACTIONS(718), 1,
      anon_sym_LBRACE,
    STATE(199), 1,
      sym_rpc_body,
  [5199] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(703), 1,
      anon_sym_GT,
    ACTIONS(705), 1,
      sym_identifier,
    STATE(234), 1,
      aux_sym_message_value_repeat2,
  [5212] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(695), 1,
      anon_sym_COMMA,
    ACTIONS(720), 1,
      anon_sym_SEMI,
    STATE(226), 1,
      aux_sym_ranges_repeat1,
  [5225] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5234] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(724), 3,
      anon_sym_RBRACE,
      anon_sym_GT,
      sym_identifier,
  [5243] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(667), 1,
      anon_sym_DOT,
    ACTIONS(726), 1,
      anon_sym_EQ,
    STATE(209), 1,
      aux_sym_option_name_repeat1,
  [5256] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      anon_sym_COMMA,
    ACTIONS(731), 1,
      anon_sym_RBRACK,
    STATE(233), 1,
      aux_sym_message_value_repeat1,
  [5269] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(705), 1,
      sym_identifier,
    ACTIONS(733), 1,
      anon_sym_GT,
    STATE(185), 1,
      aux_sym_message_value_repeat2,
  [5282] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(669), 1,
      anon_sym_COMMA,
    ACTIONS(735), 1,
      anon_sym_RBRACK,
    STATE(233), 1,
      aux_sym_message_value_repeat1,
  [5295] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    ACTIONS(255), 1,
      anon_sym_SQUOTE,
    STATE(311), 1,
      sym_string,
  [5308] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(705), 1,
      sym_identifier,
    ACTIONS(737), 1,
      anon_sym_RBRACE,
    STATE(185), 1,
      aux_sym_message_value_repeat2,
  [5321] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 1,
      anon_sym_LBRACE,
    ACTIONS(739), 1,
      anon_sym_SEMI,
    STATE(191), 1,
      sym_rpc_body,
  [5334] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(677), 1,
      anon_sym_COMMA,
    ACTIONS(741), 1,
      anon_sym_RBRACK,
    STATE(249), 1,
      aux_sym_value_options_repeat1,
  [5347] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 1,
      anon_sym_LBRACE,
    ACTIONS(743), 1,
      anon_sym_SEMI,
    STATE(190), 1,
      sym_rpc_body,
  [5360] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(661), 1,
      anon_sym_LBRACK,
    ACTIONS(745), 1,
      anon_sym_SEMI,
    STATE(295), 1,
      sym_field_options,
  [5373] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 1,
      anon_sym_LBRACK,
    ACTIONS(747), 1,
      anon_sym_SEMI,
    STATE(307), 1,
      sym_value_options,
  [5386] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 1,
      anon_sym_LBRACE,
    ACTIONS(749), 1,
      anon_sym_SEMI,
    STATE(189), 1,
      sym_rpc_body,
  [5399] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(751), 3,
      anon_sym_RBRACE,
      anon_sym_GT,
      sym_identifier,
  [5408] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(753), 1,
      anon_sym_COMMA,
    ACTIONS(756), 1,
      anon_sym_RBRACK,
    STATE(245), 1,
      aux_sym_field_options_repeat1,
  [5421] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(661), 1,
      anon_sym_LBRACK,
    ACTIONS(758), 1,
      anon_sym_SEMI,
    STATE(346), 1,
      sym_field_options,
  [5434] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(760), 1,
      anon_sym_EQ,
    ACTIONS(762), 1,
      anon_sym_DOT,
    STATE(247), 1,
      aux_sym_option_name_repeat1,
  [5447] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(661), 1,
      anon_sym_LBRACK,
    ACTIONS(765), 1,
      anon_sym_SEMI,
    STATE(347), 1,
      sym_field_options,
  [5460] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(767), 1,
      anon_sym_COMMA,
    ACTIONS(770), 1,
      anon_sym_RBRACK,
    STATE(249), 1,
      aux_sym_value_options_repeat1,
  [5473] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 1,
      anon_sym_COMMA,
    ACTIONS(774), 1,
      anon_sym_RBRACK,
    STATE(251), 1,
      aux_sym_field_options_repeat1,
  [5486] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 1,
      anon_sym_COMMA,
    ACTIONS(776), 1,
      anon_sym_RBRACK,
    STATE(245), 1,
      aux_sym_field_options_repeat1,
  [5499] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(778), 3,
      anon_sym_RBRACE,
      anon_sym_GT,
      sym_identifier,
  [5508] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(780), 3,
      anon_sym_RBRACE,
      anon_sym_GT,
      sym_identifier,
  [5517] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(782), 1,
      anon_sym_LBRACE,
    STATE(100), 1,
      sym_service_body,
  [5527] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(784), 1,
      sym_identifier,
    STATE(283), 1,
      aux_sym_message_or_enum_type_repeat1,
  [5537] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(786), 1,
      anon_sym_DQUOTE,
    ACTIONS(788), 1,
      anon_sym_SQUOTE,
  [5547] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(790), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5555] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(792), 1,
      sym_identifier,
    STATE(328), 1,
      sym_full_ident,
  [5565] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(794), 1,
      anon_sym_LBRACE,
    STATE(76), 1,
      sym_oneof_body2,
  [5575] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5583] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(796), 1,
      anon_sym_LBRACE,
    STATE(22), 1,
      sym_enum_body,
  [5593] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(711), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [5601] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(798), 1,
      anon_sym_LBRACE,
    STATE(19), 1,
      sym_message_body3,
  [5611] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(800), 1,
      anon_sym_LBRACE,
    STATE(74), 1,
      sym_message_body2,
  [5621] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(802), 1,
      anon_sym_LBRACE,
    STATE(75), 1,
      sym_enum_body,
  [5631] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(792), 1,
      sym_identifier,
    STATE(309), 1,
      sym_full_ident,
  [5641] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 2,
      anon_sym_EQ,
      anon_sym_DOT,
  [5649] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(806), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [5657] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(808), 2,
      anon_sym_EQ,
      anon_sym_DOT,
  [5665] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 1,
      anon_sym_LBRACE,
    STATE(97), 1,
      sym_enum_body,
  [5675] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(812), 1,
      anon_sym_LBRACE,
    STATE(106), 1,
      sym_message_body2,
  [5685] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      sym_identifier,
    STATE(255), 1,
      aux_sym_message_or_enum_type_repeat1,
  [5695] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(756), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5703] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(816), 1,
      sym_identifier,
    STATE(283), 1,
      aux_sym_message_or_enum_type_repeat1,
  [5713] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      anon_sym_LBRACE,
    STATE(114), 1,
      sym_message_body3,
  [5723] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(654), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [5731] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(820), 2,
      anon_sym_GT,
      sym_identifier,
  [5739] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(822), 1,
      anon_sym_LBRACE,
    STATE(14), 1,
      sym_oneof_body3,
  [5749] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(800), 1,
      anon_sym_LBRACE,
    STATE(73), 1,
      sym_message_body2,
  [5759] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(731), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5767] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(824), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5775] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(826), 2,
      anon_sym_EQ,
      anon_sym_DOT,
  [5783] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(828), 1,
      sym_identifier,
    STATE(283), 1,
      aux_sym_message_or_enum_type_repeat1,
  [5793] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(831), 1,
      anon_sym_COMMA,
  [5800] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(833), 1,
      anon_sym_EQ,
  [5807] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(835), 1,
      anon_sym_EQ,
  [5814] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      sym_identifier,
  [5821] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(839), 1,
      anon_sym_GT,
  [5828] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(841), 1,
      anon_sym_RPAREN,
  [5835] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(843), 1,
      anon_sym_LPAREN,
  [5842] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(845), 1,
      anon_sym_returns,
  [5849] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(847), 1,
      anon_sym_SEMI,
  [5856] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(849), 1,
      sym_identifier,
  [5863] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(851), 1,
      anon_sym_SEMI,
  [5870] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(853), 1,
      anon_sym_SEMI,
  [5877] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(855), 1,
      sym_identifier,
  [5884] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(857), 1,
      anon_sym_LT,
  [5891] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(859), 1,
      anon_sym_EQ,
  [5898] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(861), 1,
      anon_sym_EQ,
  [5905] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(863), 1,
      anon_sym_GT,
  [5912] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(865), 1,
      anon_sym_SEMI,
  [5919] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(867), 1,
      anon_sym_EQ,
  [5926] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(869), 1,
      anon_sym_returns,
  [5933] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(871), 1,
      anon_sym_SEMI,
  [5940] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(873), 1,
      anon_sym_RPAREN,
  [5947] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(875), 1,
      sym_identifier,
  [5954] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(877), 1,
      anon_sym_SEMI,
  [5961] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(879), 1,
      sym_identifier,
  [5968] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(881), 1,
      anon_sym_RPAREN,
  [5975] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(883), 1,
      sym_identifier,
  [5982] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(885), 1,
      anon_sym_SEMI,
  [5989] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(887), 1,
      anon_sym_SEMI,
  [5996] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(889), 1,
      anon_sym_RPAREN,
  [6003] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(891), 1,
      anon_sym_SQUOTE,
  [6010] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(891), 1,
      anon_sym_DQUOTE,
  [6017] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(893), 1,
      anon_sym_SEMI,
  [6024] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(895), 1,
      sym_identifier,
  [6031] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(897), 1,
      anon_sym_LBRACE,
  [6038] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(899), 1,
      anon_sym_SEMI,
  [6045] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(901), 1,
      anon_sym_COMMA,
  [6052] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(903), 1,
      anon_sym_COMMA,
  [6059] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(905), 1,
      anon_sym_EQ,
  [6066] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(907), 1,
      anon_sym_RPAREN,
  [6073] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(909), 1,
      anon_sym_EQ,
  [6080] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(911), 1,
      anon_sym_SEMI,
  [6087] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(913), 1,
      anon_sym_SEMI,
  [6094] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(915), 1,
      anon_sym_RPAREN,
  [6101] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(917), 1,
      anon_sym_SEMI,
  [6108] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(919), 1,
      anon_sym_SEMI,
  [6115] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(921), 1,
      anon_sym_SEMI,
  [6122] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(923), 1,
      anon_sym_EQ,
  [6129] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(925), 1,
      sym_identifier,
  [6136] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(927), 1,
      sym_identifier,
  [6143] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(929), 1,
      sym_identifier,
  [6150] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(931), 1,
      anon_sym_RPAREN,
  [6157] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(933), 1,
      anon_sym_SEMI,
  [6164] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(935), 1,
      sym_edition_version,
  [6171] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(937), 1,
      sym_edition_version,
  [6178] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(939), 1,
      anon_sym_SEMI,
  [6185] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(941), 1,
      anon_sym_SEMI,
  [6192] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(943), 1,
      anon_sym_SEMI,
  [6199] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(945), 1,
      sym_identifier,
  [6206] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(947), 1,
      anon_sym_SEMI,
  [6213] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(949), 1,
      anon_sym_SEMI,
  [6220] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(951), 1,
      anon_sym_LPAREN,
  [6227] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(953), 1,
      anon_sym_SEMI,
  [6234] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(955), 1,
      anon_sym_SEMI,
  [6241] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(957), 1,
      anon_sym_SEMI,
  [6248] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(959), 1,
      anon_sym_LPAREN,
  [6255] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(961), 1,
      anon_sym_SEMI,
  [6262] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(963), 1,
      sym_identifier,
  [6269] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(965), 1,
      anon_sym_SEMI,
  [6276] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(967), 1,
      anon_sym_SEMI,
  [6283] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(969), 1,
      sym_identifier,
  [6290] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(971), 1,
      sym_identifier,
  [6297] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(973), 1,
      sym_identifier,
  [6304] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(975), 1,
      sym_identifier,
  [6311] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(977), 1,
      anon_sym_LBRACE,
  [6318] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(979), 1,
      sym_identifier,
  [6325] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(981), 1,
      anon_sym_SEMI,
  [6332] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(983), 1,
      sym_identifier,
  [6339] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      anon_sym_DOT,
  [6346] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(985), 1,
      sym_identifier,
  [6353] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(987), 1,
      anon_sym_LT,
  [6360] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(989), 1,
      ts_builtin_sym_end,
  [6367] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(991), 1,
      anon_sym_EQ,
  [6374] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(993), 1,
      anon_sym_EQ,
  [6381] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(995), 1,
      anon_sym_EQ,
  [6388] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(997), 1,
      sym_identifier,
  [6395] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(999), 1,
      sym_identifier,
  [6402] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1001), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 75,
  [SMALL_STATE(4)] = 150,
  [SMALL_STATE(5)] = 225,
  [SMALL_STATE(6)] = 300,
  [SMALL_STATE(7)] = 375,
  [SMALL_STATE(8)] = 430,
  [SMALL_STATE(9)] = 485,
  [SMALL_STATE(10)] = 540,
  [SMALL_STATE(11)] = 575,
  [SMALL_STATE(12)] = 610,
  [SMALL_STATE(13)] = 645,
  [SMALL_STATE(14)] = 680,
  [SMALL_STATE(15)] = 715,
  [SMALL_STATE(16)] = 750,
  [SMALL_STATE(17)] = 785,
  [SMALL_STATE(18)] = 820,
  [SMALL_STATE(19)] = 855,
  [SMALL_STATE(20)] = 890,
  [SMALL_STATE(21)] = 925,
  [SMALL_STATE(22)] = 960,
  [SMALL_STATE(23)] = 995,
  [SMALL_STATE(24)] = 1030,
  [SMALL_STATE(25)] = 1065,
  [SMALL_STATE(26)] = 1100,
  [SMALL_STATE(27)] = 1135,
  [SMALL_STATE(28)] = 1170,
  [SMALL_STATE(29)] = 1220,
  [SMALL_STATE(30)] = 1270,
  [SMALL_STATE(31)] = 1320,
  [SMALL_STATE(32)] = 1370,
  [SMALL_STATE(33)] = 1420,
  [SMALL_STATE(34)] = 1450,
  [SMALL_STATE(35)] = 1480,
  [SMALL_STATE(36)] = 1510,
  [SMALL_STATE(37)] = 1540,
  [SMALL_STATE(38)] = 1570,
  [SMALL_STATE(39)] = 1612,
  [SMALL_STATE(40)] = 1642,
  [SMALL_STATE(41)] = 1695,
  [SMALL_STATE(42)] = 1734,
  [SMALL_STATE(43)] = 1770,
  [SMALL_STATE(44)] = 1806,
  [SMALL_STATE(45)] = 1856,
  [SMALL_STATE(46)] = 1892,
  [SMALL_STATE(47)] = 1928,
  [SMALL_STATE(48)] = 1964,
  [SMALL_STATE(49)] = 2011,
  [SMALL_STATE(50)] = 2058,
  [SMALL_STATE(51)] = 2105,
  [SMALL_STATE(52)] = 2152,
  [SMALL_STATE(53)] = 2196,
  [SMALL_STATE(54)] = 2238,
  [SMALL_STATE(55)] = 2280,
  [SMALL_STATE(56)] = 2322,
  [SMALL_STATE(57)] = 2360,
  [SMALL_STATE(58)] = 2398,
  [SMALL_STATE(59)] = 2436,
  [SMALL_STATE(60)] = 2474,
  [SMALL_STATE(61)] = 2512,
  [SMALL_STATE(62)] = 2533,
  [SMALL_STATE(63)] = 2554,
  [SMALL_STATE(64)] = 2574,
  [SMALL_STATE(65)] = 2594,
  [SMALL_STATE(66)] = 2614,
  [SMALL_STATE(67)] = 2634,
  [SMALL_STATE(68)] = 2654,
  [SMALL_STATE(69)] = 2674,
  [SMALL_STATE(70)] = 2694,
  [SMALL_STATE(71)] = 2714,
  [SMALL_STATE(72)] = 2734,
  [SMALL_STATE(73)] = 2754,
  [SMALL_STATE(74)] = 2774,
  [SMALL_STATE(75)] = 2794,
  [SMALL_STATE(76)] = 2814,
  [SMALL_STATE(77)] = 2834,
  [SMALL_STATE(78)] = 2854,
  [SMALL_STATE(79)] = 2874,
  [SMALL_STATE(80)] = 2894,
  [SMALL_STATE(81)] = 2914,
  [SMALL_STATE(82)] = 2934,
  [SMALL_STATE(83)] = 2954,
  [SMALL_STATE(84)] = 2971,
  [SMALL_STATE(85)] = 2988,
  [SMALL_STATE(86)] = 3012,
  [SMALL_STATE(87)] = 3036,
  [SMALL_STATE(88)] = 3066,
  [SMALL_STATE(89)] = 3096,
  [SMALL_STATE(90)] = 3120,
  [SMALL_STATE(91)] = 3139,
  [SMALL_STATE(92)] = 3154,
  [SMALL_STATE(93)] = 3173,
  [SMALL_STATE(94)] = 3188,
  [SMALL_STATE(95)] = 3203,
  [SMALL_STATE(96)] = 3222,
  [SMALL_STATE(97)] = 3237,
  [SMALL_STATE(98)] = 3252,
  [SMALL_STATE(99)] = 3267,
  [SMALL_STATE(100)] = 3282,
  [SMALL_STATE(101)] = 3297,
  [SMALL_STATE(102)] = 3312,
  [SMALL_STATE(103)] = 3327,
  [SMALL_STATE(104)] = 3342,
  [SMALL_STATE(105)] = 3357,
  [SMALL_STATE(106)] = 3372,
  [SMALL_STATE(107)] = 3387,
  [SMALL_STATE(108)] = 3402,
  [SMALL_STATE(109)] = 3417,
  [SMALL_STATE(110)] = 3431,
  [SMALL_STATE(111)] = 3453,
  [SMALL_STATE(112)] = 3475,
  [SMALL_STATE(113)] = 3497,
  [SMALL_STATE(114)] = 3511,
  [SMALL_STATE(115)] = 3525,
  [SMALL_STATE(116)] = 3547,
  [SMALL_STATE(117)] = 3561,
  [SMALL_STATE(118)] = 3575,
  [SMALL_STATE(119)] = 3589,
  [SMALL_STATE(120)] = 3611,
  [SMALL_STATE(121)] = 3633,
  [SMALL_STATE(122)] = 3655,
  [SMALL_STATE(123)] = 3677,
  [SMALL_STATE(124)] = 3699,
  [SMALL_STATE(125)] = 3721,
  [SMALL_STATE(126)] = 3738,
  [SMALL_STATE(127)] = 3755,
  [SMALL_STATE(128)] = 3772,
  [SMALL_STATE(129)] = 3789,
  [SMALL_STATE(130)] = 3806,
  [SMALL_STATE(131)] = 3828,
  [SMALL_STATE(132)] = 3840,
  [SMALL_STATE(133)] = 3852,
  [SMALL_STATE(134)] = 3868,
  [SMALL_STATE(135)] = 3888,
  [SMALL_STATE(136)] = 3900,
  [SMALL_STATE(137)] = 3918,
  [SMALL_STATE(138)] = 3940,
  [SMALL_STATE(139)] = 3952,
  [SMALL_STATE(140)] = 3970,
  [SMALL_STATE(141)] = 3992,
  [SMALL_STATE(142)] = 4004,
  [SMALL_STATE(143)] = 4016,
  [SMALL_STATE(144)] = 4028,
  [SMALL_STATE(145)] = 4040,
  [SMALL_STATE(146)] = 4058,
  [SMALL_STATE(147)] = 4080,
  [SMALL_STATE(148)] = 4092,
  [SMALL_STATE(149)] = 4103,
  [SMALL_STATE(150)] = 4120,
  [SMALL_STATE(151)] = 4137,
  [SMALL_STATE(152)] = 4156,
  [SMALL_STATE(153)] = 4169,
  [SMALL_STATE(154)] = 4188,
  [SMALL_STATE(155)] = 4201,
  [SMALL_STATE(156)] = 4214,
  [SMALL_STATE(157)] = 4227,
  [SMALL_STATE(158)] = 4240,
  [SMALL_STATE(159)] = 4253,
  [SMALL_STATE(160)] = 4266,
  [SMALL_STATE(161)] = 4279,
  [SMALL_STATE(162)] = 4296,
  [SMALL_STATE(163)] = 4313,
  [SMALL_STATE(164)] = 4332,
  [SMALL_STATE(165)] = 4345,
  [SMALL_STATE(166)] = 4364,
  [SMALL_STATE(167)] = 4377,
  [SMALL_STATE(168)] = 4396,
  [SMALL_STATE(169)] = 4415,
  [SMALL_STATE(170)] = 4432,
  [SMALL_STATE(171)] = 4451,
  [SMALL_STATE(172)] = 4468,
  [SMALL_STATE(173)] = 4487,
  [SMALL_STATE(174)] = 4499,
  [SMALL_STATE(175)] = 4511,
  [SMALL_STATE(176)] = 4527,
  [SMALL_STATE(177)] = 4541,
  [SMALL_STATE(178)] = 4555,
  [SMALL_STATE(179)] = 4571,
  [SMALL_STATE(180)] = 4585,
  [SMALL_STATE(181)] = 4601,
  [SMALL_STATE(182)] = 4615,
  [SMALL_STATE(183)] = 4631,
  [SMALL_STATE(184)] = 4645,
  [SMALL_STATE(185)] = 4657,
  [SMALL_STATE(186)] = 4671,
  [SMALL_STATE(187)] = 4685,
  [SMALL_STATE(188)] = 4699,
  [SMALL_STATE(189)] = 4715,
  [SMALL_STATE(190)] = 4725,
  [SMALL_STATE(191)] = 4735,
  [SMALL_STATE(192)] = 4745,
  [SMALL_STATE(193)] = 4759,
  [SMALL_STATE(194)] = 4773,
  [SMALL_STATE(195)] = 4783,
  [SMALL_STATE(196)] = 4797,
  [SMALL_STATE(197)] = 4811,
  [SMALL_STATE(198)] = 4825,
  [SMALL_STATE(199)] = 4839,
  [SMALL_STATE(200)] = 4849,
  [SMALL_STATE(201)] = 4859,
  [SMALL_STATE(202)] = 4873,
  [SMALL_STATE(203)] = 4887,
  [SMALL_STATE(204)] = 4899,
  [SMALL_STATE(205)] = 4911,
  [SMALL_STATE(206)] = 4923,
  [SMALL_STATE(207)] = 4936,
  [SMALL_STATE(208)] = 4949,
  [SMALL_STATE(209)] = 4962,
  [SMALL_STATE(210)] = 4975,
  [SMALL_STATE(211)] = 4988,
  [SMALL_STATE(212)] = 5001,
  [SMALL_STATE(213)] = 5014,
  [SMALL_STATE(214)] = 5023,
  [SMALL_STATE(215)] = 5036,
  [SMALL_STATE(216)] = 5049,
  [SMALL_STATE(217)] = 5062,
  [SMALL_STATE(218)] = 5073,
  [SMALL_STATE(219)] = 5086,
  [SMALL_STATE(220)] = 5099,
  [SMALL_STATE(221)] = 5112,
  [SMALL_STATE(222)] = 5125,
  [SMALL_STATE(223)] = 5138,
  [SMALL_STATE(224)] = 5151,
  [SMALL_STATE(225)] = 5164,
  [SMALL_STATE(226)] = 5173,
  [SMALL_STATE(227)] = 5186,
  [SMALL_STATE(228)] = 5199,
  [SMALL_STATE(229)] = 5212,
  [SMALL_STATE(230)] = 5225,
  [SMALL_STATE(231)] = 5234,
  [SMALL_STATE(232)] = 5243,
  [SMALL_STATE(233)] = 5256,
  [SMALL_STATE(234)] = 5269,
  [SMALL_STATE(235)] = 5282,
  [SMALL_STATE(236)] = 5295,
  [SMALL_STATE(237)] = 5308,
  [SMALL_STATE(238)] = 5321,
  [SMALL_STATE(239)] = 5334,
  [SMALL_STATE(240)] = 5347,
  [SMALL_STATE(241)] = 5360,
  [SMALL_STATE(242)] = 5373,
  [SMALL_STATE(243)] = 5386,
  [SMALL_STATE(244)] = 5399,
  [SMALL_STATE(245)] = 5408,
  [SMALL_STATE(246)] = 5421,
  [SMALL_STATE(247)] = 5434,
  [SMALL_STATE(248)] = 5447,
  [SMALL_STATE(249)] = 5460,
  [SMALL_STATE(250)] = 5473,
  [SMALL_STATE(251)] = 5486,
  [SMALL_STATE(252)] = 5499,
  [SMALL_STATE(253)] = 5508,
  [SMALL_STATE(254)] = 5517,
  [SMALL_STATE(255)] = 5527,
  [SMALL_STATE(256)] = 5537,
  [SMALL_STATE(257)] = 5547,
  [SMALL_STATE(258)] = 5555,
  [SMALL_STATE(259)] = 5565,
  [SMALL_STATE(260)] = 5575,
  [SMALL_STATE(261)] = 5583,
  [SMALL_STATE(262)] = 5593,
  [SMALL_STATE(263)] = 5601,
  [SMALL_STATE(264)] = 5611,
  [SMALL_STATE(265)] = 5621,
  [SMALL_STATE(266)] = 5631,
  [SMALL_STATE(267)] = 5641,
  [SMALL_STATE(268)] = 5649,
  [SMALL_STATE(269)] = 5657,
  [SMALL_STATE(270)] = 5665,
  [SMALL_STATE(271)] = 5675,
  [SMALL_STATE(272)] = 5685,
  [SMALL_STATE(273)] = 5695,
  [SMALL_STATE(274)] = 5703,
  [SMALL_STATE(275)] = 5713,
  [SMALL_STATE(276)] = 5723,
  [SMALL_STATE(277)] = 5731,
  [SMALL_STATE(278)] = 5739,
  [SMALL_STATE(279)] = 5749,
  [SMALL_STATE(280)] = 5759,
  [SMALL_STATE(281)] = 5767,
  [SMALL_STATE(282)] = 5775,
  [SMALL_STATE(283)] = 5783,
  [SMALL_STATE(284)] = 5793,
  [SMALL_STATE(285)] = 5800,
  [SMALL_STATE(286)] = 5807,
  [SMALL_STATE(287)] = 5814,
  [SMALL_STATE(288)] = 5821,
  [SMALL_STATE(289)] = 5828,
  [SMALL_STATE(290)] = 5835,
  [SMALL_STATE(291)] = 5842,
  [SMALL_STATE(292)] = 5849,
  [SMALL_STATE(293)] = 5856,
  [SMALL_STATE(294)] = 5863,
  [SMALL_STATE(295)] = 5870,
  [SMALL_STATE(296)] = 5877,
  [SMALL_STATE(297)] = 5884,
  [SMALL_STATE(298)] = 5891,
  [SMALL_STATE(299)] = 5898,
  [SMALL_STATE(300)] = 5905,
  [SMALL_STATE(301)] = 5912,
  [SMALL_STATE(302)] = 5919,
  [SMALL_STATE(303)] = 5926,
  [SMALL_STATE(304)] = 5933,
  [SMALL_STATE(305)] = 5940,
  [SMALL_STATE(306)] = 5947,
  [SMALL_STATE(307)] = 5954,
  [SMALL_STATE(308)] = 5961,
  [SMALL_STATE(309)] = 5968,
  [SMALL_STATE(310)] = 5975,
  [SMALL_STATE(311)] = 5982,
  [SMALL_STATE(312)] = 5989,
  [SMALL_STATE(313)] = 5996,
  [SMALL_STATE(314)] = 6003,
  [SMALL_STATE(315)] = 6010,
  [SMALL_STATE(316)] = 6017,
  [SMALL_STATE(317)] = 6024,
  [SMALL_STATE(318)] = 6031,
  [SMALL_STATE(319)] = 6038,
  [SMALL_STATE(320)] = 6045,
  [SMALL_STATE(321)] = 6052,
  [SMALL_STATE(322)] = 6059,
  [SMALL_STATE(323)] = 6066,
  [SMALL_STATE(324)] = 6073,
  [SMALL_STATE(325)] = 6080,
  [SMALL_STATE(326)] = 6087,
  [SMALL_STATE(327)] = 6094,
  [SMALL_STATE(328)] = 6101,
  [SMALL_STATE(329)] = 6108,
  [SMALL_STATE(330)] = 6115,
  [SMALL_STATE(331)] = 6122,
  [SMALL_STATE(332)] = 6129,
  [SMALL_STATE(333)] = 6136,
  [SMALL_STATE(334)] = 6143,
  [SMALL_STATE(335)] = 6150,
  [SMALL_STATE(336)] = 6157,
  [SMALL_STATE(337)] = 6164,
  [SMALL_STATE(338)] = 6171,
  [SMALL_STATE(339)] = 6178,
  [SMALL_STATE(340)] = 6185,
  [SMALL_STATE(341)] = 6192,
  [SMALL_STATE(342)] = 6199,
  [SMALL_STATE(343)] = 6206,
  [SMALL_STATE(344)] = 6213,
  [SMALL_STATE(345)] = 6220,
  [SMALL_STATE(346)] = 6227,
  [SMALL_STATE(347)] = 6234,
  [SMALL_STATE(348)] = 6241,
  [SMALL_STATE(349)] = 6248,
  [SMALL_STATE(350)] = 6255,
  [SMALL_STATE(351)] = 6262,
  [SMALL_STATE(352)] = 6269,
  [SMALL_STATE(353)] = 6276,
  [SMALL_STATE(354)] = 6283,
  [SMALL_STATE(355)] = 6290,
  [SMALL_STATE(356)] = 6297,
  [SMALL_STATE(357)] = 6304,
  [SMALL_STATE(358)] = 6311,
  [SMALL_STATE(359)] = 6318,
  [SMALL_STATE(360)] = 6325,
  [SMALL_STATE(361)] = 6332,
  [SMALL_STATE(362)] = 6339,
  [SMALL_STATE(363)] = 6346,
  [SMALL_STATE(364)] = 6353,
  [SMALL_STATE(365)] = 6360,
  [SMALL_STATE(366)] = 6367,
  [SMALL_STATE(367)] = 6374,
  [SMALL_STATE(368)] = 6381,
  [SMALL_STATE(369)] = 6388,
  [SMALL_STATE(370)] = 6395,
  [SMALL_STATE(371)] = 6402,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(357),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_body3_repeat1, 2), SHIFT_REPEAT(16),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body3_repeat1, 2), SHIFT_REPEAT(172),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_body3_repeat1, 2), SHIFT_REPEAT(272),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body3_repeat1, 2), SHIFT_REPEAT(363),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_body3_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body3_repeat1, 2), SHIFT_REPEAT(88),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body3_repeat1, 2), SHIFT_REPEAT(364),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body3_repeat1, 2), SHIFT_REPEAT(277),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body3_repeat1, 2), SHIFT_REPEAT(155),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body3_repeat1, 2), SHIFT_REPEAT(45),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body3_repeat1, 2), SHIFT_REPEAT(357),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body3_repeat1, 2), SHIFT_REPEAT(293),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_oneof_body3_repeat1, 2), SHIFT_REPEAT(36),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneof_body3_repeat1, 2), SHIFT_REPEAT(165),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_oneof_body3_repeat1, 2), SHIFT_REPEAT(272),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_oneof_body3_repeat1, 2),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneof_body3_repeat1, 2), SHIFT_REPEAT(277),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneof_body3_repeat1, 2), SHIFT_REPEAT(155),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneof_body3_repeat1, 2), SHIFT_REPEAT(43),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneof_body3, 2),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneof_body3, 2),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_body, 2),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_body, 2),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field3, 6, .production_id = 39),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field3, 6, .production_id = 39),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 3, .production_id = 8),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option, 3, .production_id = 8),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneof3, 3, .production_id = 27),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneof3, 3, .production_id = 27),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field3, 7, .production_id = 42),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field3, 7, .production_id = 42),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_statement, 1),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_empty_statement, 1),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneof_body3, 3),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneof_body3, 3),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_field, 11, .production_id = 48),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_field, 11, .production_id = 48),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message3, 3, .production_id = 12),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message3, 3, .production_id = 12),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_body3, 2),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_body3, 2),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reserved, 3, .production_id = 26),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reserved, 3, .production_id = 26),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 3, .production_id = 10),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum, 3, .production_id = 10),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_body3, 3),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_body3, 3),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_body, 3),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_body, 3),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_field, 10, .production_id = 44),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_field, 10, .production_id = 44),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field3, 6, .production_id = 40),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field3, 6, .production_id = 40),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field3, 5, .production_id = 34),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field3, 5, .production_id = 34),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_body2_repeat1, 2), SHIFT_REPEAT(79),
  [203] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body2_repeat1, 2), SHIFT_REPEAT(170),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_body2_repeat1, 2), SHIFT_REPEAT(355),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_body2_repeat1, 2),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_body2_repeat1, 2), SHIFT_REPEAT(87),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_body2_repeat1, 2), SHIFT_REPEAT(38),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_body2_repeat1, 2), SHIFT_REPEAT(356),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_body2_repeat1, 2), SHIFT_REPEAT(175),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_body2_repeat1, 2), SHIFT_REPEAT(334),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_body2_repeat1, 2), SHIFT_REPEAT(134),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(84),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(169),
  [291] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(258),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(168),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(359),
  [300] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(354),
  [303] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(351),
  [306] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(178),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [319] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(84),
  [322] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(169),
  [325] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(258),
  [328] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(168),
  [331] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(359),
  [334] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(354),
  [337] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(342),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extensions, 3, .production_id = 26),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extensions, 3, .production_id = 26),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneof_body2, 2),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneof_body2, 2),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_body2, 2),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_body2, 2),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extend, 4, .production_id = 7),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extend, 4, .production_id = 7),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_body2, 3),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_body2, 3),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extend, 5, .production_id = 7),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extend, 5, .production_id = 7),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_field, 6, .production_id = 38),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_field, 6, .production_id = 38),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message2, 3, .production_id = 12),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message2, 3, .production_id = 12),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneof2, 3, .production_id = 27),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneof2, 3, .production_id = 27),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field2, 6, .production_id = 39),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field2, 6, .production_id = 39),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_field2, 12, .production_id = 50),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_field2, 12, .production_id = 50),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneof_body2, 3),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneof_body2, 3),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field2, 7, .production_id = 42),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field2, 7, .production_id = 42),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_field2, 11, .production_id = 47),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_field2, 11, .production_id = 47),
  [398] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_oneof_body2_repeat1, 2), SHIFT_REPEAT(79),
  [401] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneof_body2_repeat1, 2), SHIFT_REPEAT(170),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_oneof_body2_repeat1, 2),
  [406] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_oneof_body2_repeat1, 2), SHIFT_REPEAT(42),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_full_ident_repeat1, 2, .production_id = 9),
  [417] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_full_ident_repeat1, 2, .production_id = 9), SHIFT_REPEAT(310),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syntaxEditions, 4, .production_id = 4),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_ident, 1, .production_id = 1),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syntax2, 4, .production_id = 4),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 3, .production_id = 5),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_ident, 2, .production_id = 6),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package, 3, .production_id = 7),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 3, .production_id = 11),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service_body, 2),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service_body, 3),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 4, .production_id = 15),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_full_ident_repeat1, 2, .production_id = 16),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syntax3, 4, .production_id = 4),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_edition, 6, .production_id = 21),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [464] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_body_repeat1, 2), SHIFT_REPEAT(204),
  [467] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enum_body_repeat1, 2), SHIFT_REPEAT(167),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_body_repeat1, 2),
  [472] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enum_body_repeat1, 2), SHIFT_REPEAT(285),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [479] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_body_repeat1, 2), SHIFT_REPEAT(84),
  [482] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_body_repeat1, 2), SHIFT_REPEAT(168),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_service_body_repeat1, 2),
  [487] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_body_repeat1, 2), SHIFT_REPEAT(332),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_extend_repeat1, 2),
  [506] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_extend_repeat1, 2), SHIFT_REPEAT(41),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 2),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [525] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rpc_body_repeat1, 2), SHIFT_REPEAT(84),
  [528] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rpc_body_repeat1, 2), SHIFT_REPEAT(168),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rpc_body_repeat1, 2),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_lit, 1),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_value, 2),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_value, 3, .production_id = 24),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_value_repeat2, 5, .production_id = 35),
  [557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_value_repeat2, 2, .production_id = 23),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_or_enum_type, 1, .production_id = 3),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_value_repeat2, 3, .production_id = 18),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_value_repeat2, 5, .production_id = 36),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_or_enum_type, 2, .production_id = 13),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_or_enum_type, 3, .production_id = 20),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_or_enum_type, 2, .production_id = 14),
  [581] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_value_repeat2, 6, .production_id = 41),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_value_repeat2, 4, .production_id = 30),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 4, .production_id = 28),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 4, .production_id = 28),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 6, .production_id = 37),
  [603] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 6, .production_id = 37),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_value_repeat2, 2, .production_id = 25),
  [607] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_value_repeat2, 2, .production_id = 25), SHIFT_REPEAT(40),
  [610] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [614] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 10, .production_id = 43),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 11, .production_id = 45),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 11, .production_id = 46),
  [624] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc_body, 2),
  [632] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2),
  [634] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(195),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 12, .production_id = 49),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc_body, 3),
  [641] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [643] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(201),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 5, .production_id = 33),
  [648] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 5, .production_id = 33),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 5, .production_id = 31),
  [652] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 5, .production_id = 31),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_names_repeat1, 2),
  [656] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_names_repeat1, 2), SHIFT_REPEAT(210),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_name, 2, .production_id = 9),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_value_repeat2, 4, .production_id = 18),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_names, 1),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 1, .production_id = 22),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_names, 2),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ranges, 1),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_value_repeat2, 7, .production_id = 41),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ranges_repeat1, 2),
  [713] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ranges_repeat1, 2), SHIFT_REPEAT(161),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ranges, 2),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__option_assignment, 3, .production_id = 18),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_value_repeat2, 5, .production_id = 30),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_name, 1, .production_id = 2),
  [728] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_value_repeat1, 2), SHIFT_REPEAT(50),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_value_repeat1, 2),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_value_repeat2, 3, .production_id = 23),
  [753] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_options_repeat1, 2), SHIFT_REPEAT(146),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_options_repeat1, 2),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_option_name_repeat1, 2, .production_id = 9),
  [762] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_option_name_repeat1, 2, .production_id = 9), SHIFT_REPEAT(223),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [767] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_options_repeat1, 2), SHIFT_REPEAT(137),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_options_repeat1, 2),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_value_repeat2, 6, .production_id = 35),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_value_repeat2, 6, .production_id = 36),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_option, 1, .production_id = 32),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__option_name_part, 1, .production_id = 1),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3, .production_id = 29),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_option_name_repeat1, 2, .production_id = 19),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_option, 1, .production_id = 32),
  [826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__option_name_part, 3, .production_id = 17),
  [828] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_or_enum_type_repeat1, 2, .production_id = 9), SHIFT_REPEAT(362),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_options, 3),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_or_enum_type_repeat1, 2, .production_id = 1),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_options, 4),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_type, 1),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_options, 3),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [981] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_options, 4),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [989] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_proto(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
