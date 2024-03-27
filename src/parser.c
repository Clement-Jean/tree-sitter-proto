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
#define STATE_COUNT 401
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 150
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
  sym_extend2 = 111,
  sym_oneof2 = 112,
  sym_oneof_body2 = 113,
  sym_field2 = 114,
  sym_map_field2 = 115,
  sym_group_field = 116,
  sym_extensions = 117,
  sym_syntax3 = 118,
  sym_message3 = 119,
  sym_message_body3 = 120,
  sym_extend3 = 121,
  sym_oneof3 = 122,
  sym_oneof_body3 = 123,
  sym_field3 = 124,
  sym_syntaxEditions = 125,
  sym_edition = 126,
  aux_sym_source_file_repeat1 = 127,
  aux_sym_source_file_repeat2 = 128,
  aux_sym_source_file_repeat3 = 129,
  aux_sym_option_name_repeat1 = 130,
  aux_sym_enum_body_repeat1 = 131,
  aux_sym_value_options_repeat1 = 132,
  aux_sym_field_options_repeat1 = 133,
  aux_sym_ranges_repeat1 = 134,
  aux_sym_field_names_repeat1 = 135,
  aux_sym_service_body_repeat1 = 136,
  aux_sym_rpc_body_repeat1 = 137,
  aux_sym_message_or_enum_type_repeat1 = 138,
  aux_sym_full_ident_repeat1 = 139,
  aux_sym_message_value_repeat1 = 140,
  aux_sym_message_value_repeat2 = 141,
  aux_sym_string_repeat1 = 142,
  aux_sym_string_repeat2 = 143,
  aux_sym_message_body2_repeat1 = 144,
  aux_sym_extend2_repeat1 = 145,
  aux_sym_oneof_body2_repeat1 = 146,
  aux_sym_message_body3_repeat1 = 147,
  aux_sym_extend3_repeat1 = 148,
  aux_sym_oneof_body3_repeat1 = 149,
  alias_sym_enum_name = 150,
  alias_sym_message_name = 151,
  alias_sym_oneof_name = 152,
  alias_sym_rpc_name = 153,
  alias_sym_service_name = 154,
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
  [sym_extend2] = "extend",
  [sym_oneof2] = "oneof",
  [sym_oneof_body2] = "oneof_body",
  [sym_field2] = "field",
  [sym_map_field2] = "map_field",
  [sym_group_field] = "group_field",
  [sym_extensions] = "extensions",
  [sym_syntax3] = "syntax3",
  [sym_message3] = "message",
  [sym_message_body3] = "message_body",
  [sym_extend3] = "extend",
  [sym_oneof3] = "oneof",
  [sym_oneof_body3] = "oneof_body",
  [sym_field3] = "field",
  [sym_syntaxEditions] = "syntaxEditions",
  [sym_edition] = "edition",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
  [aux_sym_source_file_repeat3] = "source_file_repeat3",
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
  [aux_sym_extend2_repeat1] = "extend2_repeat1",
  [aux_sym_oneof_body2_repeat1] = "oneof_body2_repeat1",
  [aux_sym_message_body3_repeat1] = "message_body3_repeat1",
  [aux_sym_extend3_repeat1] = "extend3_repeat1",
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
  [sym_extend2] = sym_extend2,
  [sym_oneof2] = sym_oneof2,
  [sym_oneof_body2] = sym_oneof_body2,
  [sym_field2] = sym_field2,
  [sym_map_field2] = sym_map_field,
  [sym_group_field] = sym_group_field,
  [sym_extensions] = sym_extensions,
  [sym_syntax3] = sym_syntax3,
  [sym_message3] = sym_message2,
  [sym_message_body3] = sym_message_body2,
  [sym_extend3] = sym_extend2,
  [sym_oneof3] = sym_oneof2,
  [sym_oneof_body3] = sym_oneof_body2,
  [sym_field3] = sym_field2,
  [sym_syntaxEditions] = sym_syntaxEditions,
  [sym_edition] = sym_edition,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_source_file_repeat2] = aux_sym_source_file_repeat2,
  [aux_sym_source_file_repeat3] = aux_sym_source_file_repeat3,
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
  [aux_sym_extend2_repeat1] = aux_sym_extend2_repeat1,
  [aux_sym_oneof_body2_repeat1] = aux_sym_oneof_body2_repeat1,
  [aux_sym_message_body3_repeat1] = aux_sym_message_body3_repeat1,
  [aux_sym_extend3_repeat1] = aux_sym_extend3_repeat1,
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
  [sym_extend2] = {
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
  [sym_extend3] = {
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
  [aux_sym_source_file_repeat3] = {
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
  [aux_sym_extend2_repeat1] = {
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
  [aux_sym_extend3_repeat1] = {
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
  [4] = 2,
  [5] = 3,
  [6] = 6,
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
  [30] = 30,
  [31] = 30,
  [32] = 32,
  [33] = 33,
  [34] = 32,
  [35] = 35,
  [36] = 36,
  [37] = 35,
  [38] = 38,
  [39] = 38,
  [40] = 24,
  [41] = 26,
  [42] = 22,
  [43] = 11,
  [44] = 44,
  [45] = 28,
  [46] = 12,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 12,
  [52] = 52,
  [53] = 26,
  [54] = 24,
  [55] = 28,
  [56] = 50,
  [57] = 57,
  [58] = 58,
  [59] = 50,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 19,
  [78] = 78,
  [79] = 79,
  [80] = 23,
  [81] = 81,
  [82] = 82,
  [83] = 20,
  [84] = 84,
  [85] = 22,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 11,
  [90] = 90,
  [91] = 29,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 11,
  [97] = 22,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 99,
  [103] = 103,
  [104] = 104,
  [105] = 15,
  [106] = 106,
  [107] = 18,
  [108] = 78,
  [109] = 109,
  [110] = 20,
  [111] = 111,
  [112] = 88,
  [113] = 81,
  [114] = 87,
  [115] = 115,
  [116] = 27,
  [117] = 23,
  [118] = 118,
  [119] = 76,
  [120] = 21,
  [121] = 121,
  [122] = 19,
  [123] = 123,
  [124] = 14,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 129,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 135,
  [137] = 135,
  [138] = 138,
  [139] = 129,
  [140] = 140,
  [141] = 140,
  [142] = 142,
  [143] = 142,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
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
  [162] = 162,
  [163] = 163,
  [164] = 160,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 169,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 169,
  [178] = 169,
  [179] = 169,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 174,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 11,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 191,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 191,
  [210] = 203,
  [211] = 203,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 208,
  [219] = 219,
  [220] = 22,
  [221] = 206,
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
  [239] = 231,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 238,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 238,
  [250] = 250,
  [251] = 231,
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
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 276,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 278,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 285,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 285,
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
  [330] = 330,
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
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 344,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 313,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 306,
  [364] = 344,
  [365] = 365,
  [366] = 366,
  [367] = 362,
  [368] = 368,
  [369] = 369,
  [370] = 362,
  [371] = 306,
  [372] = 344,
  [373] = 344,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 348,
  [379] = 341,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 375,
  [385] = 377,
  [386] = 376,
  [387] = 387,
  [388] = 375,
  [389] = 389,
  [390] = 390,
  [391] = 315,
  [392] = 343,
  [393] = 315,
  [394] = 343,
  [395] = 317,
  [396] = 312,
  [397] = 317,
  [398] = 312,
  [399] = 399,
  [400] = 400,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(231);
      if (lookahead == '"') ADVANCE(429);
      if (lookahead == '\'') ADVANCE(436);
      if (lookahead == '(') ADVANCE(242);
      if (lookahead == ')') ADVANCE(243);
      if (lookahead == '+') ADVANCE(414);
      if (lookahead == ',') ADVANCE(250);
      if (lookahead == '-') ADVANCE(248);
      if (lookahead == '.') ADVANCE(241);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '0') ADVANCE(416);
      if (lookahead == ':') ADVANCE(415);
      if (lookahead == ';') ADVANCE(232);
      if (lookahead == '<') ADVANCE(257);
      if (lookahead == '=') ADVANCE(239);
      if (lookahead == '>') ADVANCE(258);
      if (lookahead == '[') ADVANCE(249);
      if (lookahead == '\\') ADVANCE(43);
      if (lookahead == ']') ADVANCE(251);
      if (lookahead == 'b') ADVANCE(149);
      if (lookahead == 'd') ADVANCE(145);
      if (lookahead == 'e') ADVANCE(68);
      if (lookahead == 'f') ADVANCE(44);
      if (lookahead == 'g') ADVANCE(176);
      if (lookahead == 'i') ADVANCE(126);
      if (lookahead == 'm') ADVANCE(45);
      if (lookahead == 'n') ADVANCE(46);
      if (lookahead == 'o') ADVANCE(135);
      if (lookahead == 'p') ADVANCE(48);
      if (lookahead == 'r') ADVANCE(75);
      if (lookahead == 's') ADVANCE(84);
      if (lookahead == 't') ADVANCE(146);
      if (lookahead == 'u') ADVANCE(118);
      if (lookahead == 'w') ADVANCE(85);
      if (lookahead == '{') ADVANCE(246);
      if (lookahead == '}') ADVANCE(247);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(229)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(418);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(429);
      if (lookahead == '\'') ADVANCE(436);
      if (lookahead == '+') ADVANCE(414);
      if (lookahead == '-') ADVANCE(248);
      if (lookahead == '.') ADVANCE(215);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '0') ADVANCE(417);
      if (lookahead == ':') ADVANCE(415);
      if (lookahead == '<') ADVANCE(257);
      if (lookahead == '[') ADVANCE(249);
      if (lookahead == 'f') ADVANCE(410);
      if (lookahead == 'i') ADVANCE(359);
      if (lookahead == 'n') ADVANCE(411);
      if (lookahead == 't') ADVANCE(380);
      if (lookahead == '{') ADVANCE(246);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(418);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(429);
      if (lookahead == '\'') ADVANCE(436);
      if (lookahead == '-') ADVANCE(248);
      if (lookahead == '.') ADVANCE(240);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '0') ADVANCE(419);
      if (lookahead == ';') ADVANCE(232);
      if (lookahead == '=') ADVANCE(239);
      if (lookahead == 'b') ADVANCE(314);
      if (lookahead == 'd') ADVANCE(364);
      if (lookahead == 'e') ADVANCE(313);
      if (lookahead == 'f') ADVANCE(311);
      if (lookahead == 'i') ADVANCE(357);
      if (lookahead == 'm') ADVANCE(310);
      if (lookahead == 'o') ADVANCE(312);
      if (lookahead == 'r') ADVANCE(322);
      if (lookahead == 's') ADVANCE(309);
      if (lookahead == 'u') ADVANCE(346);
      if (lookahead == '}') ADVANCE(247);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(420);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(429);
      if (lookahead == '/') ADVANCE(431);
      if (lookahead == '\\') ADVANCE(43);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(434);
      if (lookahead != 0) ADVANCE(435);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(458);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(472);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(474);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(94);
      if (lookahead == '\'') ADVANCE(98);
      if (lookahead == '.') ADVANCE(240);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ';') ADVANCE(232);
      if (lookahead == 'b') ADVANCE(314);
      if (lookahead == 'd') ADVANCE(364);
      if (lookahead == 'f') ADVANCE(311);
      if (lookahead == 'i') ADVANCE(357);
      if (lookahead == 'o') ADVANCE(374);
      if (lookahead == 'r') ADVANCE(330);
      if (lookahead == 's') ADVANCE(309);
      if (lookahead == 'u') ADVANCE(346);
      if (lookahead == '}') ADVANCE(247);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(436);
      if (lookahead == '/') ADVANCE(438);
      if (lookahead == '\\') ADVANCE(43);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(441);
      if (lookahead != 0) ADVANCE(442);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(459);
      END_STATE();
    case 10:
      if (lookahead == '\'') ADVANCE(473);
      END_STATE();
    case 11:
      if (lookahead == '\'') ADVANCE(475);
      END_STATE();
    case 12:
      if (lookahead == '(') ADVANCE(242);
      if (lookahead == ')') ADVANCE(243);
      if (lookahead == ',') ADVANCE(250);
      if (lookahead == '.') ADVANCE(240);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ';') ADVANCE(232);
      if (lookahead == '>') ADVANCE(258);
      if (lookahead == ']') ADVANCE(251);
      if (lookahead == '{') ADVANCE(246);
      if (lookahead == '}') ADVANCE(247);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '/') ADVANCE(447);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(446);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(240);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == 'b') ADVANCE(314);
      if (lookahead == 'd') ADVANCE(364);
      if (lookahead == 'f') ADVANCE(311);
      if (lookahead == 'g') ADVANCE(382);
      if (lookahead == 'i') ADVANCE(357);
      if (lookahead == 'm') ADVANCE(405);
      if (lookahead == 's') ADVANCE(309);
      if (lookahead == 'u') ADVANCE(346);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(240);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == 'b') ADVANCE(314);
      if (lookahead == 'd') ADVANCE(364);
      if (lookahead == 'f') ADVANCE(311);
      if (lookahead == 'g') ADVANCE(382);
      if (lookahead == 'i') ADVANCE(357);
      if (lookahead == 's') ADVANCE(309);
      if (lookahead == 'u') ADVANCE(346);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 21:
      if (lookahead == '.') ADVANCE(240);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == 'b') ADVANCE(314);
      if (lookahead == 'd') ADVANCE(364);
      if (lookahead == 'f') ADVANCE(311);
      if (lookahead == 'i') ADVANCE(357);
      if (lookahead == 'o') ADVANCE(376);
      if (lookahead == 'r') ADVANCE(330);
      if (lookahead == 's') ADVANCE(309);
      if (lookahead == 'u') ADVANCE(346);
      if (lookahead == '}') ADVANCE(247);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(21)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 22:
      if (lookahead == '.') ADVANCE(240);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == 'b') ADVANCE(314);
      if (lookahead == 'd') ADVANCE(364);
      if (lookahead == 'f') ADVANCE(311);
      if (lookahead == 'i') ADVANCE(357);
      if (lookahead == 's') ADVANCE(309);
      if (lookahead == 'u') ADVANCE(346);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(22)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 23:
      if (lookahead == '.') ADVANCE(240);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == 's') ADVANCE(392);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(23)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 24:
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '0') ADVANCE(419);
      if (lookahead == 'm') ADVANCE(53);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(24)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(420);
      END_STATE();
    case 25:
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ';') ADVANCE(232);
      if (lookahead == 'o') ADVANCE(377);
      if (lookahead == '}') ADVANCE(247);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(25)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 26:
      if (lookahead == '2') ADVANCE(264);
      END_STATE();
    case 27:
      if (lookahead == '2') ADVANCE(272);
      END_STATE();
    case 28:
      if (lookahead == '2') ADVANCE(268);
      END_STATE();
    case 29:
      if (lookahead == '2') ADVANCE(276);
      END_STATE();
    case 30:
      if (lookahead == '2') ADVANCE(280);
      END_STATE();
    case 31:
      if (lookahead == '2') ADVANCE(4);
      if (lookahead == '3') ADVANCE(5);
      END_STATE();
    case 32:
      if (lookahead == '2') ADVANCE(9);
      if (lookahead == '3') ADVANCE(10);
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
      if (lookahead == '3') ADVANCE(30);
      if (lookahead == '6') ADVANCE(42);
      END_STATE();
    case 38:
      if (lookahead == '4') ADVANCE(266);
      END_STATE();
    case 39:
      if (lookahead == '4') ADVANCE(274);
      END_STATE();
    case 40:
      if (lookahead == '4') ADVANCE(270);
      END_STATE();
    case 41:
      if (lookahead == '4') ADVANCE(278);
      END_STATE();
    case 42:
      if (lookahead == '4') ADVANCE(282);
      END_STATE();
    case 43:
      if (lookahead == 'U') ADVANCE(228);
      if (lookahead == 'u') ADVANCE(224);
      if (lookahead == 'x') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(445);
      if (lookahead != 0) ADVANCE(443);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(123);
      if (lookahead == 'i') ADVANCE(212);
      if (lookahead == 'l') ADVANCE(152);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(163);
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(130);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(59);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(59);
      if (lookahead == 'u') ADVANCE(57);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(103);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(211);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(129);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(119);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(210);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(186);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(104);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(194);
      END_STATE();
    case 57:
      if (lookahead == 'b') ADVANCE(124);
      END_STATE();
    case 58:
      if (lookahead == 'b') ADVANCE(125);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(120);
      END_STATE();
    case 60:
      if (lookahead == 'c') ADVANCE(260);
      END_STATE();
    case 61:
      if (lookahead == 'c') ADVANCE(454);
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(82);
      END_STATE();
    case 63:
      if (lookahead == 'd') ADVANCE(462);
      END_STATE();
    case 64:
      if (lookahead == 'd') ADVANCE(462);
      if (lookahead == 's') ADVANCE(110);
      END_STATE();
    case 65:
      if (lookahead == 'd') ADVANCE(455);
      END_STATE();
    case 66:
      if (lookahead == 'd') ADVANCE(469);
      END_STATE();
    case 67:
      if (lookahead == 'd') ADVANCE(252);
      END_STATE();
    case 68:
      if (lookahead == 'd') ADVANCE(114);
      if (lookahead == 'n') ADVANCE(202);
      if (lookahead == 'x') ADVANCE(190);
      END_STATE();
    case 69:
      if (lookahead == 'd') ADVANCE(114);
      if (lookahead == 'n') ADVANCE(202);
      if (lookahead == 'x') ADVANCE(195);
      END_STATE();
    case 70:
      if (lookahead == 'd') ADVANCE(36);
      END_STATE();
    case 71:
      if (lookahead == 'd') ADVANCE(37);
      END_STATE();
    case 72:
      if (lookahead == 'd') ADVANCE(115);
      END_STATE();
    case 73:
      if (lookahead == 'd') ADVANCE(116);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(167);
      if (lookahead == 'p') ADVANCE(60);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(448);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(450);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(288);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(460);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(234);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(169);
      if (lookahead == 'f') ADVANCE(117);
      if (lookahead == 'i') ADVANCE(137);
      if (lookahead == 't') ADVANCE(170);
      if (lookahead == 'y') ADVANCE(138);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(72);
      if (lookahead == 'p') ADVANCE(174);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(51);
      if (lookahead == 'i') ADVANCE(136);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(73);
      if (lookahead == 'p') ADVANCE(177);
      END_STATE();
    case 99:
      if (lookahead == 'f') ADVANCE(426);
      END_STATE();
    case 100:
      if (lookahead == 'f') ADVANCE(426);
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 101:
      if (lookahead == 'f') ADVANCE(464);
      END_STATE();
    case 102:
      if (lookahead == 'g') ADVANCE(286);
      END_STATE();
    case 103:
      if (lookahead == 'g') ADVANCE(80);
      END_STATE();
    case 104:
      if (lookahead == 'g') ADVANCE(81);
      END_STATE();
    case 105:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 106:
      if (lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 107:
      if (lookahead == 'i') ADVANCE(155);
      END_STATE();
    case 108:
      if (lookahead == 'i') ADVANCE(157);
      END_STATE();
    case 109:
      if (lookahead == 'i') ADVANCE(175);
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
      if (lookahead == 'i') ADVANCE(161);
      END_STATE();
    case 114:
      if (lookahead == 'i') ADVANCE(197);
      END_STATE();
    case 115:
      if (lookahead == 'i') ADVANCE(199);
      END_STATE();
    case 116:
      if (lookahead == 'i') ADVANCE(200);
      END_STATE();
    case 117:
      if (lookahead == 'i') ADVANCE(213);
      END_STATE();
    case 118:
      if (lookahead == 'i') ADVANCE(144);
      END_STATE();
    case 119:
      if (lookahead == 'k') ADVANCE(453);
      END_STATE();
    case 120:
      if (lookahead == 'k') ADVANCE(55);
      END_STATE();
    case 121:
      if (lookahead == 'l') ADVANCE(284);
      END_STATE();
    case 122:
      if (lookahead == 'l') ADVANCE(470);
      END_STATE();
    case 123:
      if (lookahead == 'l') ADVANCE(185);
      END_STATE();
    case 124:
      if (lookahead == 'l') ADVANCE(105);
      END_STATE();
    case 125:
      if (lookahead == 'l') ADVANCE(79);
      END_STATE();
    case 126:
      if (lookahead == 'm') ADVANCE(166);
      if (lookahead == 'n') ADVANCE(100);
      END_STATE();
    case 127:
      if (lookahead == 'm') ADVANCE(166);
      if (lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 128:
      if (lookahead == 'm') ADVANCE(244);
      END_STATE();
    case 129:
      if (lookahead == 'm') ADVANCE(262);
      END_STATE();
    case 130:
      if (lookahead == 'n') ADVANCE(426);
      END_STATE();
    case 131:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 132:
      if (lookahead == 'n') ADVANCE(236);
      END_STATE();
    case 133:
      if (lookahead == 'n') ADVANCE(476);
      END_STATE();
    case 134:
      if (lookahead == 'n') ADVANCE(235);
      END_STATE();
    case 135:
      if (lookahead == 'n') ADVANCE(91);
      if (lookahead == 'p') ADVANCE(189);
      END_STATE();
    case 136:
      if (lookahead == 'n') ADVANCE(102);
      END_STATE();
    case 137:
      if (lookahead == 'n') ADVANCE(196);
      END_STATE();
    case 138:
      if (lookahead == 'n') ADVANCE(191);
      END_STATE();
    case 139:
      if (lookahead == 'n') ADVANCE(179);
      END_STATE();
    case 140:
      if (lookahead == 'n') ADVANCE(180);
      END_STATE();
    case 141:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 142:
      if (lookahead == 'n') ADVANCE(182);
      END_STATE();
    case 143:
      if (lookahead == 'n') ADVANCE(183);
      END_STATE();
    case 144:
      if (lookahead == 'n') ADVANCE(198);
      END_STATE();
    case 145:
      if (lookahead == 'o') ADVANCE(207);
      END_STATE();
    case 146:
      if (lookahead == 'o') ADVANCE(254);
      if (lookahead == 'r') ADVANCE(206);
      END_STATE();
    case 147:
      if (lookahead == 'o') ADVANCE(101);
      END_STATE();
    case 148:
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 149:
      if (lookahead == 'o') ADVANCE(150);
      if (lookahead == 'y') ADVANCE(188);
      END_STATE();
    case 150:
      if (lookahead == 'o') ADVANCE(121);
      END_STATE();
    case 151:
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 152:
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 153:
      if (lookahead == 'o') ADVANCE(172);
      END_STATE();
    case 154:
      if (lookahead == 'o') ADVANCE(203);
      END_STATE();
    case 155:
      if (lookahead == 'o') ADVANCE(132);
      END_STATE();
    case 156:
      if (lookahead == 'o') ADVANCE(192);
      END_STATE();
    case 157:
      if (lookahead == 'o') ADVANCE(133);
      END_STATE();
    case 158:
      if (lookahead == 'o') ADVANCE(140);
      END_STATE();
    case 159:
      if (lookahead == 'o') ADVANCE(142);
      END_STATE();
    case 160:
      if (lookahead == 'o') ADVANCE(143);
      END_STATE();
    case 161:
      if (lookahead == 'o') ADVANCE(134);
      END_STATE();
    case 162:
      if (lookahead == 'o') ADVANCE(193);
      END_STATE();
    case 163:
      if (lookahead == 'p') ADVANCE(255);
      if (lookahead == 'x') ADVANCE(452);
      END_STATE();
    case 164:
      if (lookahead == 'p') ADVANCE(466);
      END_STATE();
    case 165:
      if (lookahead == 'p') ADVANCE(60);
      END_STATE();
    case 166:
      if (lookahead == 'p') ADVANCE(153);
      END_STATE();
    case 167:
      if (lookahead == 'p') ADVANCE(93);
      if (lookahead == 'q') ADVANCE(205);
      if (lookahead == 's') ADVANCE(92);
      if (lookahead == 't') ADVANCE(204);
      END_STATE();
    case 168:
      if (lookahead == 'p') ADVANCE(201);
      END_STATE();
    case 169:
      if (lookahead == 'r') ADVANCE(208);
      END_STATE();
    case 170:
      if (lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 171:
      if (lookahead == 'r') ADVANCE(209);
      END_STATE();
    case 172:
      if (lookahead == 'r') ADVANCE(187);
      END_STATE();
    case 173:
      if (lookahead == 'r') ADVANCE(139);
      END_STATE();
    case 174:
      if (lookahead == 'r') ADVANCE(156);
      END_STATE();
    case 175:
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 176:
      if (lookahead == 'r') ADVANCE(154);
      END_STATE();
    case 177:
      if (lookahead == 'r') ADVANCE(162);
      END_STATE();
    case 178:
      if (lookahead == 's') ADVANCE(292);
      END_STATE();
    case 179:
      if (lookahead == 's') ADVANCE(261);
      END_STATE();
    case 180:
      if (lookahead == 's') ADVANCE(468);
      END_STATE();
    case 181:
      if (lookahead == 's') ADVANCE(184);
      END_STATE();
    case 182:
      if (lookahead == 's') ADVANCE(6);
      END_STATE();
    case 183:
      if (lookahead == 's') ADVANCE(11);
      END_STATE();
    case 184:
      if (lookahead == 's') ADVANCE(49);
      END_STATE();
    case 185:
      if (lookahead == 's') ADVANCE(78);
      END_STATE();
    case 186:
      if (lookahead == 't') ADVANCE(290);
      END_STATE();
    case 187:
      if (lookahead == 't') ADVANCE(233);
      END_STATE();
    case 188:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 189:
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 190:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 191:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 192:
      if (lookahead == 't') ADVANCE(148);
      END_STATE();
    case 193:
      if (lookahead == 't') ADVANCE(151);
      END_STATE();
    case 194:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 195:
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 196:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 197:
      if (lookahead == 't') ADVANCE(108);
      END_STATE();
    case 198:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 199:
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 200:
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 201:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 202:
      if (lookahead == 'u') ADVANCE(128);
      END_STATE();
    case 203:
      if (lookahead == 'u') ADVANCE(164);
      END_STATE();
    case 204:
      if (lookahead == 'u') ADVANCE(173);
      END_STATE();
    case 205:
      if (lookahead == 'u') ADVANCE(109);
      END_STATE();
    case 206:
      if (lookahead == 'u') ADVANCE(77);
      END_STATE();
    case 207:
      if (lookahead == 'u') ADVANCE(58);
      END_STATE();
    case 208:
      if (lookahead == 'v') ADVANCE(106);
      END_STATE();
    case 209:
      if (lookahead == 'v') ADVANCE(90);
      END_STATE();
    case 210:
      if (lookahead == 'x') ADVANCE(452);
      END_STATE();
    case 211:
      if (lookahead == 'x') ADVANCE(457);
      END_STATE();
    case 212:
      if (lookahead == 'x') ADVANCE(76);
      END_STATE();
    case 213:
      if (lookahead == 'x') ADVANCE(97);
      END_STATE();
    case 214:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(428);
      END_STATE();
    case 215:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(427);
      END_STATE();
    case 216:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(428);
      END_STATE();
    case 217:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(477);
      END_STATE();
    case 218:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      END_STATE();
    case 219:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      END_STATE();
    case 220:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(443);
      END_STATE();
    case 221:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(425);
      END_STATE();
    case 222:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(220);
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(227);
      END_STATE();
    case 229:
      if (eof) ADVANCE(231);
      if (lookahead == '"') ADVANCE(429);
      if (lookahead == '\'') ADVANCE(436);
      if (lookahead == '(') ADVANCE(242);
      if (lookahead == ')') ADVANCE(243);
      if (lookahead == '+') ADVANCE(414);
      if (lookahead == ',') ADVANCE(250);
      if (lookahead == '-') ADVANCE(248);
      if (lookahead == '.') ADVANCE(241);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '0') ADVANCE(416);
      if (lookahead == ':') ADVANCE(415);
      if (lookahead == ';') ADVANCE(232);
      if (lookahead == '<') ADVANCE(257);
      if (lookahead == '=') ADVANCE(239);
      if (lookahead == '>') ADVANCE(258);
      if (lookahead == '[') ADVANCE(249);
      if (lookahead == ']') ADVANCE(251);
      if (lookahead == 'b') ADVANCE(149);
      if (lookahead == 'd') ADVANCE(145);
      if (lookahead == 'e') ADVANCE(68);
      if (lookahead == 'f') ADVANCE(44);
      if (lookahead == 'g') ADVANCE(176);
      if (lookahead == 'i') ADVANCE(126);
      if (lookahead == 'm') ADVANCE(45);
      if (lookahead == 'n') ADVANCE(46);
      if (lookahead == 'o') ADVANCE(135);
      if (lookahead == 'p') ADVANCE(48);
      if (lookahead == 'r') ADVANCE(75);
      if (lookahead == 's') ADVANCE(84);
      if (lookahead == 't') ADVANCE(146);
      if (lookahead == 'u') ADVANCE(118);
      if (lookahead == 'w') ADVANCE(85);
      if (lookahead == '{') ADVANCE(246);
      if (lookahead == '}') ADVANCE(247);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(229)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(418);
      END_STATE();
    case 230:
      if (eof) ADVANCE(231);
      if (lookahead == '.') ADVANCE(215);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '0') ADVANCE(417);
      if (lookahead == ';') ADVANCE(232);
      if (lookahead == 'e') ADVANCE(69);
      if (lookahead == 'i') ADVANCE(127);
      if (lookahead == 'm') ADVANCE(74);
      if (lookahead == 'n') ADVANCE(46);
      if (lookahead == 'o') ADVANCE(168);
      if (lookahead == 'p') ADVANCE(47);
      if (lookahead == 'r') ADVANCE(165);
      if (lookahead == 's') ADVANCE(83);
      if (lookahead == '}') ADVANCE(247);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(230)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(418);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_package);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_option);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_option);
      if (lookahead == 'a') ADVANCE(122);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_option);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 'a') ADVANCE(349);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_option);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(427);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_enum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_reserved);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_reserved);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_map);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_map);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_service);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_rpc);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_returns);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_stream);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_stream);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_int32);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_int32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_int64);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_int64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_uint32);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_uint32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_uint64);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_uint64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_sint32);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_sint32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_sint64);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_sint64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_fixed32);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_fixed32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_fixed64);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_fixed64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_sfixed32);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_sfixed32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_sfixed64);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_sfixed64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_double);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_bytes);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_bytes);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3') ADVANCE(294);
      if (lookahead == '6') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3') ADVANCE(295);
      if (lookahead == '6') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3') ADVANCE(296);
      if (lookahead == '6') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3') ADVANCE(297);
      if (lookahead == '6') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3') ADVANCE(298);
      if (lookahead == '6') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e') ||
          lookahead == 'g' ||
          lookahead == 'h' ||
          ('j' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 'f') ADVANCE(347);
      if (lookahead == 'i') ADVANCE(362);
      if (lookahead == 't') ADVANCE(379);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 'a') ADVANCE(372);
      if (lookahead == 'e') ADVANCE(384);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          lookahead == 'j' ||
          lookahead == 'k' ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 'i') ADVANCE(403);
      if (lookahead == 'l') ADVANCE(366);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          lookahead == 'o' ||
          ('q' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 'n') ADVANCE(334);
      if (lookahead == 'p') ADVANCE(390);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'w') ||
          lookahead == 'y' ||
          lookahead == 'z') ADVANCE(413);
      if (lookahead == 'n') ADVANCE(399);
      if (lookahead == 'x') ADVANCE(391);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'x') ||
          lookahead == 'z') ADVANCE(413);
      if (lookahead == 'o') ADVANCE(365);
      if (lookahead == 'y') ADVANCE(389);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'o') ||
          lookahead == 'q' ||
          lookahead == 'r' ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 'p') ADVANCE(332);
      if (lookahead == 's') ADVANCE(329);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'a' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 'b') ADVANCE(351);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'c') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 'd') ADVANCE(463);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'c') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 'd') ADVANCE(456);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'c') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 'd') ADVANCE(253);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'c') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 'd') ADVANCE(302);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'c') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 'd') ADVANCE(303);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 'e') ADVANCE(315);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 'e') ADVANCE(320);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 'e') ADVANCE(289);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 'e') ADVANCE(461);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 'e') ADVANCE(449);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 'e') ADVANCE(451);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 'e') ADVANCE(358);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 'e') ADVANCE(378);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 'e') ADVANCE(375);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 'e') ADVANCE(383);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 'e') ADVANCE(412);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 'e') ADVANCE(318);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 'e') ADVANCE(367);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 'e') ADVANCE(319);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 'e') ADVANCE(407);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 'e') ADVANCE(321);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 'f') ADVANCE(413);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 'f') ADVANCE(465);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f') ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 'g') ADVANCE(287);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f') ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 'g') ADVANCE(325);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 'i') ADVANCE(360);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 'i') ADVANCE(369);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 'i') ADVANCE(370);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 'i') ADVANCE(371);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 'i') ADVANCE(363);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 'i') ADVANCE(404);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 'l') ADVANCE(285);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 'l') ADVANCE(471);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 'l') ADVANCE(386);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 'l') ADVANCE(324);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 'm') ADVANCE(245);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 'm') ADVANCE(263);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 'n') ADVANCE(413);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 'n') ADVANCE(237);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 'n') ADVANCE(238);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 'n') ADVANCE(387);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 'n') ADVANCE(317);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 'n') ADVANCE(338);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 'n') ADVANCE(340);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 'n') ADVANCE(408);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 'n') ADVANCE(394);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 'n') ADVANCE(396);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 'o') ADVANCE(398);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 'o') ADVANCE(348);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 'o') ADVANCE(409);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 'o') ADVANCE(339);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 'o') ADVANCE(400);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 'o') ADVANCE(355);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 'o') ADVANCE(361);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 'o') ADVANCE(356);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'o') ||
          ('q' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 'p') ADVANCE(256);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'o') ||
          ('q' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 'p') ADVANCE(467);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'o') ||
          ('q' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 'p') ADVANCE(390);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'o') ||
          ('q' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 'p') ADVANCE(332);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'o') ||
          ('q' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 'p') ADVANCE(395);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'o') ||
          ('q' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 'p') ADVANCE(397);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 'r') ADVANCE(402);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 'r') ADVANCE(342);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 'r') ADVANCE(401);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 'r') ADVANCE(336);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 'r') ADVANCE(368);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 's') ADVANCE(293);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 's') ADVANCE(385);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 's') ADVANCE(406);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 's') ADVANCE(327);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 't') ADVANCE(299);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 't') ADVANCE(291);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 't') ADVANCE(331);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 't') ADVANCE(343);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 't') ADVANCE(328);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 't') ADVANCE(381);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 't') ADVANCE(333);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 't') ADVANCE(300);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 't') ADVANCE(344);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 't') ADVANCE(301);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 't') ADVANCE(345);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 'u') ADVANCE(316);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 'u') ADVANCE(352);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 'u') ADVANCE(373);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 'u') ADVANCE(326);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'u') ||
          ('w' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 'v') ADVANCE(335);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'w') ||
          lookahead == 'y' ||
          lookahead == 'z') ADVANCE(413);
      if (lookahead == 'x') ADVANCE(323);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'w') ||
          lookahead == 'y' ||
          lookahead == 'z') ADVANCE(413);
      if (lookahead == 'x') ADVANCE(337);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 'a') ADVANCE(372);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 'a') ADVANCE(341);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 'a') ADVANCE(353);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 'a') ADVANCE(349);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 'a') ADVANCE(388);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 'a') ADVANCE(350);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 'a') ADVANCE(354);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == 'a') ADVANCE(393);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_decimal_lit);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(214);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(221);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(422);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_decimal_lit);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(214);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(221);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(423);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_decimal_lit);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(418);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_decimal_lit);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(424);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_decimal_lit);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(420);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_octal_lit);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(214);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(423);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_octal_lit);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(214);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(421);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_octal_lit);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(214);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(423);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_octal_lit);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(424);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_hex_lit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(425);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_float_lit);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_float_lit);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(427);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_float_lit);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(428);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(430);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(433);
      if (lookahead == '/') ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(432);
      if (lookahead == '/') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(433);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(433);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(431);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\n') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(437);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '*') ADVANCE(440);
      if (lookahead == '/') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '*') ADVANCE(439);
      if (lookahead == '/') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(440);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '*') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(440);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '/') ADVANCE(438);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(443);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(447);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_max);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_weak);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_public);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_repeated);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_repeated);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_syntax);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_DQUOTEproto2_DQUOTE);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_SQUOTEproto2_SQUOTE);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_message);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_message);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_extend);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_extend);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_oneof);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_oneof);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_group);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_group);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_extensions);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_required);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_optional);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_optional);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_DQUOTEproto3_DQUOTE);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_SQUOTEproto3_SQUOTE);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_DQUOTEeditions_DQUOTE);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_SQUOTEeditions_SQUOTE);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_edition);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_edition_version);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_edition_version);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(214);
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
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 21},
  [31] = {.lex_state = 21},
  [32] = {.lex_state = 21},
  [33] = {.lex_state = 21},
  [34] = {.lex_state = 21},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 7},
  [41] = {.lex_state = 7},
  [42] = {.lex_state = 7},
  [43] = {.lex_state = 7},
  [44] = {.lex_state = 19},
  [45] = {.lex_state = 7},
  [46] = {.lex_state = 7},
  [47] = {.lex_state = 20},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 230},
  [50] = {.lex_state = 22},
  [51] = {.lex_state = 21},
  [52] = {.lex_state = 22},
  [53] = {.lex_state = 21},
  [54] = {.lex_state = 21},
  [55] = {.lex_state = 21},
  [56] = {.lex_state = 22},
  [57] = {.lex_state = 22},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 22},
  [60] = {.lex_state = 22},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 230},
  [66] = {.lex_state = 230},
  [67] = {.lex_state = 230},
  [68] = {.lex_state = 230},
  [69] = {.lex_state = 230},
  [70] = {.lex_state = 230},
  [71] = {.lex_state = 230},
  [72] = {.lex_state = 230},
  [73] = {.lex_state = 230},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 230},
  [97] = {.lex_state = 230},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 2},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 230},
  [102] = {.lex_state = 2},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 230},
  [105] = {.lex_state = 230},
  [106] = {.lex_state = 12},
  [107] = {.lex_state = 230},
  [108] = {.lex_state = 230},
  [109] = {.lex_state = 230},
  [110] = {.lex_state = 230},
  [111] = {.lex_state = 12},
  [112] = {.lex_state = 230},
  [113] = {.lex_state = 230},
  [114] = {.lex_state = 230},
  [115] = {.lex_state = 230},
  [116] = {.lex_state = 230},
  [117] = {.lex_state = 230},
  [118] = {.lex_state = 230},
  [119] = {.lex_state = 230},
  [120] = {.lex_state = 230},
  [121] = {.lex_state = 230},
  [122] = {.lex_state = 230},
  [123] = {.lex_state = 230},
  [124] = {.lex_state = 230},
  [125] = {.lex_state = 230},
  [126] = {.lex_state = 230},
  [127] = {.lex_state = 12},
  [128] = {.lex_state = 230},
  [129] = {.lex_state = 25},
  [130] = {.lex_state = 25},
  [131] = {.lex_state = 230},
  [132] = {.lex_state = 25},
  [133] = {.lex_state = 230},
  [134] = {.lex_state = 230},
  [135] = {.lex_state = 25},
  [136] = {.lex_state = 25},
  [137] = {.lex_state = 25},
  [138] = {.lex_state = 12},
  [139] = {.lex_state = 25},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 12},
  [146] = {.lex_state = 12},
  [147] = {.lex_state = 2},
  [148] = {.lex_state = 12},
  [149] = {.lex_state = 12},
  [150] = {.lex_state = 12},
  [151] = {.lex_state = 7},
  [152] = {.lex_state = 12},
  [153] = {.lex_state = 12},
  [154] = {.lex_state = 230},
  [155] = {.lex_state = 12},
  [156] = {.lex_state = 230},
  [157] = {.lex_state = 12},
  [158] = {.lex_state = 230},
  [159] = {.lex_state = 12},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 12},
  [162] = {.lex_state = 12},
  [163] = {.lex_state = 12},
  [164] = {.lex_state = 12},
  [165] = {.lex_state = 12},
  [166] = {.lex_state = 2},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 12},
  [169] = {.lex_state = 12},
  [170] = {.lex_state = 12},
  [171] = {.lex_state = 12},
  [172] = {.lex_state = 23},
  [173] = {.lex_state = 2},
  [174] = {.lex_state = 230},
  [175] = {.lex_state = 24},
  [176] = {.lex_state = 12},
  [177] = {.lex_state = 12},
  [178] = {.lex_state = 12},
  [179] = {.lex_state = 12},
  [180] = {.lex_state = 12},
  [181] = {.lex_state = 12},
  [182] = {.lex_state = 12},
  [183] = {.lex_state = 23},
  [184] = {.lex_state = 23},
  [185] = {.lex_state = 230},
  [186] = {.lex_state = 12},
  [187] = {.lex_state = 12},
  [188] = {.lex_state = 25},
  [189] = {.lex_state = 12},
  [190] = {.lex_state = 8},
  [191] = {.lex_state = 2},
  [192] = {.lex_state = 3},
  [193] = {.lex_state = 230},
  [194] = {.lex_state = 25},
  [195] = {.lex_state = 230},
  [196] = {.lex_state = 12},
  [197] = {.lex_state = 12},
  [198] = {.lex_state = 8},
  [199] = {.lex_state = 3},
  [200] = {.lex_state = 2},
  [201] = {.lex_state = 3},
  [202] = {.lex_state = 2},
  [203] = {.lex_state = 2},
  [204] = {.lex_state = 2},
  [205] = {.lex_state = 2},
  [206] = {.lex_state = 12},
  [207] = {.lex_state = 230},
  [208] = {.lex_state = 12},
  [209] = {.lex_state = 2},
  [210] = {.lex_state = 2},
  [211] = {.lex_state = 2},
  [212] = {.lex_state = 2},
  [213] = {.lex_state = 8},
  [214] = {.lex_state = 230},
  [215] = {.lex_state = 230},
  [216] = {.lex_state = 2},
  [217] = {.lex_state = 12},
  [218] = {.lex_state = 12},
  [219] = {.lex_state = 25},
  [220] = {.lex_state = 25},
  [221] = {.lex_state = 12},
  [222] = {.lex_state = 25},
  [223] = {.lex_state = 25},
  [224] = {.lex_state = 230},
  [225] = {.lex_state = 2},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 12},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 12},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 12},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 12},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 2},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 12},
  [261] = {.lex_state = 12},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 12},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 12},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 12},
  [271] = {.lex_state = 12},
  [272] = {.lex_state = 12},
  [273] = {.lex_state = 2},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 12},
  [280] = {.lex_state = 12},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 12},
  [283] = {.lex_state = 12},
  [284] = {.lex_state = 2},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 2},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 12},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 2},
  [296] = {.lex_state = 12},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 12},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 12},
  [308] = {.lex_state = 12},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 12},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 12},
  [318] = {.lex_state = 12},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 2},
  [322] = {.lex_state = 12},
  [323] = {.lex_state = 12},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 12},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 12},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 12},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 12},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 7},
  [375] = {.lex_state = 12},
  [376] = {.lex_state = 12},
  [377] = {.lex_state = 12},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 7},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 12},
  [385] = {.lex_state = 12},
  [386] = {.lex_state = 12},
  [387] = {.lex_state = 12},
  [388] = {.lex_state = 12},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 12},
  [396] = {.lex_state = 12},
  [397] = {.lex_state = 12},
  [398] = {.lex_state = 12},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
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
    [sym_source_file] = STATE(399),
    [sym_syntax2] = STATE(65),
    [sym_syntax3] = STATE(67),
    [sym_syntaxEditions] = STATE(49),
    [sym_edition] = STATE(67),
    [sym_comment] = ACTIONS(3),
    [anon_sym_syntax] = ACTIONS(5),
    [anon_sym_edition] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 18,
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
      anon_sym_extend,
    ACTIONS(33), 1,
      anon_sym_oneof,
    STATE(279), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(293), 1,
      sym_message_or_enum_type,
    STATE(317), 1,
      sym_type,
    ACTIONS(27), 2,
      sym_repeated,
      sym_optional,
    STATE(6), 10,
      sym_empty_statement,
      sym_option,
      sym_enum,
      sym_reserved,
      sym_map_field,
      sym_message3,
      sym_extend3,
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
  [79] = 18,
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
      anon_sym_extend,
    ACTIONS(33), 1,
      anon_sym_oneof,
    ACTIONS(35), 1,
      anon_sym_RBRACE,
    STATE(279), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(293), 1,
      sym_message_or_enum_type,
    STATE(317), 1,
      sym_type,
    ACTIONS(27), 2,
      sym_repeated,
      sym_optional,
    STATE(4), 10,
      sym_empty_statement,
      sym_option,
      sym_enum,
      sym_reserved,
      sym_map_field,
      sym_message3,
      sym_extend3,
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
  [158] = 18,
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
      anon_sym_extend,
    ACTIONS(33), 1,
      anon_sym_oneof,
    ACTIONS(37), 1,
      anon_sym_RBRACE,
    STATE(279), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(293), 1,
      sym_message_or_enum_type,
    STATE(317), 1,
      sym_type,
    ACTIONS(27), 2,
      sym_repeated,
      sym_optional,
    STATE(6), 10,
      sym_empty_statement,
      sym_option,
      sym_enum,
      sym_reserved,
      sym_map_field,
      sym_message3,
      sym_extend3,
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
  [237] = 18,
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
      anon_sym_extend,
    ACTIONS(33), 1,
      anon_sym_oneof,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    STATE(279), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(293), 1,
      sym_message_or_enum_type,
    STATE(317), 1,
      sym_type,
    ACTIONS(27), 2,
      sym_repeated,
      sym_optional,
    STATE(2), 10,
      sym_empty_statement,
      sym_option,
      sym_enum,
      sym_reserved,
      sym_map_field,
      sym_message3,
      sym_extend3,
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
  [316] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_SEMI,
    ACTIONS(44), 1,
      anon_sym_option,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(50), 1,
      anon_sym_enum,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    ACTIONS(55), 1,
      anon_sym_reserved,
    ACTIONS(58), 1,
      anon_sym_map,
    ACTIONS(64), 1,
      sym_identifier,
    ACTIONS(70), 1,
      anon_sym_message,
    ACTIONS(73), 1,
      anon_sym_extend,
    ACTIONS(76), 1,
      anon_sym_oneof,
    STATE(279), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(293), 1,
      sym_message_or_enum_type,
    STATE(317), 1,
      sym_type,
    ACTIONS(67), 2,
      sym_repeated,
      sym_optional,
    STATE(6), 10,
      sym_empty_statement,
      sym_option,
      sym_enum,
      sym_reserved,
      sym_map_field,
      sym_message3,
      sym_extend3,
      sym_oneof3,
      sym_field3,
      aux_sym_message_body3_repeat1,
    ACTIONS(61), 15,
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
  [395] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(79), 1,
      anon_sym_SEMI,
    ACTIONS(81), 1,
      anon_sym_option,
    ACTIONS(83), 1,
      anon_sym_RBRACE,
    STATE(279), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(293), 1,
      sym_message_or_enum_type,
    STATE(397), 1,
      sym_type,
    ACTIONS(85), 2,
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
  [450] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_SEMI,
    ACTIONS(90), 1,
      anon_sym_option,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(96), 1,
      anon_sym_RBRACE,
    ACTIONS(101), 1,
      sym_identifier,
    STATE(279), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(293), 1,
      sym_message_or_enum_type,
    STATE(397), 1,
      sym_type,
    ACTIONS(104), 2,
      sym_repeated,
      sym_optional,
    STATE(8), 4,
      sym_empty_statement,
      sym_option,
      sym_field3,
      aux_sym_oneof_body3_repeat1,
    ACTIONS(98), 15,
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
  [505] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(79), 1,
      anon_sym_SEMI,
    ACTIONS(81), 1,
      anon_sym_option,
    ACTIONS(107), 1,
      anon_sym_RBRACE,
    STATE(279), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(293), 1,
      sym_message_or_enum_type,
    STATE(397), 1,
      sym_type,
    ACTIONS(85), 2,
      sym_repeated,
      sym_optional,
    STATE(8), 4,
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
  [560] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(111), 25,
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
      anon_sym_extend,
      anon_sym_oneof,
      sym_optional,
  [596] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(115), 25,
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
      anon_sym_extend,
      anon_sym_oneof,
      sym_optional,
  [632] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(119), 25,
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
      anon_sym_extend,
      anon_sym_oneof,
      sym_optional,
  [668] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(123), 25,
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
      anon_sym_extend,
      anon_sym_oneof,
      sym_optional,
  [704] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(127), 25,
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
      anon_sym_extend,
      anon_sym_oneof,
      sym_optional,
  [740] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(131), 25,
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
      anon_sym_extend,
      anon_sym_oneof,
      sym_optional,
  [776] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(135), 25,
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
      anon_sym_extend,
      anon_sym_oneof,
      sym_optional,
  [812] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(139), 25,
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
      anon_sym_extend,
      anon_sym_oneof,
      sym_optional,
  [848] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(143), 25,
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
      anon_sym_extend,
      anon_sym_oneof,
      sym_optional,
  [884] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(147), 25,
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
      anon_sym_extend,
      anon_sym_oneof,
      sym_optional,
  [920] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(151), 25,
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
      anon_sym_extend,
      anon_sym_oneof,
      sym_optional,
  [956] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(155), 25,
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
      anon_sym_extend,
      anon_sym_oneof,
      sym_optional,
  [992] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(159), 25,
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
      anon_sym_extend,
      anon_sym_oneof,
      sym_optional,
  [1028] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(163), 25,
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
      anon_sym_extend,
      anon_sym_oneof,
      sym_optional,
  [1064] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(167), 25,
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
      anon_sym_extend,
      anon_sym_oneof,
      sym_optional,
  [1100] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(171), 25,
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
      anon_sym_extend,
      anon_sym_oneof,
      sym_optional,
  [1136] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(175), 25,
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
      anon_sym_extend,
      anon_sym_oneof,
      sym_optional,
  [1172] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(179), 25,
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
      anon_sym_extend,
      anon_sym_oneof,
      sym_optional,
  [1208] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(183), 25,
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
      anon_sym_extend,
      anon_sym_oneof,
      sym_optional,
  [1244] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(187), 25,
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
      anon_sym_extend,
      anon_sym_oneof,
      sym_optional,
  [1280] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(189), 1,
      anon_sym_RBRACE,
    STATE(279), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(293), 1,
      sym_message_or_enum_type,
    STATE(395), 1,
      sym_type,
    ACTIONS(191), 2,
      sym_repeated,
      sym_optional,
    STATE(33), 2,
      sym_field3,
      aux_sym_extend3_repeat1,
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
  [1327] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(193), 1,
      anon_sym_RBRACE,
    STATE(279), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(293), 1,
      sym_message_or_enum_type,
    STATE(395), 1,
      sym_type,
    ACTIONS(191), 2,
      sym_repeated,
      sym_optional,
    STATE(33), 2,
      sym_field3,
      aux_sym_extend3_repeat1,
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
  [1374] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(195), 1,
      anon_sym_RBRACE,
    STATE(279), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(293), 1,
      sym_message_or_enum_type,
    STATE(395), 1,
      sym_type,
    ACTIONS(191), 2,
      sym_repeated,
      sym_optional,
    STATE(30), 2,
      sym_field3,
      aux_sym_extend3_repeat1,
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
  [1421] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_DOT,
    ACTIONS(200), 1,
      anon_sym_RBRACE,
    ACTIONS(205), 1,
      sym_identifier,
    STATE(279), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(293), 1,
      sym_message_or_enum_type,
    STATE(395), 1,
      sym_type,
    ACTIONS(208), 2,
      sym_repeated,
      sym_optional,
    STATE(33), 2,
      sym_field3,
      aux_sym_extend3_repeat1,
    ACTIONS(202), 15,
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
  [1468] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(211), 1,
      anon_sym_RBRACE,
    STATE(279), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(293), 1,
      sym_message_or_enum_type,
    STATE(395), 1,
      sym_type,
    ACTIONS(191), 2,
      sym_repeated,
      sym_optional,
    STATE(31), 2,
      sym_field3,
      aux_sym_extend3_repeat1,
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
  [1515] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_SEMI,
    ACTIONS(215), 1,
      anon_sym_option,
    ACTIONS(217), 1,
      anon_sym_enum,
    ACTIONS(219), 1,
      anon_sym_RBRACE,
    ACTIONS(221), 1,
      anon_sym_reserved,
    ACTIONS(225), 1,
      anon_sym_message,
    ACTIONS(227), 1,
      anon_sym_extend,
    ACTIONS(229), 1,
      anon_sym_oneof,
    ACTIONS(231), 1,
      anon_sym_extensions,
    ACTIONS(223), 3,
      sym_repeated,
      sym_required,
      sym_optional,
    STATE(36), 12,
      sym_empty_statement,
      sym_option,
      sym_enum,
      sym_reserved,
      sym_message2,
      sym_extend2,
      sym_oneof2,
      sym_field2,
      sym_map_field2,
      sym_group_field,
      sym_extensions,
      aux_sym_message_body2_repeat1,
  [1565] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_SEMI,
    ACTIONS(236), 1,
      anon_sym_option,
    ACTIONS(239), 1,
      anon_sym_enum,
    ACTIONS(242), 1,
      anon_sym_RBRACE,
    ACTIONS(244), 1,
      anon_sym_reserved,
    ACTIONS(250), 1,
      anon_sym_message,
    ACTIONS(253), 1,
      anon_sym_extend,
    ACTIONS(256), 1,
      anon_sym_oneof,
    ACTIONS(259), 1,
      anon_sym_extensions,
    ACTIONS(247), 3,
      sym_repeated,
      sym_required,
      sym_optional,
    STATE(36), 12,
      sym_empty_statement,
      sym_option,
      sym_enum,
      sym_reserved,
      sym_message2,
      sym_extend2,
      sym_oneof2,
      sym_field2,
      sym_map_field2,
      sym_group_field,
      sym_extensions,
      aux_sym_message_body2_repeat1,
  [1615] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_SEMI,
    ACTIONS(215), 1,
      anon_sym_option,
    ACTIONS(217), 1,
      anon_sym_enum,
    ACTIONS(221), 1,
      anon_sym_reserved,
    ACTIONS(225), 1,
      anon_sym_message,
    ACTIONS(227), 1,
      anon_sym_extend,
    ACTIONS(229), 1,
      anon_sym_oneof,
    ACTIONS(231), 1,
      anon_sym_extensions,
    ACTIONS(262), 1,
      anon_sym_RBRACE,
    ACTIONS(223), 3,
      sym_repeated,
      sym_required,
      sym_optional,
    STATE(36), 12,
      sym_empty_statement,
      sym_option,
      sym_enum,
      sym_reserved,
      sym_message2,
      sym_extend2,
      sym_oneof2,
      sym_field2,
      sym_map_field2,
      sym_group_field,
      sym_extensions,
      aux_sym_message_body2_repeat1,
  [1665] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_SEMI,
    ACTIONS(215), 1,
      anon_sym_option,
    ACTIONS(217), 1,
      anon_sym_enum,
    ACTIONS(221), 1,
      anon_sym_reserved,
    ACTIONS(225), 1,
      anon_sym_message,
    ACTIONS(227), 1,
      anon_sym_extend,
    ACTIONS(229), 1,
      anon_sym_oneof,
    ACTIONS(231), 1,
      anon_sym_extensions,
    ACTIONS(264), 1,
      anon_sym_RBRACE,
    ACTIONS(223), 3,
      sym_repeated,
      sym_required,
      sym_optional,
    STATE(35), 12,
      sym_empty_statement,
      sym_option,
      sym_enum,
      sym_reserved,
      sym_message2,
      sym_extend2,
      sym_oneof2,
      sym_field2,
      sym_map_field2,
      sym_group_field,
      sym_extensions,
      aux_sym_message_body2_repeat1,
  [1715] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_SEMI,
    ACTIONS(215), 1,
      anon_sym_option,
    ACTIONS(217), 1,
      anon_sym_enum,
    ACTIONS(221), 1,
      anon_sym_reserved,
    ACTIONS(225), 1,
      anon_sym_message,
    ACTIONS(227), 1,
      anon_sym_extend,
    ACTIONS(229), 1,
      anon_sym_oneof,
    ACTIONS(231), 1,
      anon_sym_extensions,
    ACTIONS(266), 1,
      anon_sym_RBRACE,
    ACTIONS(223), 3,
      sym_repeated,
      sym_required,
      sym_optional,
    STATE(37), 12,
      sym_empty_statement,
      sym_option,
      sym_enum,
      sym_reserved,
      sym_message2,
      sym_extend2,
      sym_oneof2,
      sym_field2,
      sym_map_field2,
      sym_group_field,
      sym_extensions,
      aux_sym_message_body2_repeat1,
  [1765] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(167), 19,
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
  [1795] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(175), 19,
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
  [1825] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(159), 19,
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
  [1855] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(115), 19,
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
  [1885] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(268), 1,
      anon_sym_map,
    ACTIONS(270), 1,
      anon_sym_group,
    STATE(279), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(293), 1,
      sym_message_or_enum_type,
    STATE(307), 1,
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
  [1927] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(183), 19,
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
  [1957] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(119), 19,
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
  [1987] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(270), 1,
      anon_sym_group,
    STATE(279), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(293), 1,
      sym_message_or_enum_type,
    STATE(307), 1,
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
  [2026] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_LBRACE,
    ACTIONS(276), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      anon_sym_LT,
    ACTIONS(280), 1,
      sym_identifier,
    ACTIONS(282), 1,
      anon_sym_COLON,
    ACTIONS(286), 1,
      sym_hex_lit,
    ACTIONS(288), 1,
      sym_float_lit,
    ACTIONS(290), 1,
      anon_sym_DQUOTE,
    ACTIONS(292), 1,
      anon_sym_SQUOTE,
    STATE(168), 1,
      sym_constant,
    ACTIONS(274), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(284), 2,
      sym_decimal_lit,
      sym_octal_lit,
    ACTIONS(294), 2,
      sym_true,
      sym_false,
    STATE(162), 5,
      sym_full_ident,
      sym_message_value,
      sym_bool,
      sym_int_lit,
      sym_string,
  [2079] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_edition,
    ACTIONS(296), 1,
      ts_builtin_sym_end,
    ACTIONS(298), 1,
      anon_sym_SEMI,
    ACTIONS(300), 1,
      anon_sym_import,
    ACTIONS(302), 1,
      anon_sym_package,
    ACTIONS(304), 1,
      anon_sym_option,
    ACTIONS(306), 1,
      anon_sym_enum,
    ACTIONS(308), 1,
      anon_sym_service,
    ACTIONS(310), 1,
      anon_sym_message,
    ACTIONS(312), 1,
      anon_sym_extend,
    STATE(71), 1,
      sym_edition,
    STATE(68), 9,
      sym_empty_statement,
      sym_import,
      sym_package,
      sym_option,
      sym_enum,
      sym_service,
      sym_message3,
      sym_extend3,
      aux_sym_source_file_repeat2,
  [2127] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      sym_identifier,
    STATE(279), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(293), 1,
      sym_message_or_enum_type,
    STATE(396), 1,
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
  [2163] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 2,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(119), 18,
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
  [2191] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      sym_identifier,
    STATE(279), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(293), 1,
      sym_message_or_enum_type,
    STATE(357), 1,
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
  [2227] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 2,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(175), 18,
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
  [2255] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 2,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(167), 18,
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
  [2283] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 2,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(183), 18,
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
  [2311] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      sym_identifier,
    STATE(279), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(293), 1,
      sym_message_or_enum_type,
    STATE(398), 1,
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
  [2347] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      sym_identifier,
    STATE(279), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(293), 1,
      sym_message_or_enum_type,
    STATE(368), 1,
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
  [2383] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_LBRACE,
    ACTIONS(278), 1,
      anon_sym_LT,
    ACTIONS(280), 1,
      sym_identifier,
    ACTIONS(286), 1,
      sym_hex_lit,
    ACTIONS(288), 1,
      sym_float_lit,
    ACTIONS(290), 1,
      anon_sym_DQUOTE,
    ACTIONS(292), 1,
      anon_sym_SQUOTE,
    ACTIONS(314), 1,
      anon_sym_LBRACK,
    STATE(186), 1,
      sym_constant,
    ACTIONS(274), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(284), 2,
      sym_decimal_lit,
      sym_octal_lit,
    ACTIONS(294), 2,
      sym_true,
      sym_false,
    STATE(162), 5,
      sym_full_ident,
      sym_message_value,
      sym_bool,
      sym_int_lit,
      sym_string,
  [2433] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      sym_identifier,
    STATE(279), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(293), 1,
      sym_message_or_enum_type,
    STATE(312), 1,
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
  [2469] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      sym_identifier,
    STATE(279), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(293), 1,
      sym_message_or_enum_type,
    STATE(307), 1,
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
  [2505] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_LBRACE,
    ACTIONS(278), 1,
      anon_sym_LT,
    ACTIONS(280), 1,
      sym_identifier,
    ACTIONS(288), 1,
      sym_float_lit,
    ACTIONS(290), 1,
      anon_sym_DQUOTE,
    ACTIONS(292), 1,
      anon_sym_SQUOTE,
    ACTIONS(320), 1,
      sym_hex_lit,
    STATE(297), 1,
      sym_constant,
    ACTIONS(294), 2,
      sym_true,
      sym_false,
    ACTIONS(316), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(318), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(162), 5,
      sym_full_ident,
      sym_message_value,
      sym_bool,
      sym_int_lit,
      sym_string,
  [2552] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_LBRACE,
    ACTIONS(278), 1,
      anon_sym_LT,
    ACTIONS(280), 1,
      sym_identifier,
    ACTIONS(288), 1,
      sym_float_lit,
    ACTIONS(290), 1,
      anon_sym_DQUOTE,
    ACTIONS(292), 1,
      anon_sym_SQUOTE,
    ACTIONS(320), 1,
      sym_hex_lit,
    STATE(233), 1,
      sym_constant,
    ACTIONS(294), 2,
      sym_true,
      sym_false,
    ACTIONS(316), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(318), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(162), 5,
      sym_full_ident,
      sym_message_value,
      sym_bool,
      sym_int_lit,
      sym_string,
  [2599] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_LBRACE,
    ACTIONS(278), 1,
      anon_sym_LT,
    ACTIONS(280), 1,
      sym_identifier,
    ACTIONS(288), 1,
      sym_float_lit,
    ACTIONS(290), 1,
      anon_sym_DQUOTE,
    ACTIONS(292), 1,
      anon_sym_SQUOTE,
    ACTIONS(320), 1,
      sym_hex_lit,
    STATE(259), 1,
      sym_constant,
    ACTIONS(294), 2,
      sym_true,
      sym_false,
    ACTIONS(316), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(318), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(162), 5,
      sym_full_ident,
      sym_message_value,
      sym_bool,
      sym_int_lit,
      sym_string,
  [2646] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_LBRACE,
    ACTIONS(278), 1,
      anon_sym_LT,
    ACTIONS(280), 1,
      sym_identifier,
    ACTIONS(288), 1,
      sym_float_lit,
    ACTIONS(290), 1,
      anon_sym_DQUOTE,
    ACTIONS(292), 1,
      anon_sym_SQUOTE,
    ACTIONS(320), 1,
      sym_hex_lit,
    STATE(262), 1,
      sym_constant,
    ACTIONS(294), 2,
      sym_true,
      sym_false,
    ACTIONS(316), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(318), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(162), 5,
      sym_full_ident,
      sym_message_value,
      sym_bool,
      sym_int_lit,
      sym_string,
  [2693] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      ts_builtin_sym_end,
    ACTIONS(298), 1,
      anon_sym_SEMI,
    ACTIONS(300), 1,
      anon_sym_import,
    ACTIONS(302), 1,
      anon_sym_package,
    ACTIONS(304), 1,
      anon_sym_option,
    ACTIONS(306), 1,
      anon_sym_enum,
    ACTIONS(308), 1,
      anon_sym_service,
    ACTIONS(322), 1,
      anon_sym_message,
    ACTIONS(324), 1,
      anon_sym_extend,
    STATE(66), 9,
      sym_empty_statement,
      sym_import,
      sym_package,
      sym_option,
      sym_enum,
      sym_service,
      sym_message2,
      sym_extend2,
      aux_sym_source_file_repeat1,
  [2735] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_SEMI,
    ACTIONS(300), 1,
      anon_sym_import,
    ACTIONS(302), 1,
      anon_sym_package,
    ACTIONS(304), 1,
      anon_sym_option,
    ACTIONS(306), 1,
      anon_sym_enum,
    ACTIONS(308), 1,
      anon_sym_service,
    ACTIONS(322), 1,
      anon_sym_message,
    ACTIONS(324), 1,
      anon_sym_extend,
    ACTIONS(326), 1,
      ts_builtin_sym_end,
    STATE(69), 9,
      sym_empty_statement,
      sym_import,
      sym_package,
      sym_option,
      sym_enum,
      sym_service,
      sym_message2,
      sym_extend2,
      aux_sym_source_file_repeat1,
  [2777] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      ts_builtin_sym_end,
    ACTIONS(298), 1,
      anon_sym_SEMI,
    ACTIONS(300), 1,
      anon_sym_import,
    ACTIONS(302), 1,
      anon_sym_package,
    ACTIONS(304), 1,
      anon_sym_option,
    ACTIONS(306), 1,
      anon_sym_enum,
    ACTIONS(308), 1,
      anon_sym_service,
    ACTIONS(310), 1,
      anon_sym_message,
    ACTIONS(312), 1,
      anon_sym_extend,
    STATE(68), 9,
      sym_empty_statement,
      sym_import,
      sym_package,
      sym_option,
      sym_enum,
      sym_service,
      sym_message3,
      sym_extend3,
      aux_sym_source_file_repeat2,
  [2819] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_SEMI,
    ACTIONS(300), 1,
      anon_sym_import,
    ACTIONS(302), 1,
      anon_sym_package,
    ACTIONS(304), 1,
      anon_sym_option,
    ACTIONS(306), 1,
      anon_sym_enum,
    ACTIONS(308), 1,
      anon_sym_service,
    ACTIONS(310), 1,
      anon_sym_message,
    ACTIONS(312), 1,
      anon_sym_extend,
    ACTIONS(326), 1,
      ts_builtin_sym_end,
    STATE(70), 9,
      sym_empty_statement,
      sym_import,
      sym_package,
      sym_option,
      sym_enum,
      sym_service,
      sym_message3,
      sym_extend3,
      aux_sym_source_file_repeat2,
  [2861] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      ts_builtin_sym_end,
    ACTIONS(330), 1,
      anon_sym_SEMI,
    ACTIONS(333), 1,
      anon_sym_import,
    ACTIONS(336), 1,
      anon_sym_package,
    ACTIONS(339), 1,
      anon_sym_option,
    ACTIONS(342), 1,
      anon_sym_enum,
    ACTIONS(345), 1,
      anon_sym_service,
    ACTIONS(348), 1,
      anon_sym_message,
    ACTIONS(351), 1,
      anon_sym_extend,
    STATE(69), 9,
      sym_empty_statement,
      sym_import,
      sym_package,
      sym_option,
      sym_enum,
      sym_service,
      sym_message2,
      sym_extend2,
      aux_sym_source_file_repeat1,
  [2903] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      ts_builtin_sym_end,
    ACTIONS(356), 1,
      anon_sym_SEMI,
    ACTIONS(359), 1,
      anon_sym_import,
    ACTIONS(362), 1,
      anon_sym_package,
    ACTIONS(365), 1,
      anon_sym_option,
    ACTIONS(368), 1,
      anon_sym_enum,
    ACTIONS(371), 1,
      anon_sym_service,
    ACTIONS(374), 1,
      anon_sym_message,
    ACTIONS(377), 1,
      anon_sym_extend,
    STATE(70), 9,
      sym_empty_statement,
      sym_import,
      sym_package,
      sym_option,
      sym_enum,
      sym_service,
      sym_message3,
      sym_extend3,
      aux_sym_source_file_repeat2,
  [2945] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_SEMI,
    ACTIONS(300), 1,
      anon_sym_import,
    ACTIONS(302), 1,
      anon_sym_package,
    ACTIONS(304), 1,
      anon_sym_option,
    ACTIONS(306), 1,
      anon_sym_enum,
    ACTIONS(308), 1,
      anon_sym_service,
    ACTIONS(310), 1,
      anon_sym_message,
    ACTIONS(326), 1,
      ts_builtin_sym_end,
    STATE(72), 8,
      sym_empty_statement,
      sym_import,
      sym_package,
      sym_option,
      sym_enum,
      sym_service,
      sym_message3,
      aux_sym_source_file_repeat3,
  [2983] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_SEMI,
    ACTIONS(300), 1,
      anon_sym_import,
    ACTIONS(302), 1,
      anon_sym_package,
    ACTIONS(304), 1,
      anon_sym_option,
    ACTIONS(306), 1,
      anon_sym_enum,
    ACTIONS(308), 1,
      anon_sym_service,
    ACTIONS(310), 1,
      anon_sym_message,
    ACTIONS(380), 1,
      ts_builtin_sym_end,
    STATE(73), 8,
      sym_empty_statement,
      sym_import,
      sym_package,
      sym_option,
      sym_enum,
      sym_service,
      sym_message3,
      aux_sym_source_file_repeat3,
  [3021] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      ts_builtin_sym_end,
    ACTIONS(384), 1,
      anon_sym_SEMI,
    ACTIONS(387), 1,
      anon_sym_import,
    ACTIONS(390), 1,
      anon_sym_package,
    ACTIONS(393), 1,
      anon_sym_option,
    ACTIONS(396), 1,
      anon_sym_enum,
    ACTIONS(399), 1,
      anon_sym_service,
    ACTIONS(402), 1,
      anon_sym_message,
    STATE(73), 8,
      sym_empty_statement,
      sym_import,
      sym_package,
      sym_option,
      sym_enum,
      sym_service,
      sym_message3,
      aux_sym_source_file_repeat3,
  [3059] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(310), 1,
      sym_key_type,
    ACTIONS(405), 12,
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
  [3080] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(334), 1,
      sym_key_type,
    ACTIONS(405), 12,
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
  [3101] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      anon_sym_option,
    ACTIONS(407), 11,
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
  [3121] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_option,
    ACTIONS(145), 11,
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
  [3141] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_option,
    ACTIONS(411), 11,
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
  [3161] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      anon_sym_option,
    ACTIONS(415), 11,
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
  [3181] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_option,
    ACTIONS(161), 11,
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
  [3201] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      anon_sym_option,
    ACTIONS(419), 11,
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
  [3221] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      anon_sym_option,
    ACTIONS(423), 11,
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
  [3241] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_option,
    ACTIONS(149), 11,
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
  [3261] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      anon_sym_option,
    ACTIONS(427), 11,
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
  [3281] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_option,
    ACTIONS(157), 11,
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
  [3301] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      anon_sym_option,
    ACTIONS(431), 11,
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
  [3321] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_option,
    ACTIONS(435), 11,
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
  [3341] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      anon_sym_option,
    ACTIONS(439), 11,
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
  [3361] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_option,
    ACTIONS(113), 11,
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
  [3381] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      anon_sym_option,
    ACTIONS(443), 11,
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
  [3401] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_option,
    ACTIONS(185), 11,
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
  [3421] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      anon_sym_option,
    ACTIONS(447), 11,
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
  [3441] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      anon_sym_option,
    ACTIONS(451), 11,
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
  [3461] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      anon_sym_option,
    ACTIONS(455), 11,
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
  [3481] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 1,
      anon_sym_option,
    ACTIONS(459), 11,
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
  [3501] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 11,
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
  [3518] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 11,
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
  [3535] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      anon_sym_SEMI,
    ACTIONS(466), 1,
      anon_sym_option,
    ACTIONS(469), 1,
      anon_sym_RBRACE,
    ACTIONS(471), 3,
      sym_repeated,
      sym_required,
      sym_optional,
    STATE(98), 4,
      sym_empty_statement,
      sym_option,
      sym_field2,
      aux_sym_oneof_body2_repeat1,
  [3559] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_DQUOTE,
    ACTIONS(292), 1,
      anon_sym_SQUOTE,
    ACTIONS(318), 1,
      sym_decimal_lit,
    STATE(227), 1,
      sym_string,
    STATE(228), 1,
      sym_int_lit,
    STATE(230), 1,
      sym_range,
    ACTIONS(320), 2,
      sym_octal_lit,
      sym_hex_lit,
    STATE(359), 2,
      sym_ranges,
      sym_field_names,
  [3589] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_SEMI,
    ACTIONS(215), 1,
      anon_sym_option,
    ACTIONS(474), 1,
      anon_sym_RBRACE,
    ACTIONS(476), 3,
      sym_repeated,
      sym_required,
      sym_optional,
    STATE(98), 4,
      sym_empty_statement,
      sym_option,
      sym_field2,
      aux_sym_oneof_body2_repeat1,
  [3613] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_service,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_edition,
  [3629] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_DQUOTE,
    ACTIONS(292), 1,
      anon_sym_SQUOTE,
    ACTIONS(318), 1,
      sym_decimal_lit,
    STATE(227), 1,
      sym_string,
    STATE(228), 1,
      sym_int_lit,
    STATE(230), 1,
      sym_range,
    ACTIONS(320), 2,
      sym_octal_lit,
      sym_hex_lit,
    STATE(313), 2,
      sym_ranges,
      sym_field_names,
  [3659] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_SEMI,
    ACTIONS(215), 1,
      anon_sym_option,
    ACTIONS(480), 1,
      anon_sym_RBRACE,
    ACTIONS(476), 3,
      sym_repeated,
      sym_required,
      sym_optional,
    STATE(100), 4,
      sym_empty_statement,
      sym_option,
      sym_field2,
      aux_sym_oneof_body2_repeat1,
  [3683] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_service,
      anon_sym_message,
      anon_sym_extend,
  [3698] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_service,
      anon_sym_message,
      anon_sym_extend,
  [3713] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_DOT,
    STATE(106), 1,
      aux_sym_full_ident_repeat1,
    ACTIONS(484), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_GT,
      sym_identifier,
  [3732] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_service,
      anon_sym_message,
      anon_sym_extend,
  [3747] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_service,
      anon_sym_message,
      anon_sym_extend,
  [3762] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_service,
      anon_sym_message,
      anon_sym_extend,
  [3777] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_service,
      anon_sym_message,
      anon_sym_extend,
  [3792] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      anon_sym_DOT,
    STATE(127), 1,
      aux_sym_full_ident_repeat1,
    ACTIONS(491), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_GT,
      sym_identifier,
  [3811] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_service,
      anon_sym_message,
      anon_sym_extend,
  [3826] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_service,
      anon_sym_message,
      anon_sym_extend,
  [3841] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_service,
      anon_sym_message,
      anon_sym_extend,
  [3856] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_service,
      anon_sym_message,
      anon_sym_extend,
  [3871] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_service,
      anon_sym_message,
      anon_sym_extend,
  [3886] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_service,
      anon_sym_message,
      anon_sym_extend,
  [3901] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_service,
      anon_sym_message,
      anon_sym_extend,
  [3916] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_service,
      anon_sym_message,
      anon_sym_extend,
  [3931] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_service,
      anon_sym_message,
      anon_sym_extend,
  [3946] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_service,
      anon_sym_message,
      anon_sym_extend,
  [3961] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_service,
      anon_sym_message,
      anon_sym_extend,
  [3976] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_service,
      anon_sym_message,
      anon_sym_extend,
  [3991] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_service,
      anon_sym_message,
      anon_sym_extend,
  [4006] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_service,
      anon_sym_message,
      anon_sym_extend,
  [4021] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_service,
      anon_sym_message,
      anon_sym_extend,
  [4036] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      anon_sym_DOT,
    STATE(106), 1,
      aux_sym_full_ident_repeat1,
    ACTIONS(507), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_GT,
      sym_identifier,
  [4055] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_service,
      anon_sym_message,
      anon_sym_extend,
  [4070] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 1,
      anon_sym_SEMI,
    ACTIONS(513), 1,
      anon_sym_option,
    ACTIONS(515), 1,
      anon_sym_RBRACE,
    ACTIONS(517), 1,
      sym_identifier,
    STATE(135), 4,
      sym_empty_statement,
      sym_option,
      sym_value,
      aux_sym_enum_body_repeat1,
  [4092] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      anon_sym_SEMI,
    ACTIONS(522), 1,
      anon_sym_option,
    ACTIONS(525), 1,
      anon_sym_RBRACE,
    ACTIONS(527), 1,
      sym_identifier,
    STATE(130), 4,
      sym_empty_statement,
      sym_option,
      sym_value,
      aux_sym_enum_body_repeat1,
  [4114] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_SEMI,
    ACTIONS(304), 1,
      anon_sym_option,
    ACTIONS(530), 1,
      anon_sym_RBRACE,
    ACTIONS(532), 1,
      anon_sym_rpc,
    STATE(133), 4,
      sym_empty_statement,
      sym_option,
      sym_rpc,
      aux_sym_service_body_repeat1,
  [4136] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 1,
      anon_sym_SEMI,
    ACTIONS(513), 1,
      anon_sym_option,
    ACTIONS(517), 1,
      sym_identifier,
    ACTIONS(534), 1,
      anon_sym_RBRACE,
    STATE(137), 4,
      sym_empty_statement,
      sym_option,
      sym_value,
      aux_sym_enum_body_repeat1,
  [4158] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_SEMI,
    ACTIONS(539), 1,
      anon_sym_option,
    ACTIONS(542), 1,
      anon_sym_RBRACE,
    ACTIONS(544), 1,
      anon_sym_rpc,
    STATE(133), 4,
      sym_empty_statement,
      sym_option,
      sym_rpc,
      aux_sym_service_body_repeat1,
  [4180] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_SEMI,
    ACTIONS(304), 1,
      anon_sym_option,
    ACTIONS(532), 1,
      anon_sym_rpc,
    ACTIONS(547), 1,
      anon_sym_RBRACE,
    STATE(131), 4,
      sym_empty_statement,
      sym_option,
      sym_rpc,
      aux_sym_service_body_repeat1,
  [4202] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 1,
      anon_sym_SEMI,
    ACTIONS(513), 1,
      anon_sym_option,
    ACTIONS(517), 1,
      sym_identifier,
    ACTIONS(549), 1,
      anon_sym_RBRACE,
    STATE(130), 4,
      sym_empty_statement,
      sym_option,
      sym_value,
      aux_sym_enum_body_repeat1,
  [4224] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 1,
      anon_sym_SEMI,
    ACTIONS(513), 1,
      anon_sym_option,
    ACTIONS(517), 1,
      sym_identifier,
    ACTIONS(551), 1,
      anon_sym_RBRACE,
    STATE(130), 4,
      sym_empty_statement,
      sym_option,
      sym_value,
      aux_sym_enum_body_repeat1,
  [4246] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 1,
      anon_sym_SEMI,
    ACTIONS(513), 1,
      anon_sym_option,
    ACTIONS(517), 1,
      sym_identifier,
    ACTIONS(553), 1,
      anon_sym_RBRACE,
    STATE(130), 4,
      sym_empty_statement,
      sym_option,
      sym_value,
      aux_sym_enum_body_repeat1,
  [4268] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 8,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_GT,
      sym_identifier,
  [4282] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 1,
      anon_sym_SEMI,
    ACTIONS(513), 1,
      anon_sym_option,
    ACTIONS(517), 1,
      sym_identifier,
    ACTIONS(557), 1,
      anon_sym_RBRACE,
    STATE(136), 4,
      sym_empty_statement,
      sym_option,
      sym_value,
      aux_sym_enum_body_repeat1,
  [4304] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      anon_sym_RBRACE,
    ACTIONS(561), 3,
      sym_repeated,
      sym_required,
      sym_optional,
    STATE(142), 3,
      sym_field2,
      sym_group_field,
      aux_sym_extend2_repeat1,
  [4321] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      anon_sym_RBRACE,
    ACTIONS(561), 3,
      sym_repeated,
      sym_required,
      sym_optional,
    STATE(143), 3,
      sym_field2,
      sym_group_field,
      aux_sym_extend2_repeat1,
  [4338] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 1,
      anon_sym_RBRACE,
    ACTIONS(561), 3,
      sym_repeated,
      sym_required,
      sym_optional,
    STATE(144), 3,
      sym_field2,
      sym_group_field,
      aux_sym_extend2_repeat1,
  [4355] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      anon_sym_RBRACE,
    ACTIONS(561), 3,
      sym_repeated,
      sym_required,
      sym_optional,
    STATE(144), 3,
      sym_field2,
      sym_group_field,
      aux_sym_extend2_repeat1,
  [4372] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      anon_sym_RBRACE,
    ACTIONS(571), 3,
      sym_repeated,
      sym_required,
      sym_optional,
    STATE(144), 3,
      sym_field2,
      sym_group_field,
      aux_sym_extend2_repeat1,
  [4389] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(574), 6,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_GT,
      sym_identifier,
  [4401] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 6,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_GT,
      sym_identifier,
  [4413] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      sym_decimal_lit,
    STATE(228), 1,
      sym_int_lit,
    STATE(230), 1,
      sym_range,
    STATE(352), 1,
      sym_ranges,
    ACTIONS(320), 2,
      sym_octal_lit,
      sym_hex_lit,
  [4433] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      anon_sym_LPAREN,
    ACTIONS(580), 1,
      sym_identifier,
    STATE(254), 1,
      sym__option_name_part,
    STATE(275), 1,
      sym_value_option,
    STATE(300), 1,
      sym__option_assignment,
    STATE(354), 1,
      sym_option_name,
  [4455] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 6,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_GT,
      sym_identifier,
  [4467] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      anon_sym_LPAREN,
    ACTIONS(580), 1,
      sym_identifier,
    STATE(254), 1,
      sym__option_name_part,
    STATE(258), 1,
      sym_field_option,
    STATE(291), 1,
      sym__option_assignment,
    STATE(354), 1,
      sym_option_name,
  [4489] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 2,
      anon_sym_DQUOTEproto2_DQUOTE,
      anon_sym_SQUOTEproto2_SQUOTE,
    ACTIONS(586), 2,
      anon_sym_DQUOTEproto3_DQUOTE,
      anon_sym_SQUOTEproto3_SQUOTE,
    ACTIONS(588), 2,
      anon_sym_DQUOTEeditions_DQUOTE,
      anon_sym_SQUOTEeditions_SQUOTE,
  [4505] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      anon_sym_LPAREN,
    ACTIONS(580), 1,
      sym_identifier,
    STATE(237), 1,
      sym_value_option,
    STATE(254), 1,
      sym__option_name_part,
    STATE(300), 1,
      sym__option_assignment,
    STATE(354), 1,
      sym_option_name,
  [4527] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      anon_sym_LPAREN,
    ACTIONS(580), 1,
      sym_identifier,
    STATE(254), 1,
      sym__option_name_part,
    STATE(281), 1,
      sym_field_option,
    STATE(291), 1,
      sym__option_assignment,
    STATE(354), 1,
      sym_option_name,
  [4549] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_SEMI,
    ACTIONS(304), 1,
      anon_sym_option,
    ACTIONS(590), 1,
      anon_sym_RBRACE,
    STATE(158), 3,
      sym_empty_statement,
      sym_option,
      aux_sym_rpc_body_repeat1,
  [4567] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 6,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_GT,
      sym_identifier,
  [4579] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_SEMI,
    ACTIONS(304), 1,
      anon_sym_option,
    ACTIONS(594), 1,
      anon_sym_RBRACE,
    STATE(154), 3,
      sym_empty_statement,
      sym_option,
      aux_sym_rpc_body_repeat1,
  [4597] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(596), 6,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_GT,
      sym_identifier,
  [4609] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_SEMI,
    ACTIONS(601), 1,
      anon_sym_option,
    ACTIONS(604), 1,
      anon_sym_RBRACE,
    STATE(158), 3,
      sym_empty_statement,
      sym_option,
      aux_sym_rpc_body_repeat1,
  [4627] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 6,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_GT,
      sym_identifier,
  [4639] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 6,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_to,
  [4651] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 6,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_GT,
      sym_identifier,
  [4663] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(610), 6,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_GT,
      sym_identifier,
  [4675] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 1,
      anon_sym_DOT,
    ACTIONS(614), 4,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_GT,
      sym_identifier,
  [4688] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_GT,
      sym_identifier,
  [4699] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 1,
      anon_sym_DOT,
    ACTIONS(616), 4,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_GT,
      sym_identifier,
  [4712] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      sym_decimal_lit,
    ACTIONS(618), 1,
      anon_sym_DASH,
    STATE(235), 1,
      sym_int_lit,
    ACTIONS(320), 2,
      sym_octal_lit,
      sym_hex_lit,
  [4729] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_DQUOTE,
    ACTIONS(292), 1,
      anon_sym_SQUOTE,
    STATE(366), 1,
      sym_string,
    ACTIONS(620), 2,
      sym_weak,
      sym_public,
  [4746] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(624), 3,
      anon_sym_RBRACE,
      anon_sym_GT,
      sym_identifier,
  [4759] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      anon_sym_LPAREN,
    ACTIONS(580), 1,
      sym_identifier,
    STATE(254), 1,
      sym__option_name_part,
    STATE(354), 1,
      sym_option_name,
    STATE(373), 1,
      sym__option_assignment,
  [4778] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(628), 3,
      anon_sym_RBRACE,
      anon_sym_GT,
      sym_identifier,
  [4791] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      anon_sym_LPAREN,
    ACTIONS(580), 1,
      sym_identifier,
    STATE(254), 1,
      sym__option_name_part,
    STATE(354), 1,
      sym_option_name,
    STATE(355), 1,
      sym__option_assignment,
  [4810] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(630), 1,
      sym_stream,
    STATE(279), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(349), 1,
      sym_message_or_enum_type,
  [4829] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      sym_decimal_lit,
    STATE(228), 1,
      sym_int_lit,
    STATE(289), 1,
      sym_range,
    ACTIONS(320), 2,
      sym_octal_lit,
      sym_hex_lit,
  [4846] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      sym_hex_lit,
    ACTIONS(632), 1,
      sym_float_lit,
    STATE(149), 1,
      sym_int_lit,
    ACTIONS(318), 2,
      sym_decimal_lit,
      sym_octal_lit,
  [4863] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      sym_decimal_lit,
    ACTIONS(634), 1,
      sym_max,
    STATE(286), 1,
      sym_int_lit,
    ACTIONS(320), 2,
      sym_octal_lit,
      sym_hex_lit,
  [4880] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(636), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(638), 3,
      anon_sym_RBRACE,
      anon_sym_GT,
      sym_identifier,
  [4893] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      anon_sym_LPAREN,
    ACTIONS(580), 1,
      sym_identifier,
    STATE(254), 1,
      sym__option_name_part,
    STATE(354), 1,
      sym_option_name,
    STATE(372), 1,
      sym__option_assignment,
  [4912] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      anon_sym_LPAREN,
    ACTIONS(580), 1,
      sym_identifier,
    STATE(254), 1,
      sym__option_name_part,
    STATE(354), 1,
      sym_option_name,
    STATE(364), 1,
      sym__option_assignment,
  [4931] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      anon_sym_LPAREN,
    ACTIONS(580), 1,
      sym_identifier,
    STATE(254), 1,
      sym__option_name_part,
    STATE(344), 1,
      sym__option_assignment,
    STATE(354), 1,
      sym_option_name,
  [4950] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(640), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(642), 3,
      anon_sym_RBRACE,
      anon_sym_GT,
      sym_identifier,
  [4963] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 1,
      anon_sym_DOT,
    ACTIONS(644), 4,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_GT,
      sym_identifier,
  [4976] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(646), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(648), 3,
      anon_sym_RBRACE,
      anon_sym_GT,
      sym_identifier,
  [4989] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(650), 1,
      sym_stream,
    STATE(279), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(342), 1,
      sym_message_or_enum_type,
  [5008] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(652), 1,
      sym_stream,
    STATE(279), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(329), 1,
      sym_message_or_enum_type,
  [5027] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      sym_hex_lit,
    ACTIONS(632), 1,
      sym_float_lit,
    STATE(149), 1,
      sym_int_lit,
    ACTIONS(284), 2,
      sym_decimal_lit,
      sym_octal_lit,
  [5044] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(654), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(656), 3,
      anon_sym_RBRACE,
      anon_sym_GT,
      sym_identifier,
  [5057] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 1,
      anon_sym_DOT,
    ACTIONS(658), 4,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_GT,
      sym_identifier,
  [5070] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(662), 2,
      anon_sym_option,
      sym_identifier,
  [5082] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOT,
    ACTIONS(664), 1,
      sym_identifier,
    STATE(279), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(326), 1,
      sym_message_or_enum_type,
  [5098] = 4,
    ACTIONS(666), 1,
      anon_sym_SQUOTE,
    ACTIONS(670), 1,
      sym_comment,
    STATE(213), 1,
      aux_sym_string_repeat2,
    ACTIONS(668), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
  [5112] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      sym_decimal_lit,
    STATE(231), 1,
      sym_int_lit,
    ACTIONS(320), 2,
      sym_octal_lit,
      sym_hex_lit,
  [5126] = 4,
    ACTIONS(666), 1,
      anon_sym_DQUOTE,
    ACTIONS(670), 1,
      sym_comment,
    STATE(201), 1,
      aux_sym_string_repeat1,
    ACTIONS(672), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [5140] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 4,
      anon_sym_SEMI,
      anon_sym_option,
      anon_sym_RBRACE,
      anon_sym_rpc,
  [5150] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(115), 2,
      anon_sym_option,
      sym_identifier,
  [5162] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 4,
      anon_sym_SEMI,
      anon_sym_option,
      anon_sym_RBRACE,
      anon_sym_rpc,
  [5172] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOT,
    ACTIONS(664), 1,
      sym_identifier,
    STATE(279), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(389), 1,
      sym_message_or_enum_type,
  [5188] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOT,
    ACTIONS(664), 1,
      sym_identifier,
    STATE(279), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(328), 1,
      sym_message_or_enum_type,
  [5204] = 4,
    ACTIONS(670), 1,
      sym_comment,
    ACTIONS(678), 1,
      anon_sym_SQUOTE,
    STATE(190), 1,
      aux_sym_string_repeat2,
    ACTIONS(680), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
  [5218] = 4,
    ACTIONS(670), 1,
      sym_comment,
    ACTIONS(678), 1,
      anon_sym_DQUOTE,
    STATE(192), 1,
      aux_sym_string_repeat1,
    ACTIONS(682), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [5232] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      sym_decimal_lit,
    STATE(257), 1,
      sym_int_lit,
    ACTIONS(320), 2,
      sym_octal_lit,
      sym_hex_lit,
  [5246] = 4,
    ACTIONS(670), 1,
      sym_comment,
    ACTIONS(684), 1,
      anon_sym_DQUOTE,
    STATE(201), 1,
      aux_sym_string_repeat1,
    ACTIONS(686), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [5260] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      sym_decimal_lit,
    STATE(251), 1,
      sym_int_lit,
    ACTIONS(320), 2,
      sym_octal_lit,
      sym_hex_lit,
  [5274] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      sym_decimal_lit,
    STATE(249), 1,
      sym_int_lit,
    ACTIONS(320), 2,
      sym_octal_lit,
      sym_hex_lit,
  [5288] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      sym_decimal_lit,
    STATE(299), 1,
      sym_int_lit,
    ACTIONS(320), 2,
      sym_octal_lit,
      sym_hex_lit,
  [5302] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      sym_decimal_lit,
    STATE(241), 1,
      sym_int_lit,
    ACTIONS(320), 2,
      sym_octal_lit,
      sym_hex_lit,
  [5316] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOT,
    ACTIONS(664), 1,
      sym_identifier,
    STATE(279), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(341), 1,
      sym_message_or_enum_type,
  [5332] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(689), 4,
      anon_sym_SEMI,
      anon_sym_option,
      anon_sym_RBRACE,
      anon_sym_rpc,
  [5342] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOT,
    ACTIONS(664), 1,
      sym_identifier,
    STATE(279), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(348), 1,
      sym_message_or_enum_type,
  [5358] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      sym_decimal_lit,
    STATE(239), 1,
      sym_int_lit,
    ACTIONS(320), 2,
      sym_octal_lit,
      sym_hex_lit,
  [5372] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      sym_decimal_lit,
    STATE(243), 1,
      sym_int_lit,
    ACTIONS(320), 2,
      sym_octal_lit,
      sym_hex_lit,
  [5386] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      sym_decimal_lit,
    STATE(238), 1,
      sym_int_lit,
    ACTIONS(320), 2,
      sym_octal_lit,
      sym_hex_lit,
  [5400] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      sym_decimal_lit,
    STATE(252), 1,
      sym_int_lit,
    ACTIONS(320), 2,
      sym_octal_lit,
      sym_hex_lit,
  [5414] = 4,
    ACTIONS(670), 1,
      sym_comment,
    ACTIONS(691), 1,
      anon_sym_SQUOTE,
    STATE(213), 1,
      aux_sym_string_repeat2,
    ACTIONS(693), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
  [5428] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(696), 4,
      anon_sym_SEMI,
      anon_sym_option,
      anon_sym_RBRACE,
      anon_sym_rpc,
  [5438] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 4,
      anon_sym_SEMI,
      anon_sym_option,
      anon_sym_RBRACE,
      anon_sym_rpc,
  [5448] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      sym_decimal_lit,
    STATE(267), 1,
      sym_int_lit,
    ACTIONS(320), 2,
      sym_octal_lit,
      sym_hex_lit,
  [5462] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 1,
      sym_identifier,
    STATE(217), 1,
      aux_sym_message_value_repeat2,
    ACTIONS(700), 2,
      anon_sym_RBRACE,
      anon_sym_GT,
  [5476] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOT,
    ACTIONS(664), 1,
      sym_identifier,
    STATE(279), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(378), 1,
      sym_message_or_enum_type,
  [5492] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(705), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(707), 2,
      anon_sym_option,
      sym_identifier,
  [5504] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(159), 2,
      anon_sym_option,
      sym_identifier,
  [5516] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOT,
    ACTIONS(664), 1,
      sym_identifier,
    STATE(279), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(379), 1,
      sym_message_or_enum_type,
  [5532] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(709), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(711), 2,
      anon_sym_option,
      sym_identifier,
  [5544] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(713), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(715), 2,
      anon_sym_option,
      sym_identifier,
  [5556] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(717), 4,
      anon_sym_SEMI,
      anon_sym_option,
      anon_sym_RBRACE,
      anon_sym_rpc,
  [5566] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 1,
      anon_sym_EQ,
    ACTIONS(721), 1,
      anon_sym_DOT,
    STATE(225), 1,
      aux_sym_option_name_repeat1,
  [5579] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(724), 1,
      anon_sym_COMMA,
    ACTIONS(726), 1,
      anon_sym_RBRACK,
    STATE(265), 1,
      aux_sym_value_options_repeat1,
  [5592] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      anon_sym_SEMI,
    ACTIONS(730), 1,
      anon_sym_COMMA,
    STATE(253), 1,
      aux_sym_field_names_repeat1,
  [5605] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 1,
      anon_sym_to,
    ACTIONS(732), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [5616] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 1,
      anon_sym_SEMI,
    ACTIONS(738), 1,
      anon_sym_COMMA,
    STATE(229), 1,
      aux_sym_field_names_repeat1,
  [5629] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(741), 1,
      anon_sym_SEMI,
    ACTIONS(743), 1,
      anon_sym_COMMA,
    STATE(236), 1,
      aux_sym_ranges_repeat1,
  [5642] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(745), 1,
      anon_sym_SEMI,
    ACTIONS(747), 1,
      anon_sym_LBRACK,
    STATE(367), 1,
      sym_field_options,
  [5655] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(749), 1,
      anon_sym_COMMA,
    ACTIONS(751), 1,
      anon_sym_RBRACK,
    STATE(247), 1,
      aux_sym_message_value_repeat1,
  [5668] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(749), 1,
      anon_sym_COMMA,
    ACTIONS(753), 1,
      anon_sym_RBRACK,
    STATE(248), 1,
      aux_sym_message_value_repeat1,
  [5681] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(755), 3,
      anon_sym_RBRACE,
      anon_sym_GT,
      sym_identifier,
  [5690] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(757), 1,
      anon_sym_SEMI,
    ACTIONS(759), 1,
      anon_sym_LBRACK,
    STATE(305), 1,
      sym_value_options,
  [5703] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(743), 1,
      anon_sym_COMMA,
    ACTIONS(761), 1,
      anon_sym_SEMI,
    STATE(266), 1,
      aux_sym_ranges_repeat1,
  [5716] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(724), 1,
      anon_sym_COMMA,
    ACTIONS(763), 1,
      anon_sym_RBRACK,
    STATE(226), 1,
      aux_sym_value_options_repeat1,
  [5729] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 1,
      anon_sym_LBRACK,
    ACTIONS(765), 1,
      anon_sym_SEMI,
    STATE(371), 1,
      sym_field_options,
  [5742] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 1,
      anon_sym_LBRACK,
    ACTIONS(767), 1,
      anon_sym_SEMI,
    STATE(370), 1,
      sym_field_options,
  [5755] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(769), 1,
      anon_sym_SEMI,
    ACTIONS(771), 1,
      anon_sym_LBRACE,
    STATE(207), 1,
      sym_rpc_body,
  [5768] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 1,
      anon_sym_LBRACK,
    ACTIONS(773), 1,
      anon_sym_SEMI,
    STATE(356), 1,
      sym_field_options,
  [5781] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_DQUOTE,
    ACTIONS(292), 1,
      anon_sym_SQUOTE,
    STATE(338), 1,
      sym_string,
  [5794] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 1,
      anon_sym_LBRACK,
    ACTIONS(775), 1,
      anon_sym_SEMI,
    STATE(306), 1,
      sym_field_options,
  [5807] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(777), 1,
      anon_sym_GT,
    ACTIONS(779), 1,
      sym_identifier,
    STATE(217), 1,
      aux_sym_message_value_repeat2,
  [5820] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_DQUOTE,
    ACTIONS(292), 1,
      anon_sym_SQUOTE,
    STATE(304), 1,
      sym_string,
  [5833] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 3,
      anon_sym_RBRACE,
      anon_sym_GT,
      sym_identifier,
  [5842] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(783), 1,
      anon_sym_COMMA,
    ACTIONS(786), 1,
      anon_sym_RBRACK,
    STATE(247), 1,
      aux_sym_message_value_repeat1,
  [5855] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(749), 1,
      anon_sym_COMMA,
    ACTIONS(788), 1,
      anon_sym_RBRACK,
    STATE(247), 1,
      aux_sym_message_value_repeat1,
  [5868] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 1,
      anon_sym_LBRACK,
    ACTIONS(790), 1,
      anon_sym_SEMI,
    STATE(363), 1,
      sym_field_options,
  [5881] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(779), 1,
      sym_identifier,
    ACTIONS(792), 1,
      anon_sym_RBRACE,
    STATE(271), 1,
      aux_sym_message_value_repeat2,
  [5894] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 1,
      anon_sym_LBRACK,
    ACTIONS(794), 1,
      anon_sym_SEMI,
    STATE(362), 1,
      sym_field_options,
  [5907] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 1,
      anon_sym_LBRACK,
    ACTIONS(796), 1,
      anon_sym_SEMI,
    STATE(311), 1,
      sym_field_options,
  [5920] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 1,
      anon_sym_COMMA,
    ACTIONS(798), 1,
      anon_sym_SEMI,
    STATE(229), 1,
      aux_sym_field_names_repeat1,
  [5933] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(800), 1,
      anon_sym_EQ,
    ACTIONS(802), 1,
      anon_sym_DOT,
    STATE(273), 1,
      aux_sym_option_name_repeat1,
  [5946] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(771), 1,
      anon_sym_LBRACE,
    ACTIONS(804), 1,
      anon_sym_SEMI,
    STATE(195), 1,
      sym_rpc_body,
  [5959] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(771), 1,
      anon_sym_LBRACE,
    ACTIONS(806), 1,
      anon_sym_SEMI,
    STATE(215), 1,
      sym_rpc_body,
  [5972] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 1,
      anon_sym_LBRACK,
    ACTIONS(808), 1,
      anon_sym_SEMI,
    STATE(319), 1,
      sym_field_options,
  [5985] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 1,
      anon_sym_COMMA,
    ACTIONS(812), 1,
      anon_sym_RBRACK,
    STATE(269), 1,
      aux_sym_field_options_repeat1,
  [5998] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(749), 1,
      anon_sym_COMMA,
    ACTIONS(814), 1,
      anon_sym_RBRACK,
    STATE(232), 1,
      aux_sym_message_value_repeat1,
  [6011] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(816), 3,
      anon_sym_RBRACE,
      anon_sym_GT,
      sym_identifier,
  [6020] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 3,
      anon_sym_RBRACE,
      anon_sym_GT,
      sym_identifier,
  [6029] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(820), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6038] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(771), 1,
      anon_sym_LBRACE,
    ACTIONS(822), 1,
      anon_sym_SEMI,
    STATE(214), 1,
      sym_rpc_body,
  [6051] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(779), 1,
      sym_identifier,
    ACTIONS(792), 1,
      anon_sym_GT,
    STATE(244), 1,
      aux_sym_message_value_repeat2,
  [6064] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(824), 1,
      anon_sym_COMMA,
    ACTIONS(827), 1,
      anon_sym_RBRACK,
    STATE(265), 1,
      aux_sym_value_options_repeat1,
  [6077] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(829), 1,
      anon_sym_SEMI,
    ACTIONS(831), 1,
      anon_sym_COMMA,
    STATE(266), 1,
      aux_sym_ranges_repeat1,
  [6090] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(759), 1,
      anon_sym_LBRACK,
    ACTIONS(834), 1,
      anon_sym_SEMI,
    STATE(390), 1,
      sym_value_options,
  [6103] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(836), 3,
      anon_sym_RBRACE,
      anon_sym_GT,
      sym_identifier,
  [6112] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 1,
      anon_sym_COMMA,
    ACTIONS(838), 1,
      anon_sym_RBRACK,
    STATE(274), 1,
      aux_sym_field_options_repeat1,
  [6125] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(840), 3,
      anon_sym_RBRACE,
      anon_sym_GT,
      sym_identifier,
  [6134] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(779), 1,
      sym_identifier,
    ACTIONS(842), 1,
      anon_sym_RBRACE,
    STATE(217), 1,
      aux_sym_message_value_repeat2,
  [6147] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      anon_sym_LPAREN,
    ACTIONS(580), 1,
      sym_identifier,
    STATE(290), 1,
      sym__option_name_part,
  [6160] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(802), 1,
      anon_sym_DOT,
    ACTIONS(844), 1,
      anon_sym_EQ,
    STATE(225), 1,
      aux_sym_option_name_repeat1,
  [6173] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(846), 1,
      anon_sym_COMMA,
    ACTIONS(849), 1,
      anon_sym_RBRACK,
    STATE(274), 1,
      aux_sym_field_options_repeat1,
  [6186] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(827), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6194] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(851), 1,
      anon_sym_LBRACE,
    STATE(27), 1,
      sym_message_body3,
  [6204] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(853), 1,
      anon_sym_LBRACE,
    STATE(116), 1,
      sym_message_body3,
  [6214] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(855), 1,
      anon_sym_LBRACE,
    STATE(76), 1,
      sym_message_body2,
  [6224] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(857), 1,
      sym_identifier,
    STATE(282), 1,
      aux_sym_message_or_enum_type_repeat1,
  [6234] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(859), 1,
      sym_identifier,
    STATE(282), 1,
      aux_sym_message_or_enum_type_repeat1,
  [6244] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(849), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6252] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(861), 1,
      sym_identifier,
    STATE(282), 1,
      aux_sym_message_or_enum_type_repeat1,
  [6262] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(864), 1,
      sym_identifier,
    STATE(280), 1,
      aux_sym_message_or_enum_type_repeat1,
  [6272] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(866), 2,
      anon_sym_EQ,
      anon_sym_DOT,
  [6280] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(868), 1,
      anon_sym_LBRACE,
    STATE(77), 1,
      sym_enum_body,
  [6290] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(870), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [6298] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(872), 1,
      anon_sym_LBRACE,
    STATE(119), 1,
      sym_message_body2,
  [6308] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(874), 1,
      anon_sym_LBRACE,
    STATE(79), 1,
      sym_oneof_body2,
  [6318] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(829), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [6326] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(876), 2,
      anon_sym_EQ,
      anon_sym_DOT,
  [6334] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(878), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6342] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(880), 1,
      anon_sym_LBRACE,
    STATE(104), 1,
      sym_service_body,
  [6352] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(882), 2,
      anon_sym_GT,
      sym_identifier,
  [6360] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(884), 1,
      anon_sym_LBRACE,
    STATE(122), 1,
      sym_enum_body,
  [6370] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(886), 2,
      anon_sym_EQ,
      anon_sym_DOT,
  [6378] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(888), 1,
      sym_identifier,
    STATE(336), 1,
      sym_full_ident,
  [6388] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(786), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6396] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(890), 1,
      anon_sym_LBRACE,
    STATE(19), 1,
      sym_enum_body,
  [6406] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(855), 1,
      anon_sym_LBRACE,
    STATE(86), 1,
      sym_message_body2,
  [6416] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(892), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6424] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(888), 1,
      sym_identifier,
    STATE(358), 1,
      sym_full_ident,
  [6434] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(894), 1,
      anon_sym_LBRACE,
    STATE(10), 1,
      sym_oneof_body3,
  [6444] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(896), 1,
      anon_sym_DQUOTE,
    ACTIONS(898), 1,
      anon_sym_SQUOTE,
  [6454] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [6462] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(900), 1,
      anon_sym_SEMI,
  [6469] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(902), 1,
      anon_sym_SEMI,
  [6476] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(904), 1,
      sym_identifier,
  [6483] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(906), 1,
      sym_identifier,
  [6490] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(908), 1,
      anon_sym_LT,
  [6497] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(910), 1,
      anon_sym_COMMA,
  [6504] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(912), 1,
      anon_sym_SEMI,
  [6511] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(914), 1,
      sym_identifier,
  [6518] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(916), 1,
      anon_sym_SEMI,
  [6525] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(918), 1,
      anon_sym_LPAREN,
  [6532] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(920), 1,
      anon_sym_EQ,
  [6539] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(922), 1,
      anon_sym_EQ,
  [6546] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(924), 1,
      sym_identifier,
  [6553] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(926), 1,
      sym_identifier,
  [6560] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(928), 1,
      anon_sym_SEMI,
  [6567] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(930), 1,
      anon_sym_LT,
  [6574] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 1,
      anon_sym_DOT,
  [6581] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(932), 1,
      sym_identifier,
  [6588] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(934), 1,
      sym_identifier,
  [6595] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(936), 1,
      anon_sym_EQ,
  [6602] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(938), 1,
      anon_sym_EQ,
  [6609] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(940), 1,
      anon_sym_RPAREN,
  [6616] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(942), 1,
      anon_sym_EQ,
  [6623] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(944), 1,
      anon_sym_RPAREN,
  [6630] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(946), 1,
      anon_sym_RPAREN,
  [6637] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(948), 1,
      anon_sym_SEMI,
  [6644] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(950), 1,
      anon_sym_COMMA,
  [6651] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(952), 1,
      sym_identifier,
  [6658] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(954), 1,
      anon_sym_SEMI,
  [6665] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(956), 1,
      anon_sym_COMMA,
  [6672] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(958), 1,
      anon_sym_EQ,
  [6679] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(960), 1,
      anon_sym_RPAREN,
  [6686] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(962), 1,
      sym_identifier,
  [6693] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(964), 1,
      anon_sym_SEMI,
  [6700] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(966), 1,
      anon_sym_SQUOTE,
  [6707] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(966), 1,
      anon_sym_DQUOTE,
  [6714] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(968), 1,
      anon_sym_LBRACE,
  [6721] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(970), 1,
      anon_sym_RPAREN,
  [6728] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(972), 1,
      anon_sym_EQ,
  [6735] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(974), 1,
      anon_sym_SEMI,
  [6742] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(976), 1,
      anon_sym_SEMI,
  [6749] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(978), 1,
      anon_sym_EQ,
  [6756] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(980), 1,
      sym_identifier,
  [6763] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(982), 1,
      anon_sym_LBRACE,
  [6770] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(984), 1,
      anon_sym_RPAREN,
  [6777] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(986), 1,
      anon_sym_LPAREN,
  [6784] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(988), 1,
      anon_sym_SEMI,
  [6791] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(990), 1,
      anon_sym_SEMI,
  [6798] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(992), 1,
      sym_identifier,
  [6805] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(994), 1,
      anon_sym_EQ,
  [6812] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(996), 1,
      anon_sym_SEMI,
  [6819] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(998), 1,
      anon_sym_SEMI,
  [6826] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1000), 1,
      anon_sym_GT,
  [6833] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1002), 1,
      anon_sym_SEMI,
  [6840] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1004), 1,
      anon_sym_SEMI,
  [6847] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1006), 1,
      anon_sym_LPAREN,
  [6854] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1008), 1,
      anon_sym_returns,
  [6861] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1010), 1,
      anon_sym_SEMI,
  [6868] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1012), 1,
      anon_sym_SEMI,
  [6875] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1014), 1,
      anon_sym_SEMI,
  [6882] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1016), 1,
      anon_sym_SEMI,
  [6889] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1018), 1,
      anon_sym_SEMI,
  [6896] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1020), 1,
      anon_sym_SEMI,
  [6903] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1022), 1,
      anon_sym_GT,
  [6910] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1024), 1,
      anon_sym_returns,
  [6917] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1026), 1,
      anon_sym_SEMI,
  [6924] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1028), 1,
      anon_sym_SEMI,
  [6931] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1030), 1,
      anon_sym_SEMI,
  [6938] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1032), 1,
      anon_sym_SEMI,
  [6945] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1034), 1,
      sym_edition_version,
  [6952] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1036), 1,
      sym_identifier,
  [6959] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1038), 1,
      sym_identifier,
  [6966] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1040), 1,
      sym_identifier,
  [6973] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1042), 1,
      anon_sym_LBRACE,
  [6980] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1044), 1,
      anon_sym_LBRACE,
  [6987] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1046), 1,
      sym_edition_version,
  [6994] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1048), 1,
      anon_sym_SEMI,
  [7001] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1050), 1,
      anon_sym_SEMI,
  [7008] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1052), 1,
      anon_sym_SEMI,
  [7015] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1054), 1,
      sym_identifier,
  [7022] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1056), 1,
      sym_identifier,
  [7029] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1058), 1,
      sym_identifier,
  [7036] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1060), 1,
      sym_identifier,
  [7043] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1062), 1,
      sym_identifier,
  [7050] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1064), 1,
      anon_sym_RPAREN,
  [7057] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1066), 1,
      anon_sym_SEMI,
  [7064] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1068), 1,
      anon_sym_EQ,
  [7071] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1070), 1,
      anon_sym_EQ,
  [7078] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1072), 1,
      anon_sym_EQ,
  [7085] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1074), 1,
      anon_sym_EQ,
  [7092] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1076), 1,
      sym_identifier,
  [7099] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1078), 1,
      sym_identifier,
  [7106] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1080), 1,
      sym_identifier,
  [7113] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1082), 1,
      sym_identifier,
  [7120] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1084), 1,
      ts_builtin_sym_end,
  [7127] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1086), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 79,
  [SMALL_STATE(4)] = 158,
  [SMALL_STATE(5)] = 237,
  [SMALL_STATE(6)] = 316,
  [SMALL_STATE(7)] = 395,
  [SMALL_STATE(8)] = 450,
  [SMALL_STATE(9)] = 505,
  [SMALL_STATE(10)] = 560,
  [SMALL_STATE(11)] = 596,
  [SMALL_STATE(12)] = 632,
  [SMALL_STATE(13)] = 668,
  [SMALL_STATE(14)] = 704,
  [SMALL_STATE(15)] = 740,
  [SMALL_STATE(16)] = 776,
  [SMALL_STATE(17)] = 812,
  [SMALL_STATE(18)] = 848,
  [SMALL_STATE(19)] = 884,
  [SMALL_STATE(20)] = 920,
  [SMALL_STATE(21)] = 956,
  [SMALL_STATE(22)] = 992,
  [SMALL_STATE(23)] = 1028,
  [SMALL_STATE(24)] = 1064,
  [SMALL_STATE(25)] = 1100,
  [SMALL_STATE(26)] = 1136,
  [SMALL_STATE(27)] = 1172,
  [SMALL_STATE(28)] = 1208,
  [SMALL_STATE(29)] = 1244,
  [SMALL_STATE(30)] = 1280,
  [SMALL_STATE(31)] = 1327,
  [SMALL_STATE(32)] = 1374,
  [SMALL_STATE(33)] = 1421,
  [SMALL_STATE(34)] = 1468,
  [SMALL_STATE(35)] = 1515,
  [SMALL_STATE(36)] = 1565,
  [SMALL_STATE(37)] = 1615,
  [SMALL_STATE(38)] = 1665,
  [SMALL_STATE(39)] = 1715,
  [SMALL_STATE(40)] = 1765,
  [SMALL_STATE(41)] = 1795,
  [SMALL_STATE(42)] = 1825,
  [SMALL_STATE(43)] = 1855,
  [SMALL_STATE(44)] = 1885,
  [SMALL_STATE(45)] = 1927,
  [SMALL_STATE(46)] = 1957,
  [SMALL_STATE(47)] = 1987,
  [SMALL_STATE(48)] = 2026,
  [SMALL_STATE(49)] = 2079,
  [SMALL_STATE(50)] = 2127,
  [SMALL_STATE(51)] = 2163,
  [SMALL_STATE(52)] = 2191,
  [SMALL_STATE(53)] = 2227,
  [SMALL_STATE(54)] = 2255,
  [SMALL_STATE(55)] = 2283,
  [SMALL_STATE(56)] = 2311,
  [SMALL_STATE(57)] = 2347,
  [SMALL_STATE(58)] = 2383,
  [SMALL_STATE(59)] = 2433,
  [SMALL_STATE(60)] = 2469,
  [SMALL_STATE(61)] = 2505,
  [SMALL_STATE(62)] = 2552,
  [SMALL_STATE(63)] = 2599,
  [SMALL_STATE(64)] = 2646,
  [SMALL_STATE(65)] = 2693,
  [SMALL_STATE(66)] = 2735,
  [SMALL_STATE(67)] = 2777,
  [SMALL_STATE(68)] = 2819,
  [SMALL_STATE(69)] = 2861,
  [SMALL_STATE(70)] = 2903,
  [SMALL_STATE(71)] = 2945,
  [SMALL_STATE(72)] = 2983,
  [SMALL_STATE(73)] = 3021,
  [SMALL_STATE(74)] = 3059,
  [SMALL_STATE(75)] = 3080,
  [SMALL_STATE(76)] = 3101,
  [SMALL_STATE(77)] = 3121,
  [SMALL_STATE(78)] = 3141,
  [SMALL_STATE(79)] = 3161,
  [SMALL_STATE(80)] = 3181,
  [SMALL_STATE(81)] = 3201,
  [SMALL_STATE(82)] = 3221,
  [SMALL_STATE(83)] = 3241,
  [SMALL_STATE(84)] = 3261,
  [SMALL_STATE(85)] = 3281,
  [SMALL_STATE(86)] = 3301,
  [SMALL_STATE(87)] = 3321,
  [SMALL_STATE(88)] = 3341,
  [SMALL_STATE(89)] = 3361,
  [SMALL_STATE(90)] = 3381,
  [SMALL_STATE(91)] = 3401,
  [SMALL_STATE(92)] = 3421,
  [SMALL_STATE(93)] = 3441,
  [SMALL_STATE(94)] = 3461,
  [SMALL_STATE(95)] = 3481,
  [SMALL_STATE(96)] = 3501,
  [SMALL_STATE(97)] = 3518,
  [SMALL_STATE(98)] = 3535,
  [SMALL_STATE(99)] = 3559,
  [SMALL_STATE(100)] = 3589,
  [SMALL_STATE(101)] = 3613,
  [SMALL_STATE(102)] = 3629,
  [SMALL_STATE(103)] = 3659,
  [SMALL_STATE(104)] = 3683,
  [SMALL_STATE(105)] = 3698,
  [SMALL_STATE(106)] = 3713,
  [SMALL_STATE(107)] = 3732,
  [SMALL_STATE(108)] = 3747,
  [SMALL_STATE(109)] = 3762,
  [SMALL_STATE(110)] = 3777,
  [SMALL_STATE(111)] = 3792,
  [SMALL_STATE(112)] = 3811,
  [SMALL_STATE(113)] = 3826,
  [SMALL_STATE(114)] = 3841,
  [SMALL_STATE(115)] = 3856,
  [SMALL_STATE(116)] = 3871,
  [SMALL_STATE(117)] = 3886,
  [SMALL_STATE(118)] = 3901,
  [SMALL_STATE(119)] = 3916,
  [SMALL_STATE(120)] = 3931,
  [SMALL_STATE(121)] = 3946,
  [SMALL_STATE(122)] = 3961,
  [SMALL_STATE(123)] = 3976,
  [SMALL_STATE(124)] = 3991,
  [SMALL_STATE(125)] = 4006,
  [SMALL_STATE(126)] = 4021,
  [SMALL_STATE(127)] = 4036,
  [SMALL_STATE(128)] = 4055,
  [SMALL_STATE(129)] = 4070,
  [SMALL_STATE(130)] = 4092,
  [SMALL_STATE(131)] = 4114,
  [SMALL_STATE(132)] = 4136,
  [SMALL_STATE(133)] = 4158,
  [SMALL_STATE(134)] = 4180,
  [SMALL_STATE(135)] = 4202,
  [SMALL_STATE(136)] = 4224,
  [SMALL_STATE(137)] = 4246,
  [SMALL_STATE(138)] = 4268,
  [SMALL_STATE(139)] = 4282,
  [SMALL_STATE(140)] = 4304,
  [SMALL_STATE(141)] = 4321,
  [SMALL_STATE(142)] = 4338,
  [SMALL_STATE(143)] = 4355,
  [SMALL_STATE(144)] = 4372,
  [SMALL_STATE(145)] = 4389,
  [SMALL_STATE(146)] = 4401,
  [SMALL_STATE(147)] = 4413,
  [SMALL_STATE(148)] = 4433,
  [SMALL_STATE(149)] = 4455,
  [SMALL_STATE(150)] = 4467,
  [SMALL_STATE(151)] = 4489,
  [SMALL_STATE(152)] = 4505,
  [SMALL_STATE(153)] = 4527,
  [SMALL_STATE(154)] = 4549,
  [SMALL_STATE(155)] = 4567,
  [SMALL_STATE(156)] = 4579,
  [SMALL_STATE(157)] = 4597,
  [SMALL_STATE(158)] = 4609,
  [SMALL_STATE(159)] = 4627,
  [SMALL_STATE(160)] = 4639,
  [SMALL_STATE(161)] = 4651,
  [SMALL_STATE(162)] = 4663,
  [SMALL_STATE(163)] = 4675,
  [SMALL_STATE(164)] = 4688,
  [SMALL_STATE(165)] = 4699,
  [SMALL_STATE(166)] = 4712,
  [SMALL_STATE(167)] = 4729,
  [SMALL_STATE(168)] = 4746,
  [SMALL_STATE(169)] = 4759,
  [SMALL_STATE(170)] = 4778,
  [SMALL_STATE(171)] = 4791,
  [SMALL_STATE(172)] = 4810,
  [SMALL_STATE(173)] = 4829,
  [SMALL_STATE(174)] = 4846,
  [SMALL_STATE(175)] = 4863,
  [SMALL_STATE(176)] = 4880,
  [SMALL_STATE(177)] = 4893,
  [SMALL_STATE(178)] = 4912,
  [SMALL_STATE(179)] = 4931,
  [SMALL_STATE(180)] = 4950,
  [SMALL_STATE(181)] = 4963,
  [SMALL_STATE(182)] = 4976,
  [SMALL_STATE(183)] = 4989,
  [SMALL_STATE(184)] = 5008,
  [SMALL_STATE(185)] = 5027,
  [SMALL_STATE(186)] = 5044,
  [SMALL_STATE(187)] = 5057,
  [SMALL_STATE(188)] = 5070,
  [SMALL_STATE(189)] = 5082,
  [SMALL_STATE(190)] = 5098,
  [SMALL_STATE(191)] = 5112,
  [SMALL_STATE(192)] = 5126,
  [SMALL_STATE(193)] = 5140,
  [SMALL_STATE(194)] = 5150,
  [SMALL_STATE(195)] = 5162,
  [SMALL_STATE(196)] = 5172,
  [SMALL_STATE(197)] = 5188,
  [SMALL_STATE(198)] = 5204,
  [SMALL_STATE(199)] = 5218,
  [SMALL_STATE(200)] = 5232,
  [SMALL_STATE(201)] = 5246,
  [SMALL_STATE(202)] = 5260,
  [SMALL_STATE(203)] = 5274,
  [SMALL_STATE(204)] = 5288,
  [SMALL_STATE(205)] = 5302,
  [SMALL_STATE(206)] = 5316,
  [SMALL_STATE(207)] = 5332,
  [SMALL_STATE(208)] = 5342,
  [SMALL_STATE(209)] = 5358,
  [SMALL_STATE(210)] = 5372,
  [SMALL_STATE(211)] = 5386,
  [SMALL_STATE(212)] = 5400,
  [SMALL_STATE(213)] = 5414,
  [SMALL_STATE(214)] = 5428,
  [SMALL_STATE(215)] = 5438,
  [SMALL_STATE(216)] = 5448,
  [SMALL_STATE(217)] = 5462,
  [SMALL_STATE(218)] = 5476,
  [SMALL_STATE(219)] = 5492,
  [SMALL_STATE(220)] = 5504,
  [SMALL_STATE(221)] = 5516,
  [SMALL_STATE(222)] = 5532,
  [SMALL_STATE(223)] = 5544,
  [SMALL_STATE(224)] = 5556,
  [SMALL_STATE(225)] = 5566,
  [SMALL_STATE(226)] = 5579,
  [SMALL_STATE(227)] = 5592,
  [SMALL_STATE(228)] = 5605,
  [SMALL_STATE(229)] = 5616,
  [SMALL_STATE(230)] = 5629,
  [SMALL_STATE(231)] = 5642,
  [SMALL_STATE(232)] = 5655,
  [SMALL_STATE(233)] = 5668,
  [SMALL_STATE(234)] = 5681,
  [SMALL_STATE(235)] = 5690,
  [SMALL_STATE(236)] = 5703,
  [SMALL_STATE(237)] = 5716,
  [SMALL_STATE(238)] = 5729,
  [SMALL_STATE(239)] = 5742,
  [SMALL_STATE(240)] = 5755,
  [SMALL_STATE(241)] = 5768,
  [SMALL_STATE(242)] = 5781,
  [SMALL_STATE(243)] = 5794,
  [SMALL_STATE(244)] = 5807,
  [SMALL_STATE(245)] = 5820,
  [SMALL_STATE(246)] = 5833,
  [SMALL_STATE(247)] = 5842,
  [SMALL_STATE(248)] = 5855,
  [SMALL_STATE(249)] = 5868,
  [SMALL_STATE(250)] = 5881,
  [SMALL_STATE(251)] = 5894,
  [SMALL_STATE(252)] = 5907,
  [SMALL_STATE(253)] = 5920,
  [SMALL_STATE(254)] = 5933,
  [SMALL_STATE(255)] = 5946,
  [SMALL_STATE(256)] = 5959,
  [SMALL_STATE(257)] = 5972,
  [SMALL_STATE(258)] = 5985,
  [SMALL_STATE(259)] = 5998,
  [SMALL_STATE(260)] = 6011,
  [SMALL_STATE(261)] = 6020,
  [SMALL_STATE(262)] = 6029,
  [SMALL_STATE(263)] = 6038,
  [SMALL_STATE(264)] = 6051,
  [SMALL_STATE(265)] = 6064,
  [SMALL_STATE(266)] = 6077,
  [SMALL_STATE(267)] = 6090,
  [SMALL_STATE(268)] = 6103,
  [SMALL_STATE(269)] = 6112,
  [SMALL_STATE(270)] = 6125,
  [SMALL_STATE(271)] = 6134,
  [SMALL_STATE(272)] = 6147,
  [SMALL_STATE(273)] = 6160,
  [SMALL_STATE(274)] = 6173,
  [SMALL_STATE(275)] = 6186,
  [SMALL_STATE(276)] = 6194,
  [SMALL_STATE(277)] = 6204,
  [SMALL_STATE(278)] = 6214,
  [SMALL_STATE(279)] = 6224,
  [SMALL_STATE(280)] = 6234,
  [SMALL_STATE(281)] = 6244,
  [SMALL_STATE(282)] = 6252,
  [SMALL_STATE(283)] = 6262,
  [SMALL_STATE(284)] = 6272,
  [SMALL_STATE(285)] = 6280,
  [SMALL_STATE(286)] = 6290,
  [SMALL_STATE(287)] = 6298,
  [SMALL_STATE(288)] = 6308,
  [SMALL_STATE(289)] = 6318,
  [SMALL_STATE(290)] = 6326,
  [SMALL_STATE(291)] = 6334,
  [SMALL_STATE(292)] = 6342,
  [SMALL_STATE(293)] = 6352,
  [SMALL_STATE(294)] = 6360,
  [SMALL_STATE(295)] = 6370,
  [SMALL_STATE(296)] = 6378,
  [SMALL_STATE(297)] = 6388,
  [SMALL_STATE(298)] = 6396,
  [SMALL_STATE(299)] = 6406,
  [SMALL_STATE(300)] = 6416,
  [SMALL_STATE(301)] = 6424,
  [SMALL_STATE(302)] = 6434,
  [SMALL_STATE(303)] = 6444,
  [SMALL_STATE(304)] = 6454,
  [SMALL_STATE(305)] = 6462,
  [SMALL_STATE(306)] = 6469,
  [SMALL_STATE(307)] = 6476,
  [SMALL_STATE(308)] = 6483,
  [SMALL_STATE(309)] = 6490,
  [SMALL_STATE(310)] = 6497,
  [SMALL_STATE(311)] = 6504,
  [SMALL_STATE(312)] = 6511,
  [SMALL_STATE(313)] = 6518,
  [SMALL_STATE(314)] = 6525,
  [SMALL_STATE(315)] = 6532,
  [SMALL_STATE(316)] = 6539,
  [SMALL_STATE(317)] = 6546,
  [SMALL_STATE(318)] = 6553,
  [SMALL_STATE(319)] = 6560,
  [SMALL_STATE(320)] = 6567,
  [SMALL_STATE(321)] = 6574,
  [SMALL_STATE(322)] = 6581,
  [SMALL_STATE(323)] = 6588,
  [SMALL_STATE(324)] = 6595,
  [SMALL_STATE(325)] = 6602,
  [SMALL_STATE(326)] = 6609,
  [SMALL_STATE(327)] = 6616,
  [SMALL_STATE(328)] = 6623,
  [SMALL_STATE(329)] = 6630,
  [SMALL_STATE(330)] = 6637,
  [SMALL_STATE(331)] = 6644,
  [SMALL_STATE(332)] = 6651,
  [SMALL_STATE(333)] = 6658,
  [SMALL_STATE(334)] = 6665,
  [SMALL_STATE(335)] = 6672,
  [SMALL_STATE(336)] = 6679,
  [SMALL_STATE(337)] = 6686,
  [SMALL_STATE(338)] = 6693,
  [SMALL_STATE(339)] = 6700,
  [SMALL_STATE(340)] = 6707,
  [SMALL_STATE(341)] = 6714,
  [SMALL_STATE(342)] = 6721,
  [SMALL_STATE(343)] = 6728,
  [SMALL_STATE(344)] = 6735,
  [SMALL_STATE(345)] = 6742,
  [SMALL_STATE(346)] = 6749,
  [SMALL_STATE(347)] = 6756,
  [SMALL_STATE(348)] = 6763,
  [SMALL_STATE(349)] = 6770,
  [SMALL_STATE(350)] = 6777,
  [SMALL_STATE(351)] = 6784,
  [SMALL_STATE(352)] = 6791,
  [SMALL_STATE(353)] = 6798,
  [SMALL_STATE(354)] = 6805,
  [SMALL_STATE(355)] = 6812,
  [SMALL_STATE(356)] = 6819,
  [SMALL_STATE(357)] = 6826,
  [SMALL_STATE(358)] = 6833,
  [SMALL_STATE(359)] = 6840,
  [SMALL_STATE(360)] = 6847,
  [SMALL_STATE(361)] = 6854,
  [SMALL_STATE(362)] = 6861,
  [SMALL_STATE(363)] = 6868,
  [SMALL_STATE(364)] = 6875,
  [SMALL_STATE(365)] = 6882,
  [SMALL_STATE(366)] = 6889,
  [SMALL_STATE(367)] = 6896,
  [SMALL_STATE(368)] = 6903,
  [SMALL_STATE(369)] = 6910,
  [SMALL_STATE(370)] = 6917,
  [SMALL_STATE(371)] = 6924,
  [SMALL_STATE(372)] = 6931,
  [SMALL_STATE(373)] = 6938,
  [SMALL_STATE(374)] = 6945,
  [SMALL_STATE(375)] = 6952,
  [SMALL_STATE(376)] = 6959,
  [SMALL_STATE(377)] = 6966,
  [SMALL_STATE(378)] = 6973,
  [SMALL_STATE(379)] = 6980,
  [SMALL_STATE(380)] = 6987,
  [SMALL_STATE(381)] = 6994,
  [SMALL_STATE(382)] = 7001,
  [SMALL_STATE(383)] = 7008,
  [SMALL_STATE(384)] = 7015,
  [SMALL_STATE(385)] = 7022,
  [SMALL_STATE(386)] = 7029,
  [SMALL_STATE(387)] = 7036,
  [SMALL_STATE(388)] = 7043,
  [SMALL_STATE(389)] = 7050,
  [SMALL_STATE(390)] = 7057,
  [SMALL_STATE(391)] = 7064,
  [SMALL_STATE(392)] = 7071,
  [SMALL_STATE(393)] = 7078,
  [SMALL_STATE(394)] = 7085,
  [SMALL_STATE(395)] = 7092,
  [SMALL_STATE(396)] = 7099,
  [SMALL_STATE(397)] = 7106,
  [SMALL_STATE(398)] = 7113,
  [SMALL_STATE(399)] = 7120,
  [SMALL_STATE(400)] = 7127,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(377),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_body3_repeat1, 2), SHIFT_REPEAT(11),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body3_repeat1, 2), SHIFT_REPEAT(177),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_body3_repeat1, 2), SHIFT_REPEAT(283),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body3_repeat1, 2), SHIFT_REPEAT(384),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_body3_repeat1, 2),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body3_repeat1, 2), SHIFT_REPEAT(99),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body3_repeat1, 2), SHIFT_REPEAT(320),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body3_repeat1, 2), SHIFT_REPEAT(293),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body3_repeat1, 2), SHIFT_REPEAT(187),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body3_repeat1, 2), SHIFT_REPEAT(59),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body3_repeat1, 2), SHIFT_REPEAT(377),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body3_repeat1, 2), SHIFT_REPEAT(221),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body3_repeat1, 2), SHIFT_REPEAT(318),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_oneof_body3_repeat1, 2), SHIFT_REPEAT(43),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneof_body3_repeat1, 2), SHIFT_REPEAT(169),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_oneof_body3_repeat1, 2), SHIFT_REPEAT(283),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_oneof_body3_repeat1, 2),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneof_body3_repeat1, 2), SHIFT_REPEAT(293),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneof_body3_repeat1, 2), SHIFT_REPEAT(187),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneof_body3_repeat1, 2), SHIFT_REPEAT(56),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneof3, 3, .production_id = 27),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneof3, 3, .production_id = 27),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_statement, 1),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_empty_statement, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field3, 7, .production_id = 42),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field3, 7, .production_id = 42),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneof_body3, 3),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneof_body3, 3),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extend3, 4, .production_id = 7),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extend3, 4, .production_id = 7),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_body3, 2),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_body3, 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneof_body3, 2),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneof_body3, 2),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_field, 11, .production_id = 48),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_field, 11, .production_id = 48),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_body3, 3),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_body3, 3),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 3, .production_id = 10),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum, 3, .production_id = 10),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_body, 2),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_body, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extend3, 5, .production_id = 7),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extend3, 5, .production_id = 7),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 3, .production_id = 8),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option, 3, .production_id = 8),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_body, 3),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_body, 3),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field3, 5, .production_id = 34),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field3, 5, .production_id = 34),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_field, 10, .production_id = 44),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_field, 10, .production_id = 44),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field3, 6, .production_id = 39),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field3, 6, .production_id = 39),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message3, 3, .production_id = 12),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message3, 3, .production_id = 12),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field3, 6, .production_id = 40),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field3, 6, .production_id = 40),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reserved, 3, .production_id = 26),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reserved, 3, .production_id = 26),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_extend3_repeat1, 2), SHIFT_REPEAT(283),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_extend3_repeat1, 2),
  [202] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_extend3_repeat1, 2), SHIFT_REPEAT(293),
  [205] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_extend3_repeat1, 2), SHIFT_REPEAT(187),
  [208] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_extend3_repeat1, 2), SHIFT_REPEAT(50),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_body2_repeat1, 2), SHIFT_REPEAT(89),
  [236] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body2_repeat1, 2), SHIFT_REPEAT(178),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_body2_repeat1, 2), SHIFT_REPEAT(375),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_body2_repeat1, 2),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_body2_repeat1, 2), SHIFT_REPEAT(102),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_body2_repeat1, 2), SHIFT_REPEAT(44),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_body2_repeat1, 2), SHIFT_REPEAT(376),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_body2_repeat1, 2), SHIFT_REPEAT(218),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_body2_repeat1, 2), SHIFT_REPEAT(322),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_body2_repeat1, 2), SHIFT_REPEAT(147),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [330] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(96),
  [333] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(167),
  [336] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(301),
  [339] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(171),
  [342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(388),
  [345] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(387),
  [348] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(386),
  [351] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(208),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(96),
  [359] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(167),
  [362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(301),
  [365] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(171),
  [368] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(388),
  [371] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(387),
  [374] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(385),
  [377] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(206),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2),
  [384] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(96),
  [387] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(167),
  [390] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(301),
  [393] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(171),
  [396] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(388),
  [399] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(387),
  [402] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(385),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message2, 3, .production_id = 12),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message2, 3, .production_id = 12),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_body2, 2),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_body2, 2),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneof2, 3, .production_id = 27),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneof2, 3, .production_id = 27),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extend2, 4, .production_id = 7),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extend2, 4, .production_id = 7),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field2, 6, .production_id = 39),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field2, 6, .production_id = 39),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extensions, 3, .production_id = 26),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extensions, 3, .production_id = 26),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_field, 6, .production_id = 38),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_field, 6, .production_id = 38),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_body2, 3),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_body2, 3),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extend2, 5, .production_id = 7),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extend2, 5, .production_id = 7),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_field2, 12, .production_id = 50),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_field2, 12, .production_id = 50),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_field2, 11, .production_id = 47),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_field2, 11, .production_id = 47),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field2, 7, .production_id = 42),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field2, 7, .production_id = 42),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneof_body2, 2),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneof_body2, 2),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneof_body2, 3),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneof_body2, 3),
  [463] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_oneof_body2_repeat1, 2), SHIFT_REPEAT(89),
  [466] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneof_body2_repeat1, 2), SHIFT_REPEAT(178),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_oneof_body2_repeat1, 2),
  [471] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_oneof_body2_repeat1, 2), SHIFT_REPEAT(60),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syntaxEditions, 4, .production_id = 4),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 3, .production_id = 11),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_full_ident_repeat1, 2, .production_id = 9),
  [486] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_full_ident_repeat1, 2, .production_id = 9), SHIFT_REPEAT(337),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 4, .production_id = 15),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_ident, 1, .production_id = 1),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service_body, 2),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syntax2, 4, .production_id = 4),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service_body, 3),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syntax3, 4, .production_id = 4),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package, 3, .production_id = 7),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_edition, 6, .production_id = 21),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_ident, 2, .production_id = 6),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 3, .production_id = 5),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [513] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [517] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [519] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_body_repeat1, 2), SHIFT_REPEAT(194),
  [522] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enum_body_repeat1, 2), SHIFT_REPEAT(179),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_body_repeat1, 2),
  [527] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enum_body_repeat1, 2), SHIFT_REPEAT(324),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [536] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_body_repeat1, 2), SHIFT_REPEAT(96),
  [539] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_body_repeat1, 2), SHIFT_REPEAT(171),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_service_body_repeat1, 2),
  [544] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_body_repeat1, 2), SHIFT_REPEAT(323),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_full_ident_repeat1, 2, .production_id = 16),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_extend2_repeat1, 2),
  [571] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_extend2_repeat1, 2), SHIFT_REPEAT(47),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 2),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_value, 3, .production_id = 24),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_value, 2),
  [598] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rpc_body_repeat1, 2), SHIFT_REPEAT(96),
  [601] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rpc_body_repeat1, 2), SHIFT_REPEAT(171),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rpc_body_repeat1, 2),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_lit, 1),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_or_enum_type, 2, .production_id = 13),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_or_enum_type, 3, .production_id = 20),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_value_repeat2, 2, .production_id = 23),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_value_repeat2, 4, .production_id = 30),
  [630] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_value_repeat2, 5, .production_id = 36),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_value_repeat2, 5, .production_id = 35),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_or_enum_type, 2, .production_id = 14),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_value_repeat2, 6, .production_id = 41),
  [650] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [652] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_value_repeat2, 3, .production_id = 18),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_or_enum_type, 1, .production_id = 3),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 4, .production_id = 28),
  [662] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 4, .production_id = 28),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [666] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [670] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc_body, 2),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 11, .production_id = 46),
  [678] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [684] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [686] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(201),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 12, .production_id = 49),
  [691] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2),
  [693] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(213),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 10, .production_id = 43),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 11, .production_id = 45),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_value_repeat2, 2, .production_id = 25),
  [702] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_value_repeat2, 2, .production_id = 25), SHIFT_REPEAT(48),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 5, .production_id = 31),
  [707] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 5, .production_id = 31),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 6, .production_id = 37),
  [711] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 6, .production_id = 37),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 5, .production_id = 33),
  [715] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 5, .production_id = 33),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc_body, 3),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_option_name_repeat1, 2, .production_id = 9),
  [721] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_option_name_repeat1, 2, .production_id = 9), SHIFT_REPEAT(272),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_names, 1),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 1, .production_id = 22),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_names_repeat1, 2),
  [738] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_names_repeat1, 2), SHIFT_REPEAT(245),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ranges, 1),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_value_repeat2, 4, .production_id = 18),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ranges, 2),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_value_repeat2, 5, .production_id = 30),
  [783] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_value_repeat1, 2), SHIFT_REPEAT(61),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_value_repeat1, 2),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_names, 2),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_name, 1, .production_id = 2),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_value_repeat2, 6, .production_id = 35),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_value_repeat2, 6, .production_id = 36),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__option_assignment, 3, .production_id = 18),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [824] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_options_repeat1, 2), SHIFT_REPEAT(148),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_options_repeat1, 2),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ranges_repeat1, 2),
  [831] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ranges_repeat1, 2), SHIFT_REPEAT(173),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_value_repeat2, 3, .production_id = 23),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_value_repeat2, 7, .production_id = 41),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_name, 2, .production_id = 9),
  [846] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_options_repeat1, 2), SHIFT_REPEAT(153),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_options_repeat1, 2),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [861] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_or_enum_type_repeat1, 2, .production_id = 9), SHIFT_REPEAT(321),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [866] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__option_name_part, 3, .production_id = 17),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3, .production_id = 29),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_option_name_repeat1, 2, .production_id = 19),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_option, 1, .production_id = 32),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__option_name_part, 1, .production_id = 1),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [892] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_option, 1, .production_id = 32),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [950] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_type, 1),
  [952] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_or_enum_type_repeat1, 2, .production_id = 1),
  [954] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_options, 4),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [976] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_options, 3),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [988] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_options, 4),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1016] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_options, 3),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1084] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
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
