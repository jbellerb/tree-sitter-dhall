#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 95
#define LARGE_STATE_COUNT 41
#define SYMBOL_COUNT 91
#define ALIAS_COUNT 0
#define TOKEN_COUNT 70
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  sym_label = 1,
  anon_sym_Natural_SLASHfold = 2,
  anon_sym_Natural_SLASHbuild = 3,
  anon_sym_Natural_SLASHisZero = 4,
  anon_sym_Natural_SLASHeven = 5,
  anon_sym_Natural_SLASHodd = 6,
  anon_sym_Natural_SLASHtoInteger = 7,
  anon_sym_Natural_SLASHshow = 8,
  anon_sym_Integer_SLASHtoDouble = 9,
  anon_sym_Integer_SLASHshow = 10,
  anon_sym_Integer_SLASHnegate = 11,
  anon_sym_Integer_SLASHclamp = 12,
  anon_sym_Natural_SLASHsubtract = 13,
  anon_sym_Double_SLASHshow = 14,
  anon_sym_List_SLASHbuild = 15,
  anon_sym_List_SLASHfold = 16,
  anon_sym_List_SLASHlength = 17,
  anon_sym_List_SLASHhead = 18,
  anon_sym_List_SLASHlast = 19,
  anon_sym_List_SLASHindexed = 20,
  anon_sym_List_SLASHreverse = 21,
  anon_sym_Text_SLASHshow = 22,
  anon_sym_Text_SLASHreplace = 23,
  anon_sym_Bool = 24,
  anon_sym_True = 25,
  anon_sym_False = 26,
  anon_sym_Optional = 27,
  anon_sym_None = 28,
  anon_sym_Natural = 29,
  anon_sym_Integer = 30,
  anon_sym_Double = 31,
  anon_sym_Text = 32,
  anon_sym_Date = 33,
  anon_sym_Time = 34,
  anon_sym_TimeZone = 35,
  anon_sym_List = 36,
  anon_sym_Type = 37,
  anon_sym_Kind = 38,
  anon_sym_Sort = 39,
  anon_sym_COLON = 40,
  anon_sym_EQ_EQ = 41,
  anon_sym_merge = 42,
  anon_sym_Some = 43,
  anon_sym_toMap = 44,
  anon_sym_showConstructor = 45,
  anon_sym_COLON_COLON = 46,
  anon_sym_LPAREN = 47,
  anon_sym_RPAREN = 48,
  sym_line_comment_prefix = 49,
  sym_line_comment_content = 50,
  sym_block_comment_open = 51,
  sym_block_comment_close = 52,
  anon_sym_DASHInfinity = 53,
  anon_sym_Infinity = 54,
  anon_sym_NaN = 55,
  aux_sym_double_literal_token1 = 56,
  sym_natural_literal = 57,
  sym_integer_literal = 58,
  anon_sym_DQUOTE = 59,
  aux_sym__double_quote_chunk_token1 = 60,
  anon_sym_DOLLAR_LBRACE = 61,
  anon_sym_RBRACE = 62,
  sym_double_quote_escaped = 63,
  anon_sym_LBRACK = 64,
  anon_sym_COMMA = 65,
  anon_sym_RBRACK = 66,
  anon_sym_AT = 67,
  sym_block_comment_content = 68,
  sym_block_comment_end = 69,
  sym_expression = 70,
  sym_builtin = 71,
  sym__operator_expression = 72,
  sym_equal_expression = 73,
  sym__application_expression = 74,
  sym__import_expression = 75,
  sym__selector_expression = 76,
  sym_primitive_expression = 77,
  sym_line_comment = 78,
  sym_block_comment = 79,
  sym_numeric_literal = 80,
  sym_double_literal = 81,
  sym_text_literal = 82,
  sym_double_quote_literal = 83,
  sym__double_quote_chunk = 84,
  sym_interpolation = 85,
  sym_non_empty_list_literal = 86,
  sym_identifier = 87,
  sym_de_bruijn_index = 88,
  aux_sym_double_quote_literal_repeat1 = 89,
  aux_sym_non_empty_list_literal_repeat1 = 90,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_label] = "label",
  [anon_sym_Natural_SLASHfold] = "Natural/fold",
  [anon_sym_Natural_SLASHbuild] = "Natural/build",
  [anon_sym_Natural_SLASHisZero] = "Natural/isZero",
  [anon_sym_Natural_SLASHeven] = "Natural/even",
  [anon_sym_Natural_SLASHodd] = "Natural/odd",
  [anon_sym_Natural_SLASHtoInteger] = "Natural/toInteger",
  [anon_sym_Natural_SLASHshow] = "Natural/show",
  [anon_sym_Integer_SLASHtoDouble] = "Integer/toDouble",
  [anon_sym_Integer_SLASHshow] = "Integer/show",
  [anon_sym_Integer_SLASHnegate] = "Integer/negate",
  [anon_sym_Integer_SLASHclamp] = "Integer/clamp",
  [anon_sym_Natural_SLASHsubtract] = "Natural/subtract",
  [anon_sym_Double_SLASHshow] = "Double/show",
  [anon_sym_List_SLASHbuild] = "List/build",
  [anon_sym_List_SLASHfold] = "List/fold",
  [anon_sym_List_SLASHlength] = "List/length",
  [anon_sym_List_SLASHhead] = "List/head",
  [anon_sym_List_SLASHlast] = "List/last",
  [anon_sym_List_SLASHindexed] = "List/indexed",
  [anon_sym_List_SLASHreverse] = "List/reverse",
  [anon_sym_Text_SLASHshow] = "Text/show",
  [anon_sym_Text_SLASHreplace] = "Text/replace",
  [anon_sym_Bool] = "Bool",
  [anon_sym_True] = "True",
  [anon_sym_False] = "False",
  [anon_sym_Optional] = "Optional",
  [anon_sym_None] = "None",
  [anon_sym_Natural] = "Natural",
  [anon_sym_Integer] = "Integer",
  [anon_sym_Double] = "Double",
  [anon_sym_Text] = "Text",
  [anon_sym_Date] = "Date",
  [anon_sym_Time] = "Time",
  [anon_sym_TimeZone] = "TimeZone",
  [anon_sym_List] = "List",
  [anon_sym_Type] = "Type",
  [anon_sym_Kind] = "Kind",
  [anon_sym_Sort] = "Sort",
  [anon_sym_COLON] = ":",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_merge] = "merge",
  [anon_sym_Some] = "Some",
  [anon_sym_toMap] = "toMap",
  [anon_sym_showConstructor] = "showConstructor",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_line_comment_prefix] = "line_comment_prefix",
  [sym_line_comment_content] = "line_comment_content",
  [sym_block_comment_open] = "block_comment_open",
  [sym_block_comment_close] = "block_comment_close",
  [anon_sym_DASHInfinity] = "-Infinity",
  [anon_sym_Infinity] = "Infinity",
  [anon_sym_NaN] = "NaN",
  [aux_sym_double_literal_token1] = "double_literal_token1",
  [sym_natural_literal] = "natural_literal",
  [sym_integer_literal] = "integer_literal",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__double_quote_chunk_token1] = "_double_quote_chunk_token1",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [anon_sym_RBRACE] = "}",
  [sym_double_quote_escaped] = "double_quote_escaped",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_AT] = "@",
  [sym_block_comment_content] = "block_comment_content",
  [sym_block_comment_end] = "block_comment_end",
  [sym_expression] = "expression",
  [sym_builtin] = "builtin",
  [sym__operator_expression] = "_operator_expression",
  [sym_equal_expression] = "equal_expression",
  [sym__application_expression] = "_application_expression",
  [sym__import_expression] = "_import_expression",
  [sym__selector_expression] = "_selector_expression",
  [sym_primitive_expression] = "primitive_expression",
  [sym_line_comment] = "line_comment",
  [sym_block_comment] = "block_comment",
  [sym_numeric_literal] = "numeric_literal",
  [sym_double_literal] = "double_literal",
  [sym_text_literal] = "text_literal",
  [sym_double_quote_literal] = "double_quote_literal",
  [sym__double_quote_chunk] = "_double_quote_chunk",
  [sym_interpolation] = "interpolation",
  [sym_non_empty_list_literal] = "non_empty_list_literal",
  [sym_identifier] = "identifier",
  [sym_de_bruijn_index] = "de_bruijn_index",
  [aux_sym_double_quote_literal_repeat1] = "double_quote_literal_repeat1",
  [aux_sym_non_empty_list_literal_repeat1] = "non_empty_list_literal_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_label] = sym_label,
  [anon_sym_Natural_SLASHfold] = anon_sym_Natural_SLASHfold,
  [anon_sym_Natural_SLASHbuild] = anon_sym_Natural_SLASHbuild,
  [anon_sym_Natural_SLASHisZero] = anon_sym_Natural_SLASHisZero,
  [anon_sym_Natural_SLASHeven] = anon_sym_Natural_SLASHeven,
  [anon_sym_Natural_SLASHodd] = anon_sym_Natural_SLASHodd,
  [anon_sym_Natural_SLASHtoInteger] = anon_sym_Natural_SLASHtoInteger,
  [anon_sym_Natural_SLASHshow] = anon_sym_Natural_SLASHshow,
  [anon_sym_Integer_SLASHtoDouble] = anon_sym_Integer_SLASHtoDouble,
  [anon_sym_Integer_SLASHshow] = anon_sym_Integer_SLASHshow,
  [anon_sym_Integer_SLASHnegate] = anon_sym_Integer_SLASHnegate,
  [anon_sym_Integer_SLASHclamp] = anon_sym_Integer_SLASHclamp,
  [anon_sym_Natural_SLASHsubtract] = anon_sym_Natural_SLASHsubtract,
  [anon_sym_Double_SLASHshow] = anon_sym_Double_SLASHshow,
  [anon_sym_List_SLASHbuild] = anon_sym_List_SLASHbuild,
  [anon_sym_List_SLASHfold] = anon_sym_List_SLASHfold,
  [anon_sym_List_SLASHlength] = anon_sym_List_SLASHlength,
  [anon_sym_List_SLASHhead] = anon_sym_List_SLASHhead,
  [anon_sym_List_SLASHlast] = anon_sym_List_SLASHlast,
  [anon_sym_List_SLASHindexed] = anon_sym_List_SLASHindexed,
  [anon_sym_List_SLASHreverse] = anon_sym_List_SLASHreverse,
  [anon_sym_Text_SLASHshow] = anon_sym_Text_SLASHshow,
  [anon_sym_Text_SLASHreplace] = anon_sym_Text_SLASHreplace,
  [anon_sym_Bool] = anon_sym_Bool,
  [anon_sym_True] = anon_sym_True,
  [anon_sym_False] = anon_sym_False,
  [anon_sym_Optional] = anon_sym_Optional,
  [anon_sym_None] = anon_sym_None,
  [anon_sym_Natural] = anon_sym_Natural,
  [anon_sym_Integer] = anon_sym_Integer,
  [anon_sym_Double] = anon_sym_Double,
  [anon_sym_Text] = anon_sym_Text,
  [anon_sym_Date] = anon_sym_Date,
  [anon_sym_Time] = anon_sym_Time,
  [anon_sym_TimeZone] = anon_sym_TimeZone,
  [anon_sym_List] = anon_sym_List,
  [anon_sym_Type] = anon_sym_Type,
  [anon_sym_Kind] = anon_sym_Kind,
  [anon_sym_Sort] = anon_sym_Sort,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_merge] = anon_sym_merge,
  [anon_sym_Some] = anon_sym_Some,
  [anon_sym_toMap] = anon_sym_toMap,
  [anon_sym_showConstructor] = anon_sym_showConstructor,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_line_comment_prefix] = sym_line_comment_prefix,
  [sym_line_comment_content] = sym_line_comment_content,
  [sym_block_comment_open] = sym_block_comment_open,
  [sym_block_comment_close] = sym_block_comment_close,
  [anon_sym_DASHInfinity] = anon_sym_DASHInfinity,
  [anon_sym_Infinity] = anon_sym_Infinity,
  [anon_sym_NaN] = anon_sym_NaN,
  [aux_sym_double_literal_token1] = aux_sym_double_literal_token1,
  [sym_natural_literal] = sym_natural_literal,
  [sym_integer_literal] = sym_integer_literal,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__double_quote_chunk_token1] = aux_sym__double_quote_chunk_token1,
  [anon_sym_DOLLAR_LBRACE] = anon_sym_DOLLAR_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_double_quote_escaped] = sym_double_quote_escaped,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_AT] = anon_sym_AT,
  [sym_block_comment_content] = sym_block_comment_content,
  [sym_block_comment_end] = sym_block_comment_end,
  [sym_expression] = sym_expression,
  [sym_builtin] = sym_builtin,
  [sym__operator_expression] = sym__operator_expression,
  [sym_equal_expression] = sym_equal_expression,
  [sym__application_expression] = sym__application_expression,
  [sym__import_expression] = sym__import_expression,
  [sym__selector_expression] = sym__selector_expression,
  [sym_primitive_expression] = sym_primitive_expression,
  [sym_line_comment] = sym_line_comment,
  [sym_block_comment] = sym_block_comment,
  [sym_numeric_literal] = sym_numeric_literal,
  [sym_double_literal] = sym_double_literal,
  [sym_text_literal] = sym_text_literal,
  [sym_double_quote_literal] = sym_double_quote_literal,
  [sym__double_quote_chunk] = sym__double_quote_chunk,
  [sym_interpolation] = sym_interpolation,
  [sym_non_empty_list_literal] = sym_non_empty_list_literal,
  [sym_identifier] = sym_identifier,
  [sym_de_bruijn_index] = sym_de_bruijn_index,
  [aux_sym_double_quote_literal_repeat1] = aux_sym_double_quote_literal_repeat1,
  [aux_sym_non_empty_list_literal_repeat1] = aux_sym_non_empty_list_literal_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Natural_SLASHfold] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Natural_SLASHbuild] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Natural_SLASHisZero] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Natural_SLASHeven] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Natural_SLASHodd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Natural_SLASHtoInteger] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Natural_SLASHshow] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Integer_SLASHtoDouble] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Integer_SLASHshow] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Integer_SLASHnegate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Integer_SLASHclamp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Natural_SLASHsubtract] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Double_SLASHshow] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_List_SLASHbuild] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_List_SLASHfold] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_List_SLASHlength] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_List_SLASHhead] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_List_SLASHlast] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_List_SLASHindexed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_List_SLASHreverse] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Text_SLASHshow] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Text_SLASHreplace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_True] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_False] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Optional] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_None] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Natural] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Integer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Double] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Text] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Date] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Time] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TimeZone] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_List] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Kind] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Sort] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_merge] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Some] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_toMap] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_showConstructor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
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
  [sym_line_comment_prefix] = {
    .visible = true,
    .named = true,
  },
  [sym_line_comment_content] = {
    .visible = true,
    .named = true,
  },
  [sym_block_comment_open] = {
    .visible = true,
    .named = true,
  },
  [sym_block_comment_close] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASHInfinity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Infinity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NaN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_double_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_natural_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__double_quote_chunk_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOLLAR_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_double_quote_escaped] = {
    .visible = true,
    .named = true,
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
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [sym_block_comment_content] = {
    .visible = true,
    .named = true,
  },
  [sym_block_comment_end] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_builtin] = {
    .visible = true,
    .named = true,
  },
  [sym__operator_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_equal_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__application_expression] = {
    .visible = false,
    .named = true,
  },
  [sym__import_expression] = {
    .visible = false,
    .named = true,
  },
  [sym__selector_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_primitive_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_numeric_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_double_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_text_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_double_quote_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__double_quote_chunk] = {
    .visible = false,
    .named = true,
  },
  [sym_interpolation] = {
    .visible = true,
    .named = true,
  },
  [sym_non_empty_list_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_de_bruijn_index] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_double_quote_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_non_empty_list_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool sym_double_quote_escaped_character_set_1(int32_t c) {
  return (c < 'b'
    ? (c < '/'
      ? (c < '$'
        ? c == '"'
        : c <= '$')
      : (c <= '/' || c == '\\'))
    : (c <= 'b' || (c < 'r'
      ? (c < 'n'
        ? c == 'f'
        : c <= 'n')
      : (c <= 'r' || c == 't'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(36);
      if (lookahead == '"') ADVANCE(64);
      if (lookahead == '$') ADVANCE(19);
      if (lookahead == '(') ADVANCE(42);
      if (lookahead == ')') ADVANCE(43);
      if (lookahead == '+') ADVANCE(6);
      if (lookahead == ',') ADVANCE(74);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '0') ADVANCE(56);
      if (lookahead == ':') ADVANCE(39);
      if (lookahead == '=') ADVANCE(9);
      if (lookahead == '@') ADVANCE(76);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == ']') ADVANCE(75);
      if (lookahead == '`') ADVANCE(35);
      if (lookahead == '{') ADVANCE(4);
      if (lookahead == '}') ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(64);
      if (lookahead == '$') ADVANCE(69);
      if (lookahead == '-') ADVANCE(67);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == '{') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(66);
      if (lookahead != 0) ADVANCE(65);
      END_STATE();
    case 2:
      if (lookahead == '-') ADVANCE(44);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == '0') ADVANCE(61);
      if (lookahead == 'I') ADVANCE(14);
      if (lookahead == '}') ADVANCE(52);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(50);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(2);
      if (lookahead == '0') ADVANCE(58);
      if (lookahead == '{') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 6:
      if (lookahead == '0') ADVANCE(61);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 7:
      if (lookahead == '0') ADVANCE(7);
      if (lookahead == '}') ADVANCE(72);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(26);
      END_STATE();
    case 8:
      if (lookahead == '0') ADVANCE(7);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(26);
      END_STATE();
    case 9:
      if (lookahead == '=') ADVANCE(40);
      END_STATE();
    case 10:
      if (lookahead == '`') ADVANCE(37);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == 'f') ADVANCE(13);
      END_STATE();
    case 12:
      if (lookahead == 'i') ADVANCE(16);
      END_STATE();
    case 13:
      if (lookahead == 'i') ADVANCE(15);
      END_STATE();
    case 14:
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 15:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 16:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 17:
      if (lookahead == 'u') ADVANCE(20);
      if (sym_double_quote_escaped_character_set_1(lookahead)) ADVANCE(72);
      END_STATE();
    case 18:
      if (lookahead == 'y') ADVANCE(53);
      END_STATE();
    case 19:
      if (lookahead == '{') ADVANCE(70);
      END_STATE();
    case 20:
      if (lookahead == '{') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(34);
      END_STATE();
    case 21:
      if (lookahead == '}') ADVANCE(72);
      END_STATE();
    case 22:
      if (lookahead == '}') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(21);
      END_STATE();
    case 23:
      if (lookahead == '}') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(22);
      END_STATE();
    case 24:
      if (lookahead == '}') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(23);
      END_STATE();
    case 25:
      if (lookahead == '}') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(24);
      END_STATE();
    case 26:
      if (lookahead == '}') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(25);
      END_STATE();
    case 27:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(72);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(60);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(63);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(30);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(33);
      END_STATE();
    case 35:
      if ((' ' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= '~')) ADVANCE(10);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_label);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(41);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_line_comment_prefix);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_line_comment_prefix);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_line_comment_content);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == '{') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_line_comment_content);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_line_comment_content);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_line_comment_content);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_block_comment_open);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_block_comment_open);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_block_comment_close);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_DASHInfinity);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_double_literal_token1);
      if (lookahead == 'e') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_double_literal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_natural_literal);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(27);
      if (lookahead == 'x') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_natural_literal);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_natural_literal);
      if (lookahead == 'x') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_natural_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_natural_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(27);
      if (lookahead == 'x') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_integer_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym__double_quote_chunk_token1);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym__double_quote_chunk_token1);
      if (lookahead == '$') ADVANCE(69);
      if (lookahead == '-') ADVANCE(67);
      if (lookahead == '{') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(65);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym__double_quote_chunk_token1);
      if (lookahead == '-') ADVANCE(44);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym__double_quote_chunk_token1);
      if (lookahead == '-') ADVANCE(50);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym__double_quote_chunk_token1);
      if (lookahead == '{') ADVANCE(70);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_double_quote_escaped);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'B') ADVANCE(1);
      if (lookahead == 'D') ADVANCE(2);
      if (lookahead == 'F') ADVANCE(3);
      if (lookahead == 'I') ADVANCE(4);
      if (lookahead == 'K') ADVANCE(5);
      if (lookahead == 'L') ADVANCE(6);
      if (lookahead == 'N') ADVANCE(7);
      if (lookahead == 'O') ADVANCE(8);
      if (lookahead == 'S') ADVANCE(9);
      if (lookahead == 'T') ADVANCE(10);
      if (lookahead == 'm') ADVANCE(11);
      if (lookahead == 's') ADVANCE(12);
      if (lookahead == 't') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(15);
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(17);
      END_STATE();
    case 4:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 5:
      if (lookahead == 'i') ADVANCE(19);
      END_STATE();
    case 6:
      if (lookahead == 'i') ADVANCE(20);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(21);
      if (lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 8:
      if (lookahead == 'p') ADVANCE(23);
      END_STATE();
    case 9:
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(25);
      if (lookahead == 'i') ADVANCE(26);
      if (lookahead == 'r') ADVANCE(27);
      if (lookahead == 'y') ADVANCE(28);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 12:
      if (lookahead == 'h') ADVANCE(30);
      END_STATE();
    case 13:
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 14:
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 15:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 16:
      if (lookahead == 'u') ADVANCE(34);
      END_STATE();
    case 17:
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 18:
      if (lookahead == 'f') ADVANCE(36);
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 19:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 20:
      if (lookahead == 's') ADVANCE(39);
      END_STATE();
    case 21:
      if (lookahead == 'N') ADVANCE(40);
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 22:
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 23:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 24:
      if (lookahead == 'm') ADVANCE(44);
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 25:
      if (lookahead == 'x') ADVANCE(46);
      END_STATE();
    case 26:
      if (lookahead == 'm') ADVANCE(47);
      END_STATE();
    case 27:
      if (lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 28:
      if (lookahead == 'p') ADVANCE(49);
      END_STATE();
    case 29:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 31:
      if (lookahead == 'M') ADVANCE(52);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(53);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 34:
      if (lookahead == 'b') ADVANCE(55);
      END_STATE();
    case 35:
      if (lookahead == 's') ADVANCE(56);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(59);
      END_STATE();
    case 39:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_NaN);
      END_STATE();
    case 41:
      if (lookahead == 'u') ADVANCE(61);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 50:
      if (lookahead == 'g') ADVANCE(70);
      END_STATE();
    case 51:
      if (lookahead == 'w') ADVANCE(71);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(72);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_Bool);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_Date);
      END_STATE();
    case 55:
      if (lookahead == 'l') ADVANCE(73);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 57:
      if (lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 58:
      if (lookahead == 'g') ADVANCE(76);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_Kind);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_List);
      if (lookahead == '/') ADVANCE(77);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_None);
      END_STATE();
    case 63:
      if (lookahead == 'o') ADVANCE(79);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_Some);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_Sort);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_Text);
      if (lookahead == '/') ADVANCE(80);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_Time);
      if (lookahead == 'Z') ADVANCE(81);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_True);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_Type);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 71:
      if (lookahead == 'C') ADVANCE(83);
      END_STATE();
    case 72:
      if (lookahead == 'p') ADVANCE(84);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_False);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(86);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 77:
      if (lookahead == 'b') ADVANCE(88);
      if (lookahead == 'f') ADVANCE(89);
      if (lookahead == 'h') ADVANCE(90);
      if (lookahead == 'i') ADVANCE(91);
      if (lookahead == 'l') ADVANCE(92);
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 78:
      if (lookahead == 'a') ADVANCE(94);
      END_STATE();
    case 79:
      if (lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 80:
      if (lookahead == 'r') ADVANCE(96);
      if (lookahead == 's') ADVANCE(97);
      END_STATE();
    case 81:
      if (lookahead == 'o') ADVANCE(98);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_merge);
      END_STATE();
    case 83:
      if (lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_toMap);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_Double);
      if (lookahead == '/') ADVANCE(100);
      END_STATE();
    case 86:
      if (lookahead == 't') ADVANCE(101);
      END_STATE();
    case 87:
      if (lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 88:
      if (lookahead == 'u') ADVANCE(103);
      END_STATE();
    case 89:
      if (lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(106);
      END_STATE();
    case 92:
      if (lookahead == 'a') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 94:
      if (lookahead == 'l') ADVANCE(110);
      END_STATE();
    case 95:
      if (lookahead == 'a') ADVANCE(111);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 97:
      if (lookahead == 'h') ADVANCE(113);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(114);
      END_STATE();
    case 99:
      if (lookahead == 'n') ADVANCE(115);
      END_STATE();
    case 100:
      if (lookahead == 's') ADVANCE(116);
      END_STATE();
    case 101:
      if (lookahead == 'y') ADVANCE(117);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_Integer);
      if (lookahead == '/') ADVANCE(118);
      END_STATE();
    case 103:
      if (lookahead == 'i') ADVANCE(119);
      END_STATE();
    case 104:
      if (lookahead == 'l') ADVANCE(120);
      END_STATE();
    case 105:
      if (lookahead == 'a') ADVANCE(121);
      END_STATE();
    case 106:
      if (lookahead == 'd') ADVANCE(122);
      END_STATE();
    case 107:
      if (lookahead == 's') ADVANCE(123);
      END_STATE();
    case 108:
      if (lookahead == 'n') ADVANCE(124);
      END_STATE();
    case 109:
      if (lookahead == 'v') ADVANCE(125);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_Natural);
      if (lookahead == '/') ADVANCE(126);
      END_STATE();
    case 111:
      if (lookahead == 'l') ADVANCE(127);
      END_STATE();
    case 112:
      if (lookahead == 'p') ADVANCE(128);
      END_STATE();
    case 113:
      if (lookahead == 'o') ADVANCE(129);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 115:
      if (lookahead == 's') ADVANCE(131);
      END_STATE();
    case 116:
      if (lookahead == 'h') ADVANCE(132);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_Infinity);
      END_STATE();
    case 118:
      if (lookahead == 'c') ADVANCE(133);
      if (lookahead == 'n') ADVANCE(134);
      if (lookahead == 's') ADVANCE(135);
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 119:
      if (lookahead == 'l') ADVANCE(137);
      END_STATE();
    case 120:
      if (lookahead == 'd') ADVANCE(138);
      END_STATE();
    case 121:
      if (lookahead == 'd') ADVANCE(139);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 123:
      if (lookahead == 't') ADVANCE(141);
      END_STATE();
    case 124:
      if (lookahead == 'g') ADVANCE(142);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 126:
      if (lookahead == 'b') ADVANCE(144);
      if (lookahead == 'e') ADVANCE(145);
      if (lookahead == 'f') ADVANCE(146);
      if (lookahead == 'i') ADVANCE(147);
      if (lookahead == 'o') ADVANCE(148);
      if (lookahead == 's') ADVANCE(149);
      if (lookahead == 't') ADVANCE(150);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_Optional);
      END_STATE();
    case 128:
      if (lookahead == 'l') ADVANCE(151);
      END_STATE();
    case 129:
      if (lookahead == 'w') ADVANCE(152);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_TimeZone);
      END_STATE();
    case 131:
      if (lookahead == 't') ADVANCE(153);
      END_STATE();
    case 132:
      if (lookahead == 'o') ADVANCE(154);
      END_STATE();
    case 133:
      if (lookahead == 'l') ADVANCE(155);
      END_STATE();
    case 134:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 135:
      if (lookahead == 'h') ADVANCE(157);
      END_STATE();
    case 136:
      if (lookahead == 'o') ADVANCE(158);
      END_STATE();
    case 137:
      if (lookahead == 'd') ADVANCE(159);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_List_SLASHfold);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_List_SLASHhead);
      END_STATE();
    case 140:
      if (lookahead == 'x') ADVANCE(160);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_List_SLASHlast);
      END_STATE();
    case 142:
      if (lookahead == 't') ADVANCE(161);
      END_STATE();
    case 143:
      if (lookahead == 'r') ADVANCE(162);
      END_STATE();
    case 144:
      if (lookahead == 'u') ADVANCE(163);
      END_STATE();
    case 145:
      if (lookahead == 'v') ADVANCE(164);
      END_STATE();
    case 146:
      if (lookahead == 'o') ADVANCE(165);
      END_STATE();
    case 147:
      if (lookahead == 's') ADVANCE(166);
      END_STATE();
    case 148:
      if (lookahead == 'd') ADVANCE(167);
      END_STATE();
    case 149:
      if (lookahead == 'h') ADVANCE(168);
      if (lookahead == 'u') ADVANCE(169);
      END_STATE();
    case 150:
      if (lookahead == 'o') ADVANCE(170);
      END_STATE();
    case 151:
      if (lookahead == 'a') ADVANCE(171);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_Text_SLASHshow);
      END_STATE();
    case 153:
      if (lookahead == 'r') ADVANCE(172);
      END_STATE();
    case 154:
      if (lookahead == 'w') ADVANCE(173);
      END_STATE();
    case 155:
      if (lookahead == 'a') ADVANCE(174);
      END_STATE();
    case 156:
      if (lookahead == 'g') ADVANCE(175);
      END_STATE();
    case 157:
      if (lookahead == 'o') ADVANCE(176);
      END_STATE();
    case 158:
      if (lookahead == 'D') ADVANCE(177);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_List_SLASHbuild);
      END_STATE();
    case 160:
      if (lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 161:
      if (lookahead == 'h') ADVANCE(179);
      END_STATE();
    case 162:
      if (lookahead == 's') ADVANCE(180);
      END_STATE();
    case 163:
      if (lookahead == 'i') ADVANCE(181);
      END_STATE();
    case 164:
      if (lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 165:
      if (lookahead == 'l') ADVANCE(183);
      END_STATE();
    case 166:
      if (lookahead == 'Z') ADVANCE(184);
      END_STATE();
    case 167:
      if (lookahead == 'd') ADVANCE(185);
      END_STATE();
    case 168:
      if (lookahead == 'o') ADVANCE(186);
      END_STATE();
    case 169:
      if (lookahead == 'b') ADVANCE(187);
      END_STATE();
    case 170:
      if (lookahead == 'I') ADVANCE(188);
      END_STATE();
    case 171:
      if (lookahead == 'c') ADVANCE(189);
      END_STATE();
    case 172:
      if (lookahead == 'u') ADVANCE(190);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_Double_SLASHshow);
      END_STATE();
    case 174:
      if (lookahead == 'm') ADVANCE(191);
      END_STATE();
    case 175:
      if (lookahead == 'a') ADVANCE(192);
      END_STATE();
    case 176:
      if (lookahead == 'w') ADVANCE(193);
      END_STATE();
    case 177:
      if (lookahead == 'o') ADVANCE(194);
      END_STATE();
    case 178:
      if (lookahead == 'd') ADVANCE(195);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_List_SLASHlength);
      END_STATE();
    case 180:
      if (lookahead == 'e') ADVANCE(196);
      END_STATE();
    case 181:
      if (lookahead == 'l') ADVANCE(197);
      END_STATE();
    case 182:
      if (lookahead == 'n') ADVANCE(198);
      END_STATE();
    case 183:
      if (lookahead == 'd') ADVANCE(199);
      END_STATE();
    case 184:
      if (lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_Natural_SLASHodd);
      END_STATE();
    case 186:
      if (lookahead == 'w') ADVANCE(201);
      END_STATE();
    case 187:
      if (lookahead == 't') ADVANCE(202);
      END_STATE();
    case 188:
      if (lookahead == 'n') ADVANCE(203);
      END_STATE();
    case 189:
      if (lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 190:
      if (lookahead == 'c') ADVANCE(205);
      END_STATE();
    case 191:
      if (lookahead == 'p') ADVANCE(206);
      END_STATE();
    case 192:
      if (lookahead == 't') ADVANCE(207);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_Integer_SLASHshow);
      END_STATE();
    case 194:
      if (lookahead == 'u') ADVANCE(208);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_List_SLASHindexed);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_List_SLASHreverse);
      END_STATE();
    case 197:
      if (lookahead == 'd') ADVANCE(209);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_Natural_SLASHeven);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_Natural_SLASHfold);
      END_STATE();
    case 200:
      if (lookahead == 'r') ADVANCE(210);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_Natural_SLASHshow);
      END_STATE();
    case 202:
      if (lookahead == 'r') ADVANCE(211);
      END_STATE();
    case 203:
      if (lookahead == 't') ADVANCE(212);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_Text_SLASHreplace);
      END_STATE();
    case 205:
      if (lookahead == 't') ADVANCE(213);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_Integer_SLASHclamp);
      END_STATE();
    case 207:
      if (lookahead == 'e') ADVANCE(214);
      END_STATE();
    case 208:
      if (lookahead == 'b') ADVANCE(215);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_Natural_SLASHbuild);
      END_STATE();
    case 210:
      if (lookahead == 'o') ADVANCE(216);
      END_STATE();
    case 211:
      if (lookahead == 'a') ADVANCE(217);
      END_STATE();
    case 212:
      if (lookahead == 'e') ADVANCE(218);
      END_STATE();
    case 213:
      if (lookahead == 'o') ADVANCE(219);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_Integer_SLASHnegate);
      END_STATE();
    case 215:
      if (lookahead == 'l') ADVANCE(220);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_Natural_SLASHisZero);
      END_STATE();
    case 217:
      if (lookahead == 'c') ADVANCE(221);
      END_STATE();
    case 218:
      if (lookahead == 'g') ADVANCE(222);
      END_STATE();
    case 219:
      if (lookahead == 'r') ADVANCE(223);
      END_STATE();
    case 220:
      if (lookahead == 'e') ADVANCE(224);
      END_STATE();
    case 221:
      if (lookahead == 't') ADVANCE(225);
      END_STATE();
    case 222:
      if (lookahead == 'e') ADVANCE(226);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_showConstructor);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_Integer_SLASHtoDouble);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_Natural_SLASHsubtract);
      END_STATE();
    case 226:
      if (lookahead == 'r') ADVANCE(227);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_Natural_SLASHtoInteger);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 1},
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
  [84] = {.lex_state = 5},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 5},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 46},
  [92] = {.lex_state = 0, .external_lex_state = 2},
  [93] = {(TSStateId)(-1)},
  [94] = {(TSStateId)(-1)},
};

enum {
  ts_external_token_block_comment_content = 0,
  ts_external_token_block_comment_end = 1,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_block_comment_content] = sym_block_comment_content,
  [ts_external_token_block_comment_end] = sym_block_comment_end,
};

static const bool ts_external_scanner_states[3][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_block_comment_content] = true,
    [ts_external_token_block_comment_end] = true,
  },
  [2] = {
    [ts_external_token_block_comment_content] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_line_comment] = STATE(0),
    [sym_block_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_label] = ACTIONS(1),
    [anon_sym_Natural_SLASHfold] = ACTIONS(1),
    [anon_sym_Natural_SLASHbuild] = ACTIONS(1),
    [anon_sym_Natural_SLASHisZero] = ACTIONS(1),
    [anon_sym_Natural_SLASHeven] = ACTIONS(1),
    [anon_sym_Natural_SLASHodd] = ACTIONS(1),
    [anon_sym_Natural_SLASHtoInteger] = ACTIONS(1),
    [anon_sym_Natural_SLASHshow] = ACTIONS(1),
    [anon_sym_Integer_SLASHtoDouble] = ACTIONS(1),
    [anon_sym_Integer_SLASHshow] = ACTIONS(1),
    [anon_sym_Integer_SLASHnegate] = ACTIONS(1),
    [anon_sym_Integer_SLASHclamp] = ACTIONS(1),
    [anon_sym_Natural_SLASHsubtract] = ACTIONS(1),
    [anon_sym_Double_SLASHshow] = ACTIONS(1),
    [anon_sym_List_SLASHbuild] = ACTIONS(1),
    [anon_sym_List_SLASHfold] = ACTIONS(1),
    [anon_sym_List_SLASHlength] = ACTIONS(1),
    [anon_sym_List_SLASHhead] = ACTIONS(1),
    [anon_sym_List_SLASHlast] = ACTIONS(1),
    [anon_sym_List_SLASHindexed] = ACTIONS(1),
    [anon_sym_List_SLASHreverse] = ACTIONS(1),
    [anon_sym_Text_SLASHshow] = ACTIONS(1),
    [anon_sym_Text_SLASHreplace] = ACTIONS(1),
    [anon_sym_Bool] = ACTIONS(1),
    [anon_sym_True] = ACTIONS(1),
    [anon_sym_False] = ACTIONS(1),
    [anon_sym_Optional] = ACTIONS(1),
    [anon_sym_None] = ACTIONS(1),
    [anon_sym_Natural] = ACTIONS(1),
    [anon_sym_Integer] = ACTIONS(1),
    [anon_sym_Double] = ACTIONS(1),
    [anon_sym_Text] = ACTIONS(1),
    [anon_sym_Date] = ACTIONS(1),
    [anon_sym_Time] = ACTIONS(1),
    [anon_sym_TimeZone] = ACTIONS(1),
    [anon_sym_List] = ACTIONS(1),
    [anon_sym_Type] = ACTIONS(1),
    [anon_sym_Kind] = ACTIONS(1),
    [anon_sym_Sort] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_merge] = ACTIONS(1),
    [anon_sym_Some] = ACTIONS(1),
    [anon_sym_toMap] = ACTIONS(1),
    [anon_sym_showConstructor] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_line_comment_prefix] = ACTIONS(3),
    [sym_block_comment_open] = ACTIONS(5),
    [sym_block_comment_close] = ACTIONS(1),
    [anon_sym_DASHInfinity] = ACTIONS(1),
    [anon_sym_Infinity] = ACTIONS(1),
    [anon_sym_NaN] = ACTIONS(1),
    [aux_sym_double_literal_token1] = ACTIONS(1),
    [sym_natural_literal] = ACTIONS(1),
    [sym_integer_literal] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_double_quote_escaped] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [sym_block_comment_content] = ACTIONS(1),
    [sym_block_comment_end] = ACTIONS(1),
  },
  [1] = {
    [sym_expression] = STATE(90),
    [sym_builtin] = STATE(52),
    [sym__operator_expression] = STATE(62),
    [sym_equal_expression] = STATE(64),
    [sym__application_expression] = STATE(64),
    [sym__import_expression] = STATE(67),
    [sym__selector_expression] = STATE(46),
    [sym_primitive_expression] = STATE(47),
    [sym_line_comment] = STATE(1),
    [sym_block_comment] = STATE(1),
    [sym_numeric_literal] = STATE(49),
    [sym_double_literal] = STATE(53),
    [sym_text_literal] = STATE(49),
    [sym_double_quote_literal] = STATE(50),
    [sym_non_empty_list_literal] = STATE(49),
    [sym_identifier] = STATE(49),
    [sym_label] = ACTIONS(7),
    [anon_sym_Natural_SLASHfold] = ACTIONS(9),
    [anon_sym_Natural_SLASHbuild] = ACTIONS(9),
    [anon_sym_Natural_SLASHisZero] = ACTIONS(9),
    [anon_sym_Natural_SLASHeven] = ACTIONS(9),
    [anon_sym_Natural_SLASHodd] = ACTIONS(9),
    [anon_sym_Natural_SLASHtoInteger] = ACTIONS(9),
    [anon_sym_Natural_SLASHshow] = ACTIONS(9),
    [anon_sym_Integer_SLASHtoDouble] = ACTIONS(9),
    [anon_sym_Integer_SLASHshow] = ACTIONS(9),
    [anon_sym_Integer_SLASHnegate] = ACTIONS(9),
    [anon_sym_Integer_SLASHclamp] = ACTIONS(9),
    [anon_sym_Natural_SLASHsubtract] = ACTIONS(9),
    [anon_sym_Double_SLASHshow] = ACTIONS(9),
    [anon_sym_List_SLASHbuild] = ACTIONS(9),
    [anon_sym_List_SLASHfold] = ACTIONS(9),
    [anon_sym_List_SLASHlength] = ACTIONS(9),
    [anon_sym_List_SLASHhead] = ACTIONS(9),
    [anon_sym_List_SLASHlast] = ACTIONS(9),
    [anon_sym_List_SLASHindexed] = ACTIONS(9),
    [anon_sym_List_SLASHreverse] = ACTIONS(9),
    [anon_sym_Text_SLASHshow] = ACTIONS(9),
    [anon_sym_Text_SLASHreplace] = ACTIONS(9),
    [anon_sym_Bool] = ACTIONS(9),
    [anon_sym_True] = ACTIONS(9),
    [anon_sym_False] = ACTIONS(9),
    [anon_sym_Optional] = ACTIONS(9),
    [anon_sym_None] = ACTIONS(9),
    [anon_sym_Natural] = ACTIONS(9),
    [anon_sym_Integer] = ACTIONS(9),
    [anon_sym_Double] = ACTIONS(9),
    [anon_sym_Text] = ACTIONS(9),
    [anon_sym_Date] = ACTIONS(9),
    [anon_sym_Time] = ACTIONS(9),
    [anon_sym_TimeZone] = ACTIONS(9),
    [anon_sym_List] = ACTIONS(9),
    [anon_sym_Type] = ACTIONS(9),
    [anon_sym_Kind] = ACTIONS(9),
    [anon_sym_Sort] = ACTIONS(9),
    [anon_sym_merge] = ACTIONS(11),
    [anon_sym_Some] = ACTIONS(13),
    [anon_sym_toMap] = ACTIONS(13),
    [anon_sym_showConstructor] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_line_comment_prefix] = ACTIONS(3),
    [sym_block_comment_open] = ACTIONS(5),
    [anon_sym_DASHInfinity] = ACTIONS(17),
    [anon_sym_Infinity] = ACTIONS(19),
    [anon_sym_NaN] = ACTIONS(19),
    [aux_sym_double_literal_token1] = ACTIONS(17),
    [sym_natural_literal] = ACTIONS(21),
    [sym_integer_literal] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
  },
  [2] = {
    [sym_expression] = STATE(83),
    [sym_builtin] = STATE(52),
    [sym__operator_expression] = STATE(62),
    [sym_equal_expression] = STATE(64),
    [sym__application_expression] = STATE(64),
    [sym__import_expression] = STATE(67),
    [sym__selector_expression] = STATE(46),
    [sym_primitive_expression] = STATE(47),
    [sym_line_comment] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym_numeric_literal] = STATE(49),
    [sym_double_literal] = STATE(53),
    [sym_text_literal] = STATE(49),
    [sym_double_quote_literal] = STATE(50),
    [sym_non_empty_list_literal] = STATE(49),
    [sym_identifier] = STATE(49),
    [sym_label] = ACTIONS(7),
    [anon_sym_Natural_SLASHfold] = ACTIONS(9),
    [anon_sym_Natural_SLASHbuild] = ACTIONS(9),
    [anon_sym_Natural_SLASHisZero] = ACTIONS(9),
    [anon_sym_Natural_SLASHeven] = ACTIONS(9),
    [anon_sym_Natural_SLASHodd] = ACTIONS(9),
    [anon_sym_Natural_SLASHtoInteger] = ACTIONS(9),
    [anon_sym_Natural_SLASHshow] = ACTIONS(9),
    [anon_sym_Integer_SLASHtoDouble] = ACTIONS(9),
    [anon_sym_Integer_SLASHshow] = ACTIONS(9),
    [anon_sym_Integer_SLASHnegate] = ACTIONS(9),
    [anon_sym_Integer_SLASHclamp] = ACTIONS(9),
    [anon_sym_Natural_SLASHsubtract] = ACTIONS(9),
    [anon_sym_Double_SLASHshow] = ACTIONS(9),
    [anon_sym_List_SLASHbuild] = ACTIONS(9),
    [anon_sym_List_SLASHfold] = ACTIONS(9),
    [anon_sym_List_SLASHlength] = ACTIONS(9),
    [anon_sym_List_SLASHhead] = ACTIONS(9),
    [anon_sym_List_SLASHlast] = ACTIONS(9),
    [anon_sym_List_SLASHindexed] = ACTIONS(9),
    [anon_sym_List_SLASHreverse] = ACTIONS(9),
    [anon_sym_Text_SLASHshow] = ACTIONS(9),
    [anon_sym_Text_SLASHreplace] = ACTIONS(9),
    [anon_sym_Bool] = ACTIONS(9),
    [anon_sym_True] = ACTIONS(9),
    [anon_sym_False] = ACTIONS(9),
    [anon_sym_Optional] = ACTIONS(9),
    [anon_sym_None] = ACTIONS(9),
    [anon_sym_Natural] = ACTIONS(9),
    [anon_sym_Integer] = ACTIONS(9),
    [anon_sym_Double] = ACTIONS(9),
    [anon_sym_Text] = ACTIONS(9),
    [anon_sym_Date] = ACTIONS(9),
    [anon_sym_Time] = ACTIONS(9),
    [anon_sym_TimeZone] = ACTIONS(9),
    [anon_sym_List] = ACTIONS(9),
    [anon_sym_Type] = ACTIONS(9),
    [anon_sym_Kind] = ACTIONS(9),
    [anon_sym_Sort] = ACTIONS(9),
    [anon_sym_merge] = ACTIONS(11),
    [anon_sym_Some] = ACTIONS(13),
    [anon_sym_toMap] = ACTIONS(13),
    [anon_sym_showConstructor] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_line_comment_prefix] = ACTIONS(3),
    [sym_block_comment_open] = ACTIONS(5),
    [anon_sym_DASHInfinity] = ACTIONS(17),
    [anon_sym_Infinity] = ACTIONS(19),
    [anon_sym_NaN] = ACTIONS(19),
    [aux_sym_double_literal_token1] = ACTIONS(17),
    [sym_natural_literal] = ACTIONS(21),
    [sym_integer_literal] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_RBRACK] = ACTIONS(27),
  },
  [3] = {
    [sym_expression] = STATE(76),
    [sym_builtin] = STATE(52),
    [sym__operator_expression] = STATE(62),
    [sym_equal_expression] = STATE(64),
    [sym__application_expression] = STATE(64),
    [sym__import_expression] = STATE(67),
    [sym__selector_expression] = STATE(46),
    [sym_primitive_expression] = STATE(47),
    [sym_line_comment] = STATE(3),
    [sym_block_comment] = STATE(3),
    [sym_numeric_literal] = STATE(49),
    [sym_double_literal] = STATE(53),
    [sym_text_literal] = STATE(49),
    [sym_double_quote_literal] = STATE(50),
    [sym_non_empty_list_literal] = STATE(49),
    [sym_identifier] = STATE(49),
    [sym_label] = ACTIONS(7),
    [anon_sym_Natural_SLASHfold] = ACTIONS(9),
    [anon_sym_Natural_SLASHbuild] = ACTIONS(9),
    [anon_sym_Natural_SLASHisZero] = ACTIONS(9),
    [anon_sym_Natural_SLASHeven] = ACTIONS(9),
    [anon_sym_Natural_SLASHodd] = ACTIONS(9),
    [anon_sym_Natural_SLASHtoInteger] = ACTIONS(9),
    [anon_sym_Natural_SLASHshow] = ACTIONS(9),
    [anon_sym_Integer_SLASHtoDouble] = ACTIONS(9),
    [anon_sym_Integer_SLASHshow] = ACTIONS(9),
    [anon_sym_Integer_SLASHnegate] = ACTIONS(9),
    [anon_sym_Integer_SLASHclamp] = ACTIONS(9),
    [anon_sym_Natural_SLASHsubtract] = ACTIONS(9),
    [anon_sym_Double_SLASHshow] = ACTIONS(9),
    [anon_sym_List_SLASHbuild] = ACTIONS(9),
    [anon_sym_List_SLASHfold] = ACTIONS(9),
    [anon_sym_List_SLASHlength] = ACTIONS(9),
    [anon_sym_List_SLASHhead] = ACTIONS(9),
    [anon_sym_List_SLASHlast] = ACTIONS(9),
    [anon_sym_List_SLASHindexed] = ACTIONS(9),
    [anon_sym_List_SLASHreverse] = ACTIONS(9),
    [anon_sym_Text_SLASHshow] = ACTIONS(9),
    [anon_sym_Text_SLASHreplace] = ACTIONS(9),
    [anon_sym_Bool] = ACTIONS(9),
    [anon_sym_True] = ACTIONS(9),
    [anon_sym_False] = ACTIONS(9),
    [anon_sym_Optional] = ACTIONS(9),
    [anon_sym_None] = ACTIONS(9),
    [anon_sym_Natural] = ACTIONS(9),
    [anon_sym_Integer] = ACTIONS(9),
    [anon_sym_Double] = ACTIONS(9),
    [anon_sym_Text] = ACTIONS(9),
    [anon_sym_Date] = ACTIONS(9),
    [anon_sym_Time] = ACTIONS(9),
    [anon_sym_TimeZone] = ACTIONS(9),
    [anon_sym_List] = ACTIONS(9),
    [anon_sym_Type] = ACTIONS(9),
    [anon_sym_Kind] = ACTIONS(9),
    [anon_sym_Sort] = ACTIONS(9),
    [anon_sym_merge] = ACTIONS(11),
    [anon_sym_Some] = ACTIONS(13),
    [anon_sym_toMap] = ACTIONS(13),
    [anon_sym_showConstructor] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_line_comment_prefix] = ACTIONS(3),
    [sym_block_comment_open] = ACTIONS(5),
    [anon_sym_DASHInfinity] = ACTIONS(17),
    [anon_sym_Infinity] = ACTIONS(19),
    [anon_sym_NaN] = ACTIONS(19),
    [aux_sym_double_literal_token1] = ACTIONS(17),
    [sym_natural_literal] = ACTIONS(21),
    [sym_integer_literal] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_COMMA] = ACTIONS(29),
  },
  [4] = {
    [sym_expression] = STATE(83),
    [sym_builtin] = STATE(52),
    [sym__operator_expression] = STATE(62),
    [sym_equal_expression] = STATE(64),
    [sym__application_expression] = STATE(64),
    [sym__import_expression] = STATE(67),
    [sym__selector_expression] = STATE(46),
    [sym_primitive_expression] = STATE(47),
    [sym_line_comment] = STATE(4),
    [sym_block_comment] = STATE(4),
    [sym_numeric_literal] = STATE(49),
    [sym_double_literal] = STATE(53),
    [sym_text_literal] = STATE(49),
    [sym_double_quote_literal] = STATE(50),
    [sym_non_empty_list_literal] = STATE(49),
    [sym_identifier] = STATE(49),
    [sym_label] = ACTIONS(7),
    [anon_sym_Natural_SLASHfold] = ACTIONS(9),
    [anon_sym_Natural_SLASHbuild] = ACTIONS(9),
    [anon_sym_Natural_SLASHisZero] = ACTIONS(9),
    [anon_sym_Natural_SLASHeven] = ACTIONS(9),
    [anon_sym_Natural_SLASHodd] = ACTIONS(9),
    [anon_sym_Natural_SLASHtoInteger] = ACTIONS(9),
    [anon_sym_Natural_SLASHshow] = ACTIONS(9),
    [anon_sym_Integer_SLASHtoDouble] = ACTIONS(9),
    [anon_sym_Integer_SLASHshow] = ACTIONS(9),
    [anon_sym_Integer_SLASHnegate] = ACTIONS(9),
    [anon_sym_Integer_SLASHclamp] = ACTIONS(9),
    [anon_sym_Natural_SLASHsubtract] = ACTIONS(9),
    [anon_sym_Double_SLASHshow] = ACTIONS(9),
    [anon_sym_List_SLASHbuild] = ACTIONS(9),
    [anon_sym_List_SLASHfold] = ACTIONS(9),
    [anon_sym_List_SLASHlength] = ACTIONS(9),
    [anon_sym_List_SLASHhead] = ACTIONS(9),
    [anon_sym_List_SLASHlast] = ACTIONS(9),
    [anon_sym_List_SLASHindexed] = ACTIONS(9),
    [anon_sym_List_SLASHreverse] = ACTIONS(9),
    [anon_sym_Text_SLASHshow] = ACTIONS(9),
    [anon_sym_Text_SLASHreplace] = ACTIONS(9),
    [anon_sym_Bool] = ACTIONS(9),
    [anon_sym_True] = ACTIONS(9),
    [anon_sym_False] = ACTIONS(9),
    [anon_sym_Optional] = ACTIONS(9),
    [anon_sym_None] = ACTIONS(9),
    [anon_sym_Natural] = ACTIONS(9),
    [anon_sym_Integer] = ACTIONS(9),
    [anon_sym_Double] = ACTIONS(9),
    [anon_sym_Text] = ACTIONS(9),
    [anon_sym_Date] = ACTIONS(9),
    [anon_sym_Time] = ACTIONS(9),
    [anon_sym_TimeZone] = ACTIONS(9),
    [anon_sym_List] = ACTIONS(9),
    [anon_sym_Type] = ACTIONS(9),
    [anon_sym_Kind] = ACTIONS(9),
    [anon_sym_Sort] = ACTIONS(9),
    [anon_sym_merge] = ACTIONS(11),
    [anon_sym_Some] = ACTIONS(13),
    [anon_sym_toMap] = ACTIONS(13),
    [anon_sym_showConstructor] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_line_comment_prefix] = ACTIONS(3),
    [sym_block_comment_open] = ACTIONS(5),
    [anon_sym_DASHInfinity] = ACTIONS(17),
    [anon_sym_Infinity] = ACTIONS(19),
    [anon_sym_NaN] = ACTIONS(19),
    [aux_sym_double_literal_token1] = ACTIONS(17),
    [sym_natural_literal] = ACTIONS(21),
    [sym_integer_literal] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_RBRACK] = ACTIONS(31),
  },
  [5] = {
    [sym_expression] = STATE(83),
    [sym_builtin] = STATE(52),
    [sym__operator_expression] = STATE(62),
    [sym_equal_expression] = STATE(64),
    [sym__application_expression] = STATE(64),
    [sym__import_expression] = STATE(67),
    [sym__selector_expression] = STATE(46),
    [sym_primitive_expression] = STATE(47),
    [sym_line_comment] = STATE(5),
    [sym_block_comment] = STATE(5),
    [sym_numeric_literal] = STATE(49),
    [sym_double_literal] = STATE(53),
    [sym_text_literal] = STATE(49),
    [sym_double_quote_literal] = STATE(50),
    [sym_non_empty_list_literal] = STATE(49),
    [sym_identifier] = STATE(49),
    [sym_label] = ACTIONS(7),
    [anon_sym_Natural_SLASHfold] = ACTIONS(9),
    [anon_sym_Natural_SLASHbuild] = ACTIONS(9),
    [anon_sym_Natural_SLASHisZero] = ACTIONS(9),
    [anon_sym_Natural_SLASHeven] = ACTIONS(9),
    [anon_sym_Natural_SLASHodd] = ACTIONS(9),
    [anon_sym_Natural_SLASHtoInteger] = ACTIONS(9),
    [anon_sym_Natural_SLASHshow] = ACTIONS(9),
    [anon_sym_Integer_SLASHtoDouble] = ACTIONS(9),
    [anon_sym_Integer_SLASHshow] = ACTIONS(9),
    [anon_sym_Integer_SLASHnegate] = ACTIONS(9),
    [anon_sym_Integer_SLASHclamp] = ACTIONS(9),
    [anon_sym_Natural_SLASHsubtract] = ACTIONS(9),
    [anon_sym_Double_SLASHshow] = ACTIONS(9),
    [anon_sym_List_SLASHbuild] = ACTIONS(9),
    [anon_sym_List_SLASHfold] = ACTIONS(9),
    [anon_sym_List_SLASHlength] = ACTIONS(9),
    [anon_sym_List_SLASHhead] = ACTIONS(9),
    [anon_sym_List_SLASHlast] = ACTIONS(9),
    [anon_sym_List_SLASHindexed] = ACTIONS(9),
    [anon_sym_List_SLASHreverse] = ACTIONS(9),
    [anon_sym_Text_SLASHshow] = ACTIONS(9),
    [anon_sym_Text_SLASHreplace] = ACTIONS(9),
    [anon_sym_Bool] = ACTIONS(9),
    [anon_sym_True] = ACTIONS(9),
    [anon_sym_False] = ACTIONS(9),
    [anon_sym_Optional] = ACTIONS(9),
    [anon_sym_None] = ACTIONS(9),
    [anon_sym_Natural] = ACTIONS(9),
    [anon_sym_Integer] = ACTIONS(9),
    [anon_sym_Double] = ACTIONS(9),
    [anon_sym_Text] = ACTIONS(9),
    [anon_sym_Date] = ACTIONS(9),
    [anon_sym_Time] = ACTIONS(9),
    [anon_sym_TimeZone] = ACTIONS(9),
    [anon_sym_List] = ACTIONS(9),
    [anon_sym_Type] = ACTIONS(9),
    [anon_sym_Kind] = ACTIONS(9),
    [anon_sym_Sort] = ACTIONS(9),
    [anon_sym_merge] = ACTIONS(11),
    [anon_sym_Some] = ACTIONS(13),
    [anon_sym_toMap] = ACTIONS(13),
    [anon_sym_showConstructor] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_line_comment_prefix] = ACTIONS(3),
    [sym_block_comment_open] = ACTIONS(5),
    [anon_sym_DASHInfinity] = ACTIONS(17),
    [anon_sym_Infinity] = ACTIONS(19),
    [anon_sym_NaN] = ACTIONS(19),
    [aux_sym_double_literal_token1] = ACTIONS(17),
    [sym_natural_literal] = ACTIONS(21),
    [sym_integer_literal] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_RBRACK] = ACTIONS(33),
  },
  [6] = {
    [sym_expression] = STATE(83),
    [sym_builtin] = STATE(52),
    [sym__operator_expression] = STATE(62),
    [sym_equal_expression] = STATE(64),
    [sym__application_expression] = STATE(64),
    [sym__import_expression] = STATE(67),
    [sym__selector_expression] = STATE(46),
    [sym_primitive_expression] = STATE(47),
    [sym_line_comment] = STATE(6),
    [sym_block_comment] = STATE(6),
    [sym_numeric_literal] = STATE(49),
    [sym_double_literal] = STATE(53),
    [sym_text_literal] = STATE(49),
    [sym_double_quote_literal] = STATE(50),
    [sym_non_empty_list_literal] = STATE(49),
    [sym_identifier] = STATE(49),
    [sym_label] = ACTIONS(7),
    [anon_sym_Natural_SLASHfold] = ACTIONS(9),
    [anon_sym_Natural_SLASHbuild] = ACTIONS(9),
    [anon_sym_Natural_SLASHisZero] = ACTIONS(9),
    [anon_sym_Natural_SLASHeven] = ACTIONS(9),
    [anon_sym_Natural_SLASHodd] = ACTIONS(9),
    [anon_sym_Natural_SLASHtoInteger] = ACTIONS(9),
    [anon_sym_Natural_SLASHshow] = ACTIONS(9),
    [anon_sym_Integer_SLASHtoDouble] = ACTIONS(9),
    [anon_sym_Integer_SLASHshow] = ACTIONS(9),
    [anon_sym_Integer_SLASHnegate] = ACTIONS(9),
    [anon_sym_Integer_SLASHclamp] = ACTIONS(9),
    [anon_sym_Natural_SLASHsubtract] = ACTIONS(9),
    [anon_sym_Double_SLASHshow] = ACTIONS(9),
    [anon_sym_List_SLASHbuild] = ACTIONS(9),
    [anon_sym_List_SLASHfold] = ACTIONS(9),
    [anon_sym_List_SLASHlength] = ACTIONS(9),
    [anon_sym_List_SLASHhead] = ACTIONS(9),
    [anon_sym_List_SLASHlast] = ACTIONS(9),
    [anon_sym_List_SLASHindexed] = ACTIONS(9),
    [anon_sym_List_SLASHreverse] = ACTIONS(9),
    [anon_sym_Text_SLASHshow] = ACTIONS(9),
    [anon_sym_Text_SLASHreplace] = ACTIONS(9),
    [anon_sym_Bool] = ACTIONS(9),
    [anon_sym_True] = ACTIONS(9),
    [anon_sym_False] = ACTIONS(9),
    [anon_sym_Optional] = ACTIONS(9),
    [anon_sym_None] = ACTIONS(9),
    [anon_sym_Natural] = ACTIONS(9),
    [anon_sym_Integer] = ACTIONS(9),
    [anon_sym_Double] = ACTIONS(9),
    [anon_sym_Text] = ACTIONS(9),
    [anon_sym_Date] = ACTIONS(9),
    [anon_sym_Time] = ACTIONS(9),
    [anon_sym_TimeZone] = ACTIONS(9),
    [anon_sym_List] = ACTIONS(9),
    [anon_sym_Type] = ACTIONS(9),
    [anon_sym_Kind] = ACTIONS(9),
    [anon_sym_Sort] = ACTIONS(9),
    [anon_sym_merge] = ACTIONS(11),
    [anon_sym_Some] = ACTIONS(13),
    [anon_sym_toMap] = ACTIONS(13),
    [anon_sym_showConstructor] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_line_comment_prefix] = ACTIONS(3),
    [sym_block_comment_open] = ACTIONS(5),
    [anon_sym_DASHInfinity] = ACTIONS(17),
    [anon_sym_Infinity] = ACTIONS(19),
    [anon_sym_NaN] = ACTIONS(19),
    [aux_sym_double_literal_token1] = ACTIONS(17),
    [sym_natural_literal] = ACTIONS(21),
    [sym_integer_literal] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_RBRACK] = ACTIONS(35),
  },
  [7] = {
    [sym_expression] = STATE(83),
    [sym_builtin] = STATE(52),
    [sym__operator_expression] = STATE(62),
    [sym_equal_expression] = STATE(64),
    [sym__application_expression] = STATE(64),
    [sym__import_expression] = STATE(67),
    [sym__selector_expression] = STATE(46),
    [sym_primitive_expression] = STATE(47),
    [sym_line_comment] = STATE(7),
    [sym_block_comment] = STATE(7),
    [sym_numeric_literal] = STATE(49),
    [sym_double_literal] = STATE(53),
    [sym_text_literal] = STATE(49),
    [sym_double_quote_literal] = STATE(50),
    [sym_non_empty_list_literal] = STATE(49),
    [sym_identifier] = STATE(49),
    [sym_label] = ACTIONS(7),
    [anon_sym_Natural_SLASHfold] = ACTIONS(9),
    [anon_sym_Natural_SLASHbuild] = ACTIONS(9),
    [anon_sym_Natural_SLASHisZero] = ACTIONS(9),
    [anon_sym_Natural_SLASHeven] = ACTIONS(9),
    [anon_sym_Natural_SLASHodd] = ACTIONS(9),
    [anon_sym_Natural_SLASHtoInteger] = ACTIONS(9),
    [anon_sym_Natural_SLASHshow] = ACTIONS(9),
    [anon_sym_Integer_SLASHtoDouble] = ACTIONS(9),
    [anon_sym_Integer_SLASHshow] = ACTIONS(9),
    [anon_sym_Integer_SLASHnegate] = ACTIONS(9),
    [anon_sym_Integer_SLASHclamp] = ACTIONS(9),
    [anon_sym_Natural_SLASHsubtract] = ACTIONS(9),
    [anon_sym_Double_SLASHshow] = ACTIONS(9),
    [anon_sym_List_SLASHbuild] = ACTIONS(9),
    [anon_sym_List_SLASHfold] = ACTIONS(9),
    [anon_sym_List_SLASHlength] = ACTIONS(9),
    [anon_sym_List_SLASHhead] = ACTIONS(9),
    [anon_sym_List_SLASHlast] = ACTIONS(9),
    [anon_sym_List_SLASHindexed] = ACTIONS(9),
    [anon_sym_List_SLASHreverse] = ACTIONS(9),
    [anon_sym_Text_SLASHshow] = ACTIONS(9),
    [anon_sym_Text_SLASHreplace] = ACTIONS(9),
    [anon_sym_Bool] = ACTIONS(9),
    [anon_sym_True] = ACTIONS(9),
    [anon_sym_False] = ACTIONS(9),
    [anon_sym_Optional] = ACTIONS(9),
    [anon_sym_None] = ACTIONS(9),
    [anon_sym_Natural] = ACTIONS(9),
    [anon_sym_Integer] = ACTIONS(9),
    [anon_sym_Double] = ACTIONS(9),
    [anon_sym_Text] = ACTIONS(9),
    [anon_sym_Date] = ACTIONS(9),
    [anon_sym_Time] = ACTIONS(9),
    [anon_sym_TimeZone] = ACTIONS(9),
    [anon_sym_List] = ACTIONS(9),
    [anon_sym_Type] = ACTIONS(9),
    [anon_sym_Kind] = ACTIONS(9),
    [anon_sym_Sort] = ACTIONS(9),
    [anon_sym_merge] = ACTIONS(11),
    [anon_sym_Some] = ACTIONS(13),
    [anon_sym_toMap] = ACTIONS(13),
    [anon_sym_showConstructor] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_line_comment_prefix] = ACTIONS(3),
    [sym_block_comment_open] = ACTIONS(5),
    [anon_sym_DASHInfinity] = ACTIONS(17),
    [anon_sym_Infinity] = ACTIONS(19),
    [anon_sym_NaN] = ACTIONS(19),
    [aux_sym_double_literal_token1] = ACTIONS(17),
    [sym_natural_literal] = ACTIONS(21),
    [sym_integer_literal] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_RBRACK] = ACTIONS(37),
  },
  [8] = {
    [sym_expression] = STATE(75),
    [sym_builtin] = STATE(52),
    [sym__operator_expression] = STATE(62),
    [sym_equal_expression] = STATE(64),
    [sym__application_expression] = STATE(64),
    [sym__import_expression] = STATE(67),
    [sym__selector_expression] = STATE(46),
    [sym_primitive_expression] = STATE(47),
    [sym_line_comment] = STATE(8),
    [sym_block_comment] = STATE(8),
    [sym_numeric_literal] = STATE(49),
    [sym_double_literal] = STATE(53),
    [sym_text_literal] = STATE(49),
    [sym_double_quote_literal] = STATE(50),
    [sym_non_empty_list_literal] = STATE(49),
    [sym_identifier] = STATE(49),
    [sym_label] = ACTIONS(7),
    [anon_sym_Natural_SLASHfold] = ACTIONS(9),
    [anon_sym_Natural_SLASHbuild] = ACTIONS(9),
    [anon_sym_Natural_SLASHisZero] = ACTIONS(9),
    [anon_sym_Natural_SLASHeven] = ACTIONS(9),
    [anon_sym_Natural_SLASHodd] = ACTIONS(9),
    [anon_sym_Natural_SLASHtoInteger] = ACTIONS(9),
    [anon_sym_Natural_SLASHshow] = ACTIONS(9),
    [anon_sym_Integer_SLASHtoDouble] = ACTIONS(9),
    [anon_sym_Integer_SLASHshow] = ACTIONS(9),
    [anon_sym_Integer_SLASHnegate] = ACTIONS(9),
    [anon_sym_Integer_SLASHclamp] = ACTIONS(9),
    [anon_sym_Natural_SLASHsubtract] = ACTIONS(9),
    [anon_sym_Double_SLASHshow] = ACTIONS(9),
    [anon_sym_List_SLASHbuild] = ACTIONS(9),
    [anon_sym_List_SLASHfold] = ACTIONS(9),
    [anon_sym_List_SLASHlength] = ACTIONS(9),
    [anon_sym_List_SLASHhead] = ACTIONS(9),
    [anon_sym_List_SLASHlast] = ACTIONS(9),
    [anon_sym_List_SLASHindexed] = ACTIONS(9),
    [anon_sym_List_SLASHreverse] = ACTIONS(9),
    [anon_sym_Text_SLASHshow] = ACTIONS(9),
    [anon_sym_Text_SLASHreplace] = ACTIONS(9),
    [anon_sym_Bool] = ACTIONS(9),
    [anon_sym_True] = ACTIONS(9),
    [anon_sym_False] = ACTIONS(9),
    [anon_sym_Optional] = ACTIONS(9),
    [anon_sym_None] = ACTIONS(9),
    [anon_sym_Natural] = ACTIONS(9),
    [anon_sym_Integer] = ACTIONS(9),
    [anon_sym_Double] = ACTIONS(9),
    [anon_sym_Text] = ACTIONS(9),
    [anon_sym_Date] = ACTIONS(9),
    [anon_sym_Time] = ACTIONS(9),
    [anon_sym_TimeZone] = ACTIONS(9),
    [anon_sym_List] = ACTIONS(9),
    [anon_sym_Type] = ACTIONS(9),
    [anon_sym_Kind] = ACTIONS(9),
    [anon_sym_Sort] = ACTIONS(9),
    [anon_sym_merge] = ACTIONS(11),
    [anon_sym_Some] = ACTIONS(13),
    [anon_sym_toMap] = ACTIONS(13),
    [anon_sym_showConstructor] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_line_comment_prefix] = ACTIONS(3),
    [sym_block_comment_open] = ACTIONS(5),
    [anon_sym_DASHInfinity] = ACTIONS(17),
    [anon_sym_Infinity] = ACTIONS(19),
    [anon_sym_NaN] = ACTIONS(19),
    [aux_sym_double_literal_token1] = ACTIONS(17),
    [sym_natural_literal] = ACTIONS(21),
    [sym_integer_literal] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_COMMA] = ACTIONS(39),
  },
  [9] = {
    [sym_expression] = STATE(83),
    [sym_builtin] = STATE(52),
    [sym__operator_expression] = STATE(62),
    [sym_equal_expression] = STATE(64),
    [sym__application_expression] = STATE(64),
    [sym__import_expression] = STATE(67),
    [sym__selector_expression] = STATE(46),
    [sym_primitive_expression] = STATE(47),
    [sym_line_comment] = STATE(9),
    [sym_block_comment] = STATE(9),
    [sym_numeric_literal] = STATE(49),
    [sym_double_literal] = STATE(53),
    [sym_text_literal] = STATE(49),
    [sym_double_quote_literal] = STATE(50),
    [sym_non_empty_list_literal] = STATE(49),
    [sym_identifier] = STATE(49),
    [sym_label] = ACTIONS(7),
    [anon_sym_Natural_SLASHfold] = ACTIONS(9),
    [anon_sym_Natural_SLASHbuild] = ACTIONS(9),
    [anon_sym_Natural_SLASHisZero] = ACTIONS(9),
    [anon_sym_Natural_SLASHeven] = ACTIONS(9),
    [anon_sym_Natural_SLASHodd] = ACTIONS(9),
    [anon_sym_Natural_SLASHtoInteger] = ACTIONS(9),
    [anon_sym_Natural_SLASHshow] = ACTIONS(9),
    [anon_sym_Integer_SLASHtoDouble] = ACTIONS(9),
    [anon_sym_Integer_SLASHshow] = ACTIONS(9),
    [anon_sym_Integer_SLASHnegate] = ACTIONS(9),
    [anon_sym_Integer_SLASHclamp] = ACTIONS(9),
    [anon_sym_Natural_SLASHsubtract] = ACTIONS(9),
    [anon_sym_Double_SLASHshow] = ACTIONS(9),
    [anon_sym_List_SLASHbuild] = ACTIONS(9),
    [anon_sym_List_SLASHfold] = ACTIONS(9),
    [anon_sym_List_SLASHlength] = ACTIONS(9),
    [anon_sym_List_SLASHhead] = ACTIONS(9),
    [anon_sym_List_SLASHlast] = ACTIONS(9),
    [anon_sym_List_SLASHindexed] = ACTIONS(9),
    [anon_sym_List_SLASHreverse] = ACTIONS(9),
    [anon_sym_Text_SLASHshow] = ACTIONS(9),
    [anon_sym_Text_SLASHreplace] = ACTIONS(9),
    [anon_sym_Bool] = ACTIONS(9),
    [anon_sym_True] = ACTIONS(9),
    [anon_sym_False] = ACTIONS(9),
    [anon_sym_Optional] = ACTIONS(9),
    [anon_sym_None] = ACTIONS(9),
    [anon_sym_Natural] = ACTIONS(9),
    [anon_sym_Integer] = ACTIONS(9),
    [anon_sym_Double] = ACTIONS(9),
    [anon_sym_Text] = ACTIONS(9),
    [anon_sym_Date] = ACTIONS(9),
    [anon_sym_Time] = ACTIONS(9),
    [anon_sym_TimeZone] = ACTIONS(9),
    [anon_sym_List] = ACTIONS(9),
    [anon_sym_Type] = ACTIONS(9),
    [anon_sym_Kind] = ACTIONS(9),
    [anon_sym_Sort] = ACTIONS(9),
    [anon_sym_merge] = ACTIONS(11),
    [anon_sym_Some] = ACTIONS(13),
    [anon_sym_toMap] = ACTIONS(13),
    [anon_sym_showConstructor] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_line_comment_prefix] = ACTIONS(3),
    [sym_block_comment_open] = ACTIONS(5),
    [anon_sym_DASHInfinity] = ACTIONS(17),
    [anon_sym_Infinity] = ACTIONS(19),
    [anon_sym_NaN] = ACTIONS(19),
    [aux_sym_double_literal_token1] = ACTIONS(17),
    [sym_natural_literal] = ACTIONS(21),
    [sym_integer_literal] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_RBRACK] = ACTIONS(41),
  },
  [10] = {
    [sym_expression] = STATE(86),
    [sym_builtin] = STATE(52),
    [sym__operator_expression] = STATE(62),
    [sym_equal_expression] = STATE(64),
    [sym__application_expression] = STATE(64),
    [sym__import_expression] = STATE(67),
    [sym__selector_expression] = STATE(46),
    [sym_primitive_expression] = STATE(47),
    [sym_line_comment] = STATE(10),
    [sym_block_comment] = STATE(10),
    [sym_numeric_literal] = STATE(49),
    [sym_double_literal] = STATE(53),
    [sym_text_literal] = STATE(49),
    [sym_double_quote_literal] = STATE(50),
    [sym_non_empty_list_literal] = STATE(49),
    [sym_identifier] = STATE(49),
    [sym_label] = ACTIONS(7),
    [anon_sym_Natural_SLASHfold] = ACTIONS(9),
    [anon_sym_Natural_SLASHbuild] = ACTIONS(9),
    [anon_sym_Natural_SLASHisZero] = ACTIONS(9),
    [anon_sym_Natural_SLASHeven] = ACTIONS(9),
    [anon_sym_Natural_SLASHodd] = ACTIONS(9),
    [anon_sym_Natural_SLASHtoInteger] = ACTIONS(9),
    [anon_sym_Natural_SLASHshow] = ACTIONS(9),
    [anon_sym_Integer_SLASHtoDouble] = ACTIONS(9),
    [anon_sym_Integer_SLASHshow] = ACTIONS(9),
    [anon_sym_Integer_SLASHnegate] = ACTIONS(9),
    [anon_sym_Integer_SLASHclamp] = ACTIONS(9),
    [anon_sym_Natural_SLASHsubtract] = ACTIONS(9),
    [anon_sym_Double_SLASHshow] = ACTIONS(9),
    [anon_sym_List_SLASHbuild] = ACTIONS(9),
    [anon_sym_List_SLASHfold] = ACTIONS(9),
    [anon_sym_List_SLASHlength] = ACTIONS(9),
    [anon_sym_List_SLASHhead] = ACTIONS(9),
    [anon_sym_List_SLASHlast] = ACTIONS(9),
    [anon_sym_List_SLASHindexed] = ACTIONS(9),
    [anon_sym_List_SLASHreverse] = ACTIONS(9),
    [anon_sym_Text_SLASHshow] = ACTIONS(9),
    [anon_sym_Text_SLASHreplace] = ACTIONS(9),
    [anon_sym_Bool] = ACTIONS(9),
    [anon_sym_True] = ACTIONS(9),
    [anon_sym_False] = ACTIONS(9),
    [anon_sym_Optional] = ACTIONS(9),
    [anon_sym_None] = ACTIONS(9),
    [anon_sym_Natural] = ACTIONS(9),
    [anon_sym_Integer] = ACTIONS(9),
    [anon_sym_Double] = ACTIONS(9),
    [anon_sym_Text] = ACTIONS(9),
    [anon_sym_Date] = ACTIONS(9),
    [anon_sym_Time] = ACTIONS(9),
    [anon_sym_TimeZone] = ACTIONS(9),
    [anon_sym_List] = ACTIONS(9),
    [anon_sym_Type] = ACTIONS(9),
    [anon_sym_Kind] = ACTIONS(9),
    [anon_sym_Sort] = ACTIONS(9),
    [anon_sym_merge] = ACTIONS(11),
    [anon_sym_Some] = ACTIONS(13),
    [anon_sym_toMap] = ACTIONS(13),
    [anon_sym_showConstructor] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_line_comment_prefix] = ACTIONS(3),
    [sym_block_comment_open] = ACTIONS(5),
    [anon_sym_DASHInfinity] = ACTIONS(17),
    [anon_sym_Infinity] = ACTIONS(19),
    [anon_sym_NaN] = ACTIONS(19),
    [aux_sym_double_literal_token1] = ACTIONS(17),
    [sym_natural_literal] = ACTIONS(21),
    [sym_integer_literal] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
  },
  [11] = {
    [sym_expression] = STATE(87),
    [sym_builtin] = STATE(52),
    [sym__operator_expression] = STATE(62),
    [sym_equal_expression] = STATE(64),
    [sym__application_expression] = STATE(64),
    [sym__import_expression] = STATE(67),
    [sym__selector_expression] = STATE(46),
    [sym_primitive_expression] = STATE(47),
    [sym_line_comment] = STATE(11),
    [sym_block_comment] = STATE(11),
    [sym_numeric_literal] = STATE(49),
    [sym_double_literal] = STATE(53),
    [sym_text_literal] = STATE(49),
    [sym_double_quote_literal] = STATE(50),
    [sym_non_empty_list_literal] = STATE(49),
    [sym_identifier] = STATE(49),
    [sym_label] = ACTIONS(7),
    [anon_sym_Natural_SLASHfold] = ACTIONS(9),
    [anon_sym_Natural_SLASHbuild] = ACTIONS(9),
    [anon_sym_Natural_SLASHisZero] = ACTIONS(9),
    [anon_sym_Natural_SLASHeven] = ACTIONS(9),
    [anon_sym_Natural_SLASHodd] = ACTIONS(9),
    [anon_sym_Natural_SLASHtoInteger] = ACTIONS(9),
    [anon_sym_Natural_SLASHshow] = ACTIONS(9),
    [anon_sym_Integer_SLASHtoDouble] = ACTIONS(9),
    [anon_sym_Integer_SLASHshow] = ACTIONS(9),
    [anon_sym_Integer_SLASHnegate] = ACTIONS(9),
    [anon_sym_Integer_SLASHclamp] = ACTIONS(9),
    [anon_sym_Natural_SLASHsubtract] = ACTIONS(9),
    [anon_sym_Double_SLASHshow] = ACTIONS(9),
    [anon_sym_List_SLASHbuild] = ACTIONS(9),
    [anon_sym_List_SLASHfold] = ACTIONS(9),
    [anon_sym_List_SLASHlength] = ACTIONS(9),
    [anon_sym_List_SLASHhead] = ACTIONS(9),
    [anon_sym_List_SLASHlast] = ACTIONS(9),
    [anon_sym_List_SLASHindexed] = ACTIONS(9),
    [anon_sym_List_SLASHreverse] = ACTIONS(9),
    [anon_sym_Text_SLASHshow] = ACTIONS(9),
    [anon_sym_Text_SLASHreplace] = ACTIONS(9),
    [anon_sym_Bool] = ACTIONS(9),
    [anon_sym_True] = ACTIONS(9),
    [anon_sym_False] = ACTIONS(9),
    [anon_sym_Optional] = ACTIONS(9),
    [anon_sym_None] = ACTIONS(9),
    [anon_sym_Natural] = ACTIONS(9),
    [anon_sym_Integer] = ACTIONS(9),
    [anon_sym_Double] = ACTIONS(9),
    [anon_sym_Text] = ACTIONS(9),
    [anon_sym_Date] = ACTIONS(9),
    [anon_sym_Time] = ACTIONS(9),
    [anon_sym_TimeZone] = ACTIONS(9),
    [anon_sym_List] = ACTIONS(9),
    [anon_sym_Type] = ACTIONS(9),
    [anon_sym_Kind] = ACTIONS(9),
    [anon_sym_Sort] = ACTIONS(9),
    [anon_sym_merge] = ACTIONS(11),
    [anon_sym_Some] = ACTIONS(13),
    [anon_sym_toMap] = ACTIONS(13),
    [anon_sym_showConstructor] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_line_comment_prefix] = ACTIONS(3),
    [sym_block_comment_open] = ACTIONS(5),
    [anon_sym_DASHInfinity] = ACTIONS(17),
    [anon_sym_Infinity] = ACTIONS(19),
    [anon_sym_NaN] = ACTIONS(19),
    [aux_sym_double_literal_token1] = ACTIONS(17),
    [sym_natural_literal] = ACTIONS(21),
    [sym_integer_literal] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
  },
  [12] = {
    [sym_expression] = STATE(89),
    [sym_builtin] = STATE(52),
    [sym__operator_expression] = STATE(62),
    [sym_equal_expression] = STATE(64),
    [sym__application_expression] = STATE(64),
    [sym__import_expression] = STATE(67),
    [sym__selector_expression] = STATE(46),
    [sym_primitive_expression] = STATE(47),
    [sym_line_comment] = STATE(12),
    [sym_block_comment] = STATE(12),
    [sym_numeric_literal] = STATE(49),
    [sym_double_literal] = STATE(53),
    [sym_text_literal] = STATE(49),
    [sym_double_quote_literal] = STATE(50),
    [sym_non_empty_list_literal] = STATE(49),
    [sym_identifier] = STATE(49),
    [sym_label] = ACTIONS(7),
    [anon_sym_Natural_SLASHfold] = ACTIONS(9),
    [anon_sym_Natural_SLASHbuild] = ACTIONS(9),
    [anon_sym_Natural_SLASHisZero] = ACTIONS(9),
    [anon_sym_Natural_SLASHeven] = ACTIONS(9),
    [anon_sym_Natural_SLASHodd] = ACTIONS(9),
    [anon_sym_Natural_SLASHtoInteger] = ACTIONS(9),
    [anon_sym_Natural_SLASHshow] = ACTIONS(9),
    [anon_sym_Integer_SLASHtoDouble] = ACTIONS(9),
    [anon_sym_Integer_SLASHshow] = ACTIONS(9),
    [anon_sym_Integer_SLASHnegate] = ACTIONS(9),
    [anon_sym_Integer_SLASHclamp] = ACTIONS(9),
    [anon_sym_Natural_SLASHsubtract] = ACTIONS(9),
    [anon_sym_Double_SLASHshow] = ACTIONS(9),
    [anon_sym_List_SLASHbuild] = ACTIONS(9),
    [anon_sym_List_SLASHfold] = ACTIONS(9),
    [anon_sym_List_SLASHlength] = ACTIONS(9),
    [anon_sym_List_SLASHhead] = ACTIONS(9),
    [anon_sym_List_SLASHlast] = ACTIONS(9),
    [anon_sym_List_SLASHindexed] = ACTIONS(9),
    [anon_sym_List_SLASHreverse] = ACTIONS(9),
    [anon_sym_Text_SLASHshow] = ACTIONS(9),
    [anon_sym_Text_SLASHreplace] = ACTIONS(9),
    [anon_sym_Bool] = ACTIONS(9),
    [anon_sym_True] = ACTIONS(9),
    [anon_sym_False] = ACTIONS(9),
    [anon_sym_Optional] = ACTIONS(9),
    [anon_sym_None] = ACTIONS(9),
    [anon_sym_Natural] = ACTIONS(9),
    [anon_sym_Integer] = ACTIONS(9),
    [anon_sym_Double] = ACTIONS(9),
    [anon_sym_Text] = ACTIONS(9),
    [anon_sym_Date] = ACTIONS(9),
    [anon_sym_Time] = ACTIONS(9),
    [anon_sym_TimeZone] = ACTIONS(9),
    [anon_sym_List] = ACTIONS(9),
    [anon_sym_Type] = ACTIONS(9),
    [anon_sym_Kind] = ACTIONS(9),
    [anon_sym_Sort] = ACTIONS(9),
    [anon_sym_merge] = ACTIONS(11),
    [anon_sym_Some] = ACTIONS(13),
    [anon_sym_toMap] = ACTIONS(13),
    [anon_sym_showConstructor] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_line_comment_prefix] = ACTIONS(3),
    [sym_block_comment_open] = ACTIONS(5),
    [anon_sym_DASHInfinity] = ACTIONS(17),
    [anon_sym_Infinity] = ACTIONS(19),
    [anon_sym_NaN] = ACTIONS(19),
    [aux_sym_double_literal_token1] = ACTIONS(17),
    [sym_natural_literal] = ACTIONS(21),
    [sym_integer_literal] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
  },
  [13] = {
    [sym_expression] = STATE(83),
    [sym_builtin] = STATE(52),
    [sym__operator_expression] = STATE(62),
    [sym_equal_expression] = STATE(64),
    [sym__application_expression] = STATE(64),
    [sym__import_expression] = STATE(67),
    [sym__selector_expression] = STATE(46),
    [sym_primitive_expression] = STATE(47),
    [sym_line_comment] = STATE(13),
    [sym_block_comment] = STATE(13),
    [sym_numeric_literal] = STATE(49),
    [sym_double_literal] = STATE(53),
    [sym_text_literal] = STATE(49),
    [sym_double_quote_literal] = STATE(50),
    [sym_non_empty_list_literal] = STATE(49),
    [sym_identifier] = STATE(49),
    [sym_label] = ACTIONS(7),
    [anon_sym_Natural_SLASHfold] = ACTIONS(9),
    [anon_sym_Natural_SLASHbuild] = ACTIONS(9),
    [anon_sym_Natural_SLASHisZero] = ACTIONS(9),
    [anon_sym_Natural_SLASHeven] = ACTIONS(9),
    [anon_sym_Natural_SLASHodd] = ACTIONS(9),
    [anon_sym_Natural_SLASHtoInteger] = ACTIONS(9),
    [anon_sym_Natural_SLASHshow] = ACTIONS(9),
    [anon_sym_Integer_SLASHtoDouble] = ACTIONS(9),
    [anon_sym_Integer_SLASHshow] = ACTIONS(9),
    [anon_sym_Integer_SLASHnegate] = ACTIONS(9),
    [anon_sym_Integer_SLASHclamp] = ACTIONS(9),
    [anon_sym_Natural_SLASHsubtract] = ACTIONS(9),
    [anon_sym_Double_SLASHshow] = ACTIONS(9),
    [anon_sym_List_SLASHbuild] = ACTIONS(9),
    [anon_sym_List_SLASHfold] = ACTIONS(9),
    [anon_sym_List_SLASHlength] = ACTIONS(9),
    [anon_sym_List_SLASHhead] = ACTIONS(9),
    [anon_sym_List_SLASHlast] = ACTIONS(9),
    [anon_sym_List_SLASHindexed] = ACTIONS(9),
    [anon_sym_List_SLASHreverse] = ACTIONS(9),
    [anon_sym_Text_SLASHshow] = ACTIONS(9),
    [anon_sym_Text_SLASHreplace] = ACTIONS(9),
    [anon_sym_Bool] = ACTIONS(9),
    [anon_sym_True] = ACTIONS(9),
    [anon_sym_False] = ACTIONS(9),
    [anon_sym_Optional] = ACTIONS(9),
    [anon_sym_None] = ACTIONS(9),
    [anon_sym_Natural] = ACTIONS(9),
    [anon_sym_Integer] = ACTIONS(9),
    [anon_sym_Double] = ACTIONS(9),
    [anon_sym_Text] = ACTIONS(9),
    [anon_sym_Date] = ACTIONS(9),
    [anon_sym_Time] = ACTIONS(9),
    [anon_sym_TimeZone] = ACTIONS(9),
    [anon_sym_List] = ACTIONS(9),
    [anon_sym_Type] = ACTIONS(9),
    [anon_sym_Kind] = ACTIONS(9),
    [anon_sym_Sort] = ACTIONS(9),
    [anon_sym_merge] = ACTIONS(11),
    [anon_sym_Some] = ACTIONS(13),
    [anon_sym_toMap] = ACTIONS(13),
    [anon_sym_showConstructor] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_line_comment_prefix] = ACTIONS(3),
    [sym_block_comment_open] = ACTIONS(5),
    [anon_sym_DASHInfinity] = ACTIONS(17),
    [anon_sym_Infinity] = ACTIONS(19),
    [anon_sym_NaN] = ACTIONS(19),
    [aux_sym_double_literal_token1] = ACTIONS(17),
    [sym_natural_literal] = ACTIONS(21),
    [sym_integer_literal] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
  },
  [14] = {
    [sym_expression] = STATE(70),
    [sym_builtin] = STATE(52),
    [sym__operator_expression] = STATE(62),
    [sym_equal_expression] = STATE(64),
    [sym__application_expression] = STATE(64),
    [sym__import_expression] = STATE(67),
    [sym__selector_expression] = STATE(46),
    [sym_primitive_expression] = STATE(47),
    [sym_line_comment] = STATE(14),
    [sym_block_comment] = STATE(14),
    [sym_numeric_literal] = STATE(49),
    [sym_double_literal] = STATE(53),
    [sym_text_literal] = STATE(49),
    [sym_double_quote_literal] = STATE(50),
    [sym_non_empty_list_literal] = STATE(49),
    [sym_identifier] = STATE(49),
    [sym_label] = ACTIONS(7),
    [anon_sym_Natural_SLASHfold] = ACTIONS(9),
    [anon_sym_Natural_SLASHbuild] = ACTIONS(9),
    [anon_sym_Natural_SLASHisZero] = ACTIONS(9),
    [anon_sym_Natural_SLASHeven] = ACTIONS(9),
    [anon_sym_Natural_SLASHodd] = ACTIONS(9),
    [anon_sym_Natural_SLASHtoInteger] = ACTIONS(9),
    [anon_sym_Natural_SLASHshow] = ACTIONS(9),
    [anon_sym_Integer_SLASHtoDouble] = ACTIONS(9),
    [anon_sym_Integer_SLASHshow] = ACTIONS(9),
    [anon_sym_Integer_SLASHnegate] = ACTIONS(9),
    [anon_sym_Integer_SLASHclamp] = ACTIONS(9),
    [anon_sym_Natural_SLASHsubtract] = ACTIONS(9),
    [anon_sym_Double_SLASHshow] = ACTIONS(9),
    [anon_sym_List_SLASHbuild] = ACTIONS(9),
    [anon_sym_List_SLASHfold] = ACTIONS(9),
    [anon_sym_List_SLASHlength] = ACTIONS(9),
    [anon_sym_List_SLASHhead] = ACTIONS(9),
    [anon_sym_List_SLASHlast] = ACTIONS(9),
    [anon_sym_List_SLASHindexed] = ACTIONS(9),
    [anon_sym_List_SLASHreverse] = ACTIONS(9),
    [anon_sym_Text_SLASHshow] = ACTIONS(9),
    [anon_sym_Text_SLASHreplace] = ACTIONS(9),
    [anon_sym_Bool] = ACTIONS(9),
    [anon_sym_True] = ACTIONS(9),
    [anon_sym_False] = ACTIONS(9),
    [anon_sym_Optional] = ACTIONS(9),
    [anon_sym_None] = ACTIONS(9),
    [anon_sym_Natural] = ACTIONS(9),
    [anon_sym_Integer] = ACTIONS(9),
    [anon_sym_Double] = ACTIONS(9),
    [anon_sym_Text] = ACTIONS(9),
    [anon_sym_Date] = ACTIONS(9),
    [anon_sym_Time] = ACTIONS(9),
    [anon_sym_TimeZone] = ACTIONS(9),
    [anon_sym_List] = ACTIONS(9),
    [anon_sym_Type] = ACTIONS(9),
    [anon_sym_Kind] = ACTIONS(9),
    [anon_sym_Sort] = ACTIONS(9),
    [anon_sym_merge] = ACTIONS(11),
    [anon_sym_Some] = ACTIONS(13),
    [anon_sym_toMap] = ACTIONS(13),
    [anon_sym_showConstructor] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_line_comment_prefix] = ACTIONS(3),
    [sym_block_comment_open] = ACTIONS(5),
    [anon_sym_DASHInfinity] = ACTIONS(17),
    [anon_sym_Infinity] = ACTIONS(19),
    [anon_sym_NaN] = ACTIONS(19),
    [aux_sym_double_literal_token1] = ACTIONS(17),
    [sym_natural_literal] = ACTIONS(21),
    [sym_integer_literal] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
  },
  [15] = {
    [sym_expression] = STATE(82),
    [sym_builtin] = STATE(52),
    [sym__operator_expression] = STATE(62),
    [sym_equal_expression] = STATE(64),
    [sym__application_expression] = STATE(64),
    [sym__import_expression] = STATE(67),
    [sym__selector_expression] = STATE(46),
    [sym_primitive_expression] = STATE(47),
    [sym_line_comment] = STATE(15),
    [sym_block_comment] = STATE(15),
    [sym_numeric_literal] = STATE(49),
    [sym_double_literal] = STATE(53),
    [sym_text_literal] = STATE(49),
    [sym_double_quote_literal] = STATE(50),
    [sym_non_empty_list_literal] = STATE(49),
    [sym_identifier] = STATE(49),
    [sym_label] = ACTIONS(7),
    [anon_sym_Natural_SLASHfold] = ACTIONS(9),
    [anon_sym_Natural_SLASHbuild] = ACTIONS(9),
    [anon_sym_Natural_SLASHisZero] = ACTIONS(9),
    [anon_sym_Natural_SLASHeven] = ACTIONS(9),
    [anon_sym_Natural_SLASHodd] = ACTIONS(9),
    [anon_sym_Natural_SLASHtoInteger] = ACTIONS(9),
    [anon_sym_Natural_SLASHshow] = ACTIONS(9),
    [anon_sym_Integer_SLASHtoDouble] = ACTIONS(9),
    [anon_sym_Integer_SLASHshow] = ACTIONS(9),
    [anon_sym_Integer_SLASHnegate] = ACTIONS(9),
    [anon_sym_Integer_SLASHclamp] = ACTIONS(9),
    [anon_sym_Natural_SLASHsubtract] = ACTIONS(9),
    [anon_sym_Double_SLASHshow] = ACTIONS(9),
    [anon_sym_List_SLASHbuild] = ACTIONS(9),
    [anon_sym_List_SLASHfold] = ACTIONS(9),
    [anon_sym_List_SLASHlength] = ACTIONS(9),
    [anon_sym_List_SLASHhead] = ACTIONS(9),
    [anon_sym_List_SLASHlast] = ACTIONS(9),
    [anon_sym_List_SLASHindexed] = ACTIONS(9),
    [anon_sym_List_SLASHreverse] = ACTIONS(9),
    [anon_sym_Text_SLASHshow] = ACTIONS(9),
    [anon_sym_Text_SLASHreplace] = ACTIONS(9),
    [anon_sym_Bool] = ACTIONS(9),
    [anon_sym_True] = ACTIONS(9),
    [anon_sym_False] = ACTIONS(9),
    [anon_sym_Optional] = ACTIONS(9),
    [anon_sym_None] = ACTIONS(9),
    [anon_sym_Natural] = ACTIONS(9),
    [anon_sym_Integer] = ACTIONS(9),
    [anon_sym_Double] = ACTIONS(9),
    [anon_sym_Text] = ACTIONS(9),
    [anon_sym_Date] = ACTIONS(9),
    [anon_sym_Time] = ACTIONS(9),
    [anon_sym_TimeZone] = ACTIONS(9),
    [anon_sym_List] = ACTIONS(9),
    [anon_sym_Type] = ACTIONS(9),
    [anon_sym_Kind] = ACTIONS(9),
    [anon_sym_Sort] = ACTIONS(9),
    [anon_sym_merge] = ACTIONS(11),
    [anon_sym_Some] = ACTIONS(13),
    [anon_sym_toMap] = ACTIONS(13),
    [anon_sym_showConstructor] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_line_comment_prefix] = ACTIONS(3),
    [sym_block_comment_open] = ACTIONS(5),
    [anon_sym_DASHInfinity] = ACTIONS(17),
    [anon_sym_Infinity] = ACTIONS(19),
    [anon_sym_NaN] = ACTIONS(19),
    [aux_sym_double_literal_token1] = ACTIONS(17),
    [sym_natural_literal] = ACTIONS(21),
    [sym_integer_literal] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
  },
  [16] = {
    [sym_expression] = STATE(77),
    [sym_builtin] = STATE(52),
    [sym__operator_expression] = STATE(62),
    [sym_equal_expression] = STATE(64),
    [sym__application_expression] = STATE(64),
    [sym__import_expression] = STATE(67),
    [sym__selector_expression] = STATE(46),
    [sym_primitive_expression] = STATE(47),
    [sym_line_comment] = STATE(16),
    [sym_block_comment] = STATE(16),
    [sym_numeric_literal] = STATE(49),
    [sym_double_literal] = STATE(53),
    [sym_text_literal] = STATE(49),
    [sym_double_quote_literal] = STATE(50),
    [sym_non_empty_list_literal] = STATE(49),
    [sym_identifier] = STATE(49),
    [sym_label] = ACTIONS(7),
    [anon_sym_Natural_SLASHfold] = ACTIONS(9),
    [anon_sym_Natural_SLASHbuild] = ACTIONS(9),
    [anon_sym_Natural_SLASHisZero] = ACTIONS(9),
    [anon_sym_Natural_SLASHeven] = ACTIONS(9),
    [anon_sym_Natural_SLASHodd] = ACTIONS(9),
    [anon_sym_Natural_SLASHtoInteger] = ACTIONS(9),
    [anon_sym_Natural_SLASHshow] = ACTIONS(9),
    [anon_sym_Integer_SLASHtoDouble] = ACTIONS(9),
    [anon_sym_Integer_SLASHshow] = ACTIONS(9),
    [anon_sym_Integer_SLASHnegate] = ACTIONS(9),
    [anon_sym_Integer_SLASHclamp] = ACTIONS(9),
    [anon_sym_Natural_SLASHsubtract] = ACTIONS(9),
    [anon_sym_Double_SLASHshow] = ACTIONS(9),
    [anon_sym_List_SLASHbuild] = ACTIONS(9),
    [anon_sym_List_SLASHfold] = ACTIONS(9),
    [anon_sym_List_SLASHlength] = ACTIONS(9),
    [anon_sym_List_SLASHhead] = ACTIONS(9),
    [anon_sym_List_SLASHlast] = ACTIONS(9),
    [anon_sym_List_SLASHindexed] = ACTIONS(9),
    [anon_sym_List_SLASHreverse] = ACTIONS(9),
    [anon_sym_Text_SLASHshow] = ACTIONS(9),
    [anon_sym_Text_SLASHreplace] = ACTIONS(9),
    [anon_sym_Bool] = ACTIONS(9),
    [anon_sym_True] = ACTIONS(9),
    [anon_sym_False] = ACTIONS(9),
    [anon_sym_Optional] = ACTIONS(9),
    [anon_sym_None] = ACTIONS(9),
    [anon_sym_Natural] = ACTIONS(9),
    [anon_sym_Integer] = ACTIONS(9),
    [anon_sym_Double] = ACTIONS(9),
    [anon_sym_Text] = ACTIONS(9),
    [anon_sym_Date] = ACTIONS(9),
    [anon_sym_Time] = ACTIONS(9),
    [anon_sym_TimeZone] = ACTIONS(9),
    [anon_sym_List] = ACTIONS(9),
    [anon_sym_Type] = ACTIONS(9),
    [anon_sym_Kind] = ACTIONS(9),
    [anon_sym_Sort] = ACTIONS(9),
    [anon_sym_merge] = ACTIONS(11),
    [anon_sym_Some] = ACTIONS(13),
    [anon_sym_toMap] = ACTIONS(13),
    [anon_sym_showConstructor] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_line_comment_prefix] = ACTIONS(3),
    [sym_block_comment_open] = ACTIONS(5),
    [anon_sym_DASHInfinity] = ACTIONS(17),
    [anon_sym_Infinity] = ACTIONS(19),
    [anon_sym_NaN] = ACTIONS(19),
    [aux_sym_double_literal_token1] = ACTIONS(17),
    [sym_natural_literal] = ACTIONS(21),
    [sym_integer_literal] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
  },
  [17] = {
    [sym_builtin] = STATE(52),
    [sym__operator_expression] = STATE(58),
    [sym_equal_expression] = STATE(64),
    [sym__application_expression] = STATE(64),
    [sym__import_expression] = STATE(67),
    [sym__selector_expression] = STATE(46),
    [sym_primitive_expression] = STATE(47),
    [sym_line_comment] = STATE(17),
    [sym_block_comment] = STATE(17),
    [sym_numeric_literal] = STATE(49),
    [sym_double_literal] = STATE(53),
    [sym_text_literal] = STATE(49),
    [sym_double_quote_literal] = STATE(50),
    [sym_non_empty_list_literal] = STATE(49),
    [sym_identifier] = STATE(49),
    [sym_label] = ACTIONS(7),
    [anon_sym_Natural_SLASHfold] = ACTIONS(9),
    [anon_sym_Natural_SLASHbuild] = ACTIONS(9),
    [anon_sym_Natural_SLASHisZero] = ACTIONS(9),
    [anon_sym_Natural_SLASHeven] = ACTIONS(9),
    [anon_sym_Natural_SLASHodd] = ACTIONS(9),
    [anon_sym_Natural_SLASHtoInteger] = ACTIONS(9),
    [anon_sym_Natural_SLASHshow] = ACTIONS(9),
    [anon_sym_Integer_SLASHtoDouble] = ACTIONS(9),
    [anon_sym_Integer_SLASHshow] = ACTIONS(9),
    [anon_sym_Integer_SLASHnegate] = ACTIONS(9),
    [anon_sym_Integer_SLASHclamp] = ACTIONS(9),
    [anon_sym_Natural_SLASHsubtract] = ACTIONS(9),
    [anon_sym_Double_SLASHshow] = ACTIONS(9),
    [anon_sym_List_SLASHbuild] = ACTIONS(9),
    [anon_sym_List_SLASHfold] = ACTIONS(9),
    [anon_sym_List_SLASHlength] = ACTIONS(9),
    [anon_sym_List_SLASHhead] = ACTIONS(9),
    [anon_sym_List_SLASHlast] = ACTIONS(9),
    [anon_sym_List_SLASHindexed] = ACTIONS(9),
    [anon_sym_List_SLASHreverse] = ACTIONS(9),
    [anon_sym_Text_SLASHshow] = ACTIONS(9),
    [anon_sym_Text_SLASHreplace] = ACTIONS(9),
    [anon_sym_Bool] = ACTIONS(9),
    [anon_sym_True] = ACTIONS(9),
    [anon_sym_False] = ACTIONS(9),
    [anon_sym_Optional] = ACTIONS(9),
    [anon_sym_None] = ACTIONS(9),
    [anon_sym_Natural] = ACTIONS(9),
    [anon_sym_Integer] = ACTIONS(9),
    [anon_sym_Double] = ACTIONS(9),
    [anon_sym_Text] = ACTIONS(9),
    [anon_sym_Date] = ACTIONS(9),
    [anon_sym_Time] = ACTIONS(9),
    [anon_sym_TimeZone] = ACTIONS(9),
    [anon_sym_List] = ACTIONS(9),
    [anon_sym_Type] = ACTIONS(9),
    [anon_sym_Kind] = ACTIONS(9),
    [anon_sym_Sort] = ACTIONS(9),
    [anon_sym_merge] = ACTIONS(11),
    [anon_sym_Some] = ACTIONS(13),
    [anon_sym_toMap] = ACTIONS(13),
    [anon_sym_showConstructor] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_line_comment_prefix] = ACTIONS(3),
    [sym_block_comment_open] = ACTIONS(5),
    [anon_sym_DASHInfinity] = ACTIONS(17),
    [anon_sym_Infinity] = ACTIONS(19),
    [anon_sym_NaN] = ACTIONS(19),
    [aux_sym_double_literal_token1] = ACTIONS(17),
    [sym_natural_literal] = ACTIONS(21),
    [sym_integer_literal] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
  },
  [18] = {
    [sym_builtin] = STATE(52),
    [sym__import_expression] = STATE(59),
    [sym__selector_expression] = STATE(46),
    [sym_primitive_expression] = STATE(47),
    [sym_line_comment] = STATE(18),
    [sym_block_comment] = STATE(18),
    [sym_numeric_literal] = STATE(49),
    [sym_double_literal] = STATE(53),
    [sym_text_literal] = STATE(49),
    [sym_double_quote_literal] = STATE(50),
    [sym_non_empty_list_literal] = STATE(49),
    [sym_identifier] = STATE(49),
    [sym_label] = ACTIONS(7),
    [anon_sym_Natural_SLASHfold] = ACTIONS(9),
    [anon_sym_Natural_SLASHbuild] = ACTIONS(9),
    [anon_sym_Natural_SLASHisZero] = ACTIONS(9),
    [anon_sym_Natural_SLASHeven] = ACTIONS(9),
    [anon_sym_Natural_SLASHodd] = ACTIONS(9),
    [anon_sym_Natural_SLASHtoInteger] = ACTIONS(9),
    [anon_sym_Natural_SLASHshow] = ACTIONS(9),
    [anon_sym_Integer_SLASHtoDouble] = ACTIONS(9),
    [anon_sym_Integer_SLASHshow] = ACTIONS(9),
    [anon_sym_Integer_SLASHnegate] = ACTIONS(9),
    [anon_sym_Integer_SLASHclamp] = ACTIONS(9),
    [anon_sym_Natural_SLASHsubtract] = ACTIONS(9),
    [anon_sym_Double_SLASHshow] = ACTIONS(9),
    [anon_sym_List_SLASHbuild] = ACTIONS(9),
    [anon_sym_List_SLASHfold] = ACTIONS(9),
    [anon_sym_List_SLASHlength] = ACTIONS(9),
    [anon_sym_List_SLASHhead] = ACTIONS(9),
    [anon_sym_List_SLASHlast] = ACTIONS(9),
    [anon_sym_List_SLASHindexed] = ACTIONS(9),
    [anon_sym_List_SLASHreverse] = ACTIONS(9),
    [anon_sym_Text_SLASHshow] = ACTIONS(9),
    [anon_sym_Text_SLASHreplace] = ACTIONS(9),
    [anon_sym_Bool] = ACTIONS(9),
    [anon_sym_True] = ACTIONS(9),
    [anon_sym_False] = ACTIONS(9),
    [anon_sym_Optional] = ACTIONS(9),
    [anon_sym_None] = ACTIONS(9),
    [anon_sym_Natural] = ACTIONS(9),
    [anon_sym_Integer] = ACTIONS(9),
    [anon_sym_Double] = ACTIONS(9),
    [anon_sym_Text] = ACTIONS(9),
    [anon_sym_Date] = ACTIONS(9),
    [anon_sym_Time] = ACTIONS(9),
    [anon_sym_TimeZone] = ACTIONS(9),
    [anon_sym_List] = ACTIONS(9),
    [anon_sym_Type] = ACTIONS(9),
    [anon_sym_Kind] = ACTIONS(9),
    [anon_sym_Sort] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_line_comment_prefix] = ACTIONS(3),
    [sym_block_comment_open] = ACTIONS(5),
    [anon_sym_DASHInfinity] = ACTIONS(17),
    [anon_sym_Infinity] = ACTIONS(19),
    [anon_sym_NaN] = ACTIONS(19),
    [aux_sym_double_literal_token1] = ACTIONS(17),
    [sym_natural_literal] = ACTIONS(21),
    [sym_integer_literal] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
  },
  [19] = {
    [sym_builtin] = STATE(28),
    [sym__import_expression] = STATE(18),
    [sym__selector_expression] = STATE(27),
    [sym_primitive_expression] = STATE(24),
    [sym_line_comment] = STATE(19),
    [sym_block_comment] = STATE(19),
    [sym_numeric_literal] = STATE(26),
    [sym_double_literal] = STATE(29),
    [sym_text_literal] = STATE(26),
    [sym_double_quote_literal] = STATE(25),
    [sym_non_empty_list_literal] = STATE(26),
    [sym_identifier] = STATE(26),
    [sym_label] = ACTIONS(43),
    [anon_sym_Natural_SLASHfold] = ACTIONS(45),
    [anon_sym_Natural_SLASHbuild] = ACTIONS(45),
    [anon_sym_Natural_SLASHisZero] = ACTIONS(45),
    [anon_sym_Natural_SLASHeven] = ACTIONS(45),
    [anon_sym_Natural_SLASHodd] = ACTIONS(45),
    [anon_sym_Natural_SLASHtoInteger] = ACTIONS(45),
    [anon_sym_Natural_SLASHshow] = ACTIONS(45),
    [anon_sym_Integer_SLASHtoDouble] = ACTIONS(45),
    [anon_sym_Integer_SLASHshow] = ACTIONS(45),
    [anon_sym_Integer_SLASHnegate] = ACTIONS(45),
    [anon_sym_Integer_SLASHclamp] = ACTIONS(45),
    [anon_sym_Natural_SLASHsubtract] = ACTIONS(45),
    [anon_sym_Double_SLASHshow] = ACTIONS(45),
    [anon_sym_List_SLASHbuild] = ACTIONS(45),
    [anon_sym_List_SLASHfold] = ACTIONS(45),
    [anon_sym_List_SLASHlength] = ACTIONS(45),
    [anon_sym_List_SLASHhead] = ACTIONS(45),
    [anon_sym_List_SLASHlast] = ACTIONS(45),
    [anon_sym_List_SLASHindexed] = ACTIONS(45),
    [anon_sym_List_SLASHreverse] = ACTIONS(45),
    [anon_sym_Text_SLASHshow] = ACTIONS(45),
    [anon_sym_Text_SLASHreplace] = ACTIONS(45),
    [anon_sym_Bool] = ACTIONS(45),
    [anon_sym_True] = ACTIONS(45),
    [anon_sym_False] = ACTIONS(45),
    [anon_sym_Optional] = ACTIONS(45),
    [anon_sym_None] = ACTIONS(45),
    [anon_sym_Natural] = ACTIONS(45),
    [anon_sym_Integer] = ACTIONS(45),
    [anon_sym_Double] = ACTIONS(45),
    [anon_sym_Text] = ACTIONS(45),
    [anon_sym_Date] = ACTIONS(45),
    [anon_sym_Time] = ACTIONS(45),
    [anon_sym_TimeZone] = ACTIONS(45),
    [anon_sym_List] = ACTIONS(45),
    [anon_sym_Type] = ACTIONS(45),
    [anon_sym_Kind] = ACTIONS(45),
    [anon_sym_Sort] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(47),
    [sym_line_comment_prefix] = ACTIONS(3),
    [sym_block_comment_open] = ACTIONS(5),
    [anon_sym_DASHInfinity] = ACTIONS(49),
    [anon_sym_Infinity] = ACTIONS(51),
    [anon_sym_NaN] = ACTIONS(51),
    [aux_sym_double_literal_token1] = ACTIONS(49),
    [sym_natural_literal] = ACTIONS(53),
    [sym_integer_literal] = ACTIONS(53),
    [anon_sym_DQUOTE] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
  },
  [20] = {
    [sym_builtin] = STATE(52),
    [sym__import_expression] = STATE(65),
    [sym__selector_expression] = STATE(46),
    [sym_primitive_expression] = STATE(47),
    [sym_line_comment] = STATE(20),
    [sym_block_comment] = STATE(20),
    [sym_numeric_literal] = STATE(49),
    [sym_double_literal] = STATE(53),
    [sym_text_literal] = STATE(49),
    [sym_double_quote_literal] = STATE(50),
    [sym_non_empty_list_literal] = STATE(49),
    [sym_identifier] = STATE(49),
    [sym_label] = ACTIONS(7),
    [anon_sym_Natural_SLASHfold] = ACTIONS(9),
    [anon_sym_Natural_SLASHbuild] = ACTIONS(9),
    [anon_sym_Natural_SLASHisZero] = ACTIONS(9),
    [anon_sym_Natural_SLASHeven] = ACTIONS(9),
    [anon_sym_Natural_SLASHodd] = ACTIONS(9),
    [anon_sym_Natural_SLASHtoInteger] = ACTIONS(9),
    [anon_sym_Natural_SLASHshow] = ACTIONS(9),
    [anon_sym_Integer_SLASHtoDouble] = ACTIONS(9),
    [anon_sym_Integer_SLASHshow] = ACTIONS(9),
    [anon_sym_Integer_SLASHnegate] = ACTIONS(9),
    [anon_sym_Integer_SLASHclamp] = ACTIONS(9),
    [anon_sym_Natural_SLASHsubtract] = ACTIONS(9),
    [anon_sym_Double_SLASHshow] = ACTIONS(9),
    [anon_sym_List_SLASHbuild] = ACTIONS(9),
    [anon_sym_List_SLASHfold] = ACTIONS(9),
    [anon_sym_List_SLASHlength] = ACTIONS(9),
    [anon_sym_List_SLASHhead] = ACTIONS(9),
    [anon_sym_List_SLASHlast] = ACTIONS(9),
    [anon_sym_List_SLASHindexed] = ACTIONS(9),
    [anon_sym_List_SLASHreverse] = ACTIONS(9),
    [anon_sym_Text_SLASHshow] = ACTIONS(9),
    [anon_sym_Text_SLASHreplace] = ACTIONS(9),
    [anon_sym_Bool] = ACTIONS(9),
    [anon_sym_True] = ACTIONS(9),
    [anon_sym_False] = ACTIONS(9),
    [anon_sym_Optional] = ACTIONS(9),
    [anon_sym_None] = ACTIONS(9),
    [anon_sym_Natural] = ACTIONS(9),
    [anon_sym_Integer] = ACTIONS(9),
    [anon_sym_Double] = ACTIONS(9),
    [anon_sym_Text] = ACTIONS(9),
    [anon_sym_Date] = ACTIONS(9),
    [anon_sym_Time] = ACTIONS(9),
    [anon_sym_TimeZone] = ACTIONS(9),
    [anon_sym_List] = ACTIONS(9),
    [anon_sym_Type] = ACTIONS(9),
    [anon_sym_Kind] = ACTIONS(9),
    [anon_sym_Sort] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_line_comment_prefix] = ACTIONS(3),
    [sym_block_comment_open] = ACTIONS(5),
    [anon_sym_DASHInfinity] = ACTIONS(17),
    [anon_sym_Infinity] = ACTIONS(19),
    [anon_sym_NaN] = ACTIONS(19),
    [aux_sym_double_literal_token1] = ACTIONS(17),
    [sym_natural_literal] = ACTIONS(21),
    [sym_integer_literal] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
  },
  [21] = {
    [sym_builtin] = STATE(52),
    [sym__selector_expression] = STATE(66),
    [sym_primitive_expression] = STATE(47),
    [sym_line_comment] = STATE(21),
    [sym_block_comment] = STATE(21),
    [sym_numeric_literal] = STATE(49),
    [sym_double_literal] = STATE(53),
    [sym_text_literal] = STATE(49),
    [sym_double_quote_literal] = STATE(50),
    [sym_non_empty_list_literal] = STATE(49),
    [sym_identifier] = STATE(49),
    [sym_label] = ACTIONS(7),
    [anon_sym_Natural_SLASHfold] = ACTIONS(9),
    [anon_sym_Natural_SLASHbuild] = ACTIONS(9),
    [anon_sym_Natural_SLASHisZero] = ACTIONS(9),
    [anon_sym_Natural_SLASHeven] = ACTIONS(9),
    [anon_sym_Natural_SLASHodd] = ACTIONS(9),
    [anon_sym_Natural_SLASHtoInteger] = ACTIONS(9),
    [anon_sym_Natural_SLASHshow] = ACTIONS(9),
    [anon_sym_Integer_SLASHtoDouble] = ACTIONS(9),
    [anon_sym_Integer_SLASHshow] = ACTIONS(9),
    [anon_sym_Integer_SLASHnegate] = ACTIONS(9),
    [anon_sym_Integer_SLASHclamp] = ACTIONS(9),
    [anon_sym_Natural_SLASHsubtract] = ACTIONS(9),
    [anon_sym_Double_SLASHshow] = ACTIONS(9),
    [anon_sym_List_SLASHbuild] = ACTIONS(9),
    [anon_sym_List_SLASHfold] = ACTIONS(9),
    [anon_sym_List_SLASHlength] = ACTIONS(9),
    [anon_sym_List_SLASHhead] = ACTIONS(9),
    [anon_sym_List_SLASHlast] = ACTIONS(9),
    [anon_sym_List_SLASHindexed] = ACTIONS(9),
    [anon_sym_List_SLASHreverse] = ACTIONS(9),
    [anon_sym_Text_SLASHshow] = ACTIONS(9),
    [anon_sym_Text_SLASHreplace] = ACTIONS(9),
    [anon_sym_Bool] = ACTIONS(9),
    [anon_sym_True] = ACTIONS(9),
    [anon_sym_False] = ACTIONS(9),
    [anon_sym_Optional] = ACTIONS(9),
    [anon_sym_None] = ACTIONS(9),
    [anon_sym_Natural] = ACTIONS(9),
    [anon_sym_Integer] = ACTIONS(9),
    [anon_sym_Double] = ACTIONS(9),
    [anon_sym_Text] = ACTIONS(9),
    [anon_sym_Date] = ACTIONS(9),
    [anon_sym_Time] = ACTIONS(9),
    [anon_sym_TimeZone] = ACTIONS(9),
    [anon_sym_List] = ACTIONS(9),
    [anon_sym_Type] = ACTIONS(9),
    [anon_sym_Kind] = ACTIONS(9),
    [anon_sym_Sort] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_line_comment_prefix] = ACTIONS(3),
    [sym_block_comment_open] = ACTIONS(5),
    [anon_sym_DASHInfinity] = ACTIONS(17),
    [anon_sym_Infinity] = ACTIONS(19),
    [anon_sym_NaN] = ACTIONS(19),
    [aux_sym_double_literal_token1] = ACTIONS(17),
    [sym_natural_literal] = ACTIONS(21),
    [sym_integer_literal] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
  },
  [22] = {
    [sym_builtin] = STATE(28),
    [sym__selector_expression] = STATE(40),
    [sym_primitive_expression] = STATE(24),
    [sym_line_comment] = STATE(22),
    [sym_block_comment] = STATE(22),
    [sym_numeric_literal] = STATE(26),
    [sym_double_literal] = STATE(29),
    [sym_text_literal] = STATE(26),
    [sym_double_quote_literal] = STATE(25),
    [sym_non_empty_list_literal] = STATE(26),
    [sym_identifier] = STATE(26),
    [sym_label] = ACTIONS(43),
    [anon_sym_Natural_SLASHfold] = ACTIONS(45),
    [anon_sym_Natural_SLASHbuild] = ACTIONS(45),
    [anon_sym_Natural_SLASHisZero] = ACTIONS(45),
    [anon_sym_Natural_SLASHeven] = ACTIONS(45),
    [anon_sym_Natural_SLASHodd] = ACTIONS(45),
    [anon_sym_Natural_SLASHtoInteger] = ACTIONS(45),
    [anon_sym_Natural_SLASHshow] = ACTIONS(45),
    [anon_sym_Integer_SLASHtoDouble] = ACTIONS(45),
    [anon_sym_Integer_SLASHshow] = ACTIONS(45),
    [anon_sym_Integer_SLASHnegate] = ACTIONS(45),
    [anon_sym_Integer_SLASHclamp] = ACTIONS(45),
    [anon_sym_Natural_SLASHsubtract] = ACTIONS(45),
    [anon_sym_Double_SLASHshow] = ACTIONS(45),
    [anon_sym_List_SLASHbuild] = ACTIONS(45),
    [anon_sym_List_SLASHfold] = ACTIONS(45),
    [anon_sym_List_SLASHlength] = ACTIONS(45),
    [anon_sym_List_SLASHhead] = ACTIONS(45),
    [anon_sym_List_SLASHlast] = ACTIONS(45),
    [anon_sym_List_SLASHindexed] = ACTIONS(45),
    [anon_sym_List_SLASHreverse] = ACTIONS(45),
    [anon_sym_Text_SLASHshow] = ACTIONS(45),
    [anon_sym_Text_SLASHreplace] = ACTIONS(45),
    [anon_sym_Bool] = ACTIONS(45),
    [anon_sym_True] = ACTIONS(45),
    [anon_sym_False] = ACTIONS(45),
    [anon_sym_Optional] = ACTIONS(45),
    [anon_sym_None] = ACTIONS(45),
    [anon_sym_Natural] = ACTIONS(45),
    [anon_sym_Integer] = ACTIONS(45),
    [anon_sym_Double] = ACTIONS(45),
    [anon_sym_Text] = ACTIONS(45),
    [anon_sym_Date] = ACTIONS(45),
    [anon_sym_Time] = ACTIONS(45),
    [anon_sym_TimeZone] = ACTIONS(45),
    [anon_sym_List] = ACTIONS(45),
    [anon_sym_Type] = ACTIONS(45),
    [anon_sym_Kind] = ACTIONS(45),
    [anon_sym_Sort] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(47),
    [sym_line_comment_prefix] = ACTIONS(3),
    [sym_block_comment_open] = ACTIONS(5),
    [anon_sym_DASHInfinity] = ACTIONS(49),
    [anon_sym_Infinity] = ACTIONS(51),
    [anon_sym_NaN] = ACTIONS(51),
    [aux_sym_double_literal_token1] = ACTIONS(49),
    [sym_natural_literal] = ACTIONS(53),
    [sym_integer_literal] = ACTIONS(53),
    [anon_sym_DQUOTE] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
  },
  [23] = {
    [sym_line_comment] = STATE(23),
    [sym_block_comment] = STATE(23),
    [sym_de_bruijn_index] = STATE(33),
    [sym_label] = ACTIONS(59),
    [anon_sym_Natural_SLASHfold] = ACTIONS(59),
    [anon_sym_Natural_SLASHbuild] = ACTIONS(59),
    [anon_sym_Natural_SLASHisZero] = ACTIONS(59),
    [anon_sym_Natural_SLASHeven] = ACTIONS(59),
    [anon_sym_Natural_SLASHodd] = ACTIONS(59),
    [anon_sym_Natural_SLASHtoInteger] = ACTIONS(59),
    [anon_sym_Natural_SLASHshow] = ACTIONS(59),
    [anon_sym_Integer_SLASHtoDouble] = ACTIONS(59),
    [anon_sym_Integer_SLASHshow] = ACTIONS(59),
    [anon_sym_Integer_SLASHnegate] = ACTIONS(59),
    [anon_sym_Integer_SLASHclamp] = ACTIONS(59),
    [anon_sym_Natural_SLASHsubtract] = ACTIONS(59),
    [anon_sym_Double_SLASHshow] = ACTIONS(59),
    [anon_sym_List_SLASHbuild] = ACTIONS(59),
    [anon_sym_List_SLASHfold] = ACTIONS(59),
    [anon_sym_List_SLASHlength] = ACTIONS(59),
    [anon_sym_List_SLASHhead] = ACTIONS(59),
    [anon_sym_List_SLASHlast] = ACTIONS(59),
    [anon_sym_List_SLASHindexed] = ACTIONS(59),
    [anon_sym_List_SLASHreverse] = ACTIONS(59),
    [anon_sym_Text_SLASHshow] = ACTIONS(59),
    [anon_sym_Text_SLASHreplace] = ACTIONS(59),
    [anon_sym_Bool] = ACTIONS(59),
    [anon_sym_True] = ACTIONS(59),
    [anon_sym_False] = ACTIONS(59),
    [anon_sym_Optional] = ACTIONS(59),
    [anon_sym_None] = ACTIONS(59),
    [anon_sym_Natural] = ACTIONS(59),
    [anon_sym_Integer] = ACTIONS(59),
    [anon_sym_Double] = ACTIONS(59),
    [anon_sym_Text] = ACTIONS(59),
    [anon_sym_Date] = ACTIONS(59),
    [anon_sym_Time] = ACTIONS(59),
    [anon_sym_TimeZone] = ACTIONS(59),
    [anon_sym_List] = ACTIONS(59),
    [anon_sym_Type] = ACTIONS(59),
    [anon_sym_Kind] = ACTIONS(59),
    [anon_sym_Sort] = ACTIONS(59),
    [anon_sym_COLON_COLON] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(61),
    [sym_line_comment_prefix] = ACTIONS(3),
    [sym_block_comment_open] = ACTIONS(5),
    [anon_sym_DASHInfinity] = ACTIONS(61),
    [anon_sym_Infinity] = ACTIONS(59),
    [anon_sym_NaN] = ACTIONS(59),
    [aux_sym_double_literal_token1] = ACTIONS(61),
    [sym_natural_literal] = ACTIONS(59),
    [sym_integer_literal] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_AT] = ACTIONS(63),
  },
  [24] = {
    [sym_line_comment] = STATE(24),
    [sym_block_comment] = STATE(24),
    [sym_label] = ACTIONS(65),
    [anon_sym_Natural_SLASHfold] = ACTIONS(65),
    [anon_sym_Natural_SLASHbuild] = ACTIONS(65),
    [anon_sym_Natural_SLASHisZero] = ACTIONS(65),
    [anon_sym_Natural_SLASHeven] = ACTIONS(65),
    [anon_sym_Natural_SLASHodd] = ACTIONS(65),
    [anon_sym_Natural_SLASHtoInteger] = ACTIONS(65),
    [anon_sym_Natural_SLASHshow] = ACTIONS(65),
    [anon_sym_Integer_SLASHtoDouble] = ACTIONS(65),
    [anon_sym_Integer_SLASHshow] = ACTIONS(65),
    [anon_sym_Integer_SLASHnegate] = ACTIONS(65),
    [anon_sym_Integer_SLASHclamp] = ACTIONS(65),
    [anon_sym_Natural_SLASHsubtract] = ACTIONS(65),
    [anon_sym_Double_SLASHshow] = ACTIONS(65),
    [anon_sym_List_SLASHbuild] = ACTIONS(65),
    [anon_sym_List_SLASHfold] = ACTIONS(65),
    [anon_sym_List_SLASHlength] = ACTIONS(65),
    [anon_sym_List_SLASHhead] = ACTIONS(65),
    [anon_sym_List_SLASHlast] = ACTIONS(65),
    [anon_sym_List_SLASHindexed] = ACTIONS(65),
    [anon_sym_List_SLASHreverse] = ACTIONS(65),
    [anon_sym_Text_SLASHshow] = ACTIONS(65),
    [anon_sym_Text_SLASHreplace] = ACTIONS(65),
    [anon_sym_Bool] = ACTIONS(65),
    [anon_sym_True] = ACTIONS(65),
    [anon_sym_False] = ACTIONS(65),
    [anon_sym_Optional] = ACTIONS(65),
    [anon_sym_None] = ACTIONS(65),
    [anon_sym_Natural] = ACTIONS(65),
    [anon_sym_Integer] = ACTIONS(65),
    [anon_sym_Double] = ACTIONS(65),
    [anon_sym_Text] = ACTIONS(65),
    [anon_sym_Date] = ACTIONS(65),
    [anon_sym_Time] = ACTIONS(65),
    [anon_sym_TimeZone] = ACTIONS(65),
    [anon_sym_List] = ACTIONS(65),
    [anon_sym_Type] = ACTIONS(65),
    [anon_sym_Kind] = ACTIONS(65),
    [anon_sym_Sort] = ACTIONS(65),
    [anon_sym_COLON_COLON] = ACTIONS(67),
    [anon_sym_LPAREN] = ACTIONS(67),
    [sym_line_comment_prefix] = ACTIONS(3),
    [sym_block_comment_open] = ACTIONS(5),
    [anon_sym_DASHInfinity] = ACTIONS(67),
    [anon_sym_Infinity] = ACTIONS(65),
    [anon_sym_NaN] = ACTIONS(65),
    [aux_sym_double_literal_token1] = ACTIONS(67),
    [sym_natural_literal] = ACTIONS(65),
    [sym_integer_literal] = ACTIONS(65),
    [anon_sym_DQUOTE] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(67),
  },
  [25] = {
    [sym_line_comment] = STATE(25),
    [sym_block_comment] = STATE(25),
    [sym_label] = ACTIONS(69),
    [anon_sym_Natural_SLASHfold] = ACTIONS(69),
    [anon_sym_Natural_SLASHbuild] = ACTIONS(69),
    [anon_sym_Natural_SLASHisZero] = ACTIONS(69),
    [anon_sym_Natural_SLASHeven] = ACTIONS(69),
    [anon_sym_Natural_SLASHodd] = ACTIONS(69),
    [anon_sym_Natural_SLASHtoInteger] = ACTIONS(69),
    [anon_sym_Natural_SLASHshow] = ACTIONS(69),
    [anon_sym_Integer_SLASHtoDouble] = ACTIONS(69),
    [anon_sym_Integer_SLASHshow] = ACTIONS(69),
    [anon_sym_Integer_SLASHnegate] = ACTIONS(69),
    [anon_sym_Integer_SLASHclamp] = ACTIONS(69),
    [anon_sym_Natural_SLASHsubtract] = ACTIONS(69),
    [anon_sym_Double_SLASHshow] = ACTIONS(69),
    [anon_sym_List_SLASHbuild] = ACTIONS(69),
    [anon_sym_List_SLASHfold] = ACTIONS(69),
    [anon_sym_List_SLASHlength] = ACTIONS(69),
    [anon_sym_List_SLASHhead] = ACTIONS(69),
    [anon_sym_List_SLASHlast] = ACTIONS(69),
    [anon_sym_List_SLASHindexed] = ACTIONS(69),
    [anon_sym_List_SLASHreverse] = ACTIONS(69),
    [anon_sym_Text_SLASHshow] = ACTIONS(69),
    [anon_sym_Text_SLASHreplace] = ACTIONS(69),
    [anon_sym_Bool] = ACTIONS(69),
    [anon_sym_True] = ACTIONS(69),
    [anon_sym_False] = ACTIONS(69),
    [anon_sym_Optional] = ACTIONS(69),
    [anon_sym_None] = ACTIONS(69),
    [anon_sym_Natural] = ACTIONS(69),
    [anon_sym_Integer] = ACTIONS(69),
    [anon_sym_Double] = ACTIONS(69),
    [anon_sym_Text] = ACTIONS(69),
    [anon_sym_Date] = ACTIONS(69),
    [anon_sym_Time] = ACTIONS(69),
    [anon_sym_TimeZone] = ACTIONS(69),
    [anon_sym_List] = ACTIONS(69),
    [anon_sym_Type] = ACTIONS(69),
    [anon_sym_Kind] = ACTIONS(69),
    [anon_sym_Sort] = ACTIONS(69),
    [anon_sym_COLON_COLON] = ACTIONS(71),
    [anon_sym_LPAREN] = ACTIONS(71),
    [sym_line_comment_prefix] = ACTIONS(3),
    [sym_block_comment_open] = ACTIONS(5),
    [anon_sym_DASHInfinity] = ACTIONS(71),
    [anon_sym_Infinity] = ACTIONS(69),
    [anon_sym_NaN] = ACTIONS(69),
    [aux_sym_double_literal_token1] = ACTIONS(71),
    [sym_natural_literal] = ACTIONS(69),
    [sym_integer_literal] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(71),
  },
  [26] = {
    [sym_line_comment] = STATE(26),
    [sym_block_comment] = STATE(26),
    [sym_label] = ACTIONS(73),
    [anon_sym_Natural_SLASHfold] = ACTIONS(73),
    [anon_sym_Natural_SLASHbuild] = ACTIONS(73),
    [anon_sym_Natural_SLASHisZero] = ACTIONS(73),
    [anon_sym_Natural_SLASHeven] = ACTIONS(73),
    [anon_sym_Natural_SLASHodd] = ACTIONS(73),
    [anon_sym_Natural_SLASHtoInteger] = ACTIONS(73),
    [anon_sym_Natural_SLASHshow] = ACTIONS(73),
    [anon_sym_Integer_SLASHtoDouble] = ACTIONS(73),
    [anon_sym_Integer_SLASHshow] = ACTIONS(73),
    [anon_sym_Integer_SLASHnegate] = ACTIONS(73),
    [anon_sym_Integer_SLASHclamp] = ACTIONS(73),
    [anon_sym_Natural_SLASHsubtract] = ACTIONS(73),
    [anon_sym_Double_SLASHshow] = ACTIONS(73),
    [anon_sym_List_SLASHbuild] = ACTIONS(73),
    [anon_sym_List_SLASHfold] = ACTIONS(73),
    [anon_sym_List_SLASHlength] = ACTIONS(73),
    [anon_sym_List_SLASHhead] = ACTIONS(73),
    [anon_sym_List_SLASHlast] = ACTIONS(73),
    [anon_sym_List_SLASHindexed] = ACTIONS(73),
    [anon_sym_List_SLASHreverse] = ACTIONS(73),
    [anon_sym_Text_SLASHshow] = ACTIONS(73),
    [anon_sym_Text_SLASHreplace] = ACTIONS(73),
    [anon_sym_Bool] = ACTIONS(73),
    [anon_sym_True] = ACTIONS(73),
    [anon_sym_False] = ACTIONS(73),
    [anon_sym_Optional] = ACTIONS(73),
    [anon_sym_None] = ACTIONS(73),
    [anon_sym_Natural] = ACTIONS(73),
    [anon_sym_Integer] = ACTIONS(73),
    [anon_sym_Double] = ACTIONS(73),
    [anon_sym_Text] = ACTIONS(73),
    [anon_sym_Date] = ACTIONS(73),
    [anon_sym_Time] = ACTIONS(73),
    [anon_sym_TimeZone] = ACTIONS(73),
    [anon_sym_List] = ACTIONS(73),
    [anon_sym_Type] = ACTIONS(73),
    [anon_sym_Kind] = ACTIONS(73),
    [anon_sym_Sort] = ACTIONS(73),
    [anon_sym_COLON_COLON] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(75),
    [sym_line_comment_prefix] = ACTIONS(3),
    [sym_block_comment_open] = ACTIONS(5),
    [anon_sym_DASHInfinity] = ACTIONS(75),
    [anon_sym_Infinity] = ACTIONS(73),
    [anon_sym_NaN] = ACTIONS(73),
    [aux_sym_double_literal_token1] = ACTIONS(75),
    [sym_natural_literal] = ACTIONS(73),
    [sym_integer_literal] = ACTIONS(73),
    [anon_sym_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(75),
  },
  [27] = {
    [sym_line_comment] = STATE(27),
    [sym_block_comment] = STATE(27),
    [sym_label] = ACTIONS(77),
    [anon_sym_Natural_SLASHfold] = ACTIONS(77),
    [anon_sym_Natural_SLASHbuild] = ACTIONS(77),
    [anon_sym_Natural_SLASHisZero] = ACTIONS(77),
    [anon_sym_Natural_SLASHeven] = ACTIONS(77),
    [anon_sym_Natural_SLASHodd] = ACTIONS(77),
    [anon_sym_Natural_SLASHtoInteger] = ACTIONS(77),
    [anon_sym_Natural_SLASHshow] = ACTIONS(77),
    [anon_sym_Integer_SLASHtoDouble] = ACTIONS(77),
    [anon_sym_Integer_SLASHshow] = ACTIONS(77),
    [anon_sym_Integer_SLASHnegate] = ACTIONS(77),
    [anon_sym_Integer_SLASHclamp] = ACTIONS(77),
    [anon_sym_Natural_SLASHsubtract] = ACTIONS(77),
    [anon_sym_Double_SLASHshow] = ACTIONS(77),
    [anon_sym_List_SLASHbuild] = ACTIONS(77),
    [anon_sym_List_SLASHfold] = ACTIONS(77),
    [anon_sym_List_SLASHlength] = ACTIONS(77),
    [anon_sym_List_SLASHhead] = ACTIONS(77),
    [anon_sym_List_SLASHlast] = ACTIONS(77),
    [anon_sym_List_SLASHindexed] = ACTIONS(77),
    [anon_sym_List_SLASHreverse] = ACTIONS(77),
    [anon_sym_Text_SLASHshow] = ACTIONS(77),
    [anon_sym_Text_SLASHreplace] = ACTIONS(77),
    [anon_sym_Bool] = ACTIONS(77),
    [anon_sym_True] = ACTIONS(77),
    [anon_sym_False] = ACTIONS(77),
    [anon_sym_Optional] = ACTIONS(77),
    [anon_sym_None] = ACTIONS(77),
    [anon_sym_Natural] = ACTIONS(77),
    [anon_sym_Integer] = ACTIONS(77),
    [anon_sym_Double] = ACTIONS(77),
    [anon_sym_Text] = ACTIONS(77),
    [anon_sym_Date] = ACTIONS(77),
    [anon_sym_Time] = ACTIONS(77),
    [anon_sym_TimeZone] = ACTIONS(77),
    [anon_sym_List] = ACTIONS(77),
    [anon_sym_Type] = ACTIONS(77),
    [anon_sym_Kind] = ACTIONS(77),
    [anon_sym_Sort] = ACTIONS(77),
    [anon_sym_COLON_COLON] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(81),
    [sym_line_comment_prefix] = ACTIONS(3),
    [sym_block_comment_open] = ACTIONS(5),
    [anon_sym_DASHInfinity] = ACTIONS(81),
    [anon_sym_Infinity] = ACTIONS(77),
    [anon_sym_NaN] = ACTIONS(77),
    [aux_sym_double_literal_token1] = ACTIONS(81),
    [sym_natural_literal] = ACTIONS(77),
    [sym_integer_literal] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [anon_sym_LBRACK] = ACTIONS(81),
  },
  [28] = {
    [sym_line_comment] = STATE(28),
    [sym_block_comment] = STATE(28),
    [sym_label] = ACTIONS(59),
    [anon_sym_Natural_SLASHfold] = ACTIONS(59),
    [anon_sym_Natural_SLASHbuild] = ACTIONS(59),
    [anon_sym_Natural_SLASHisZero] = ACTIONS(59),
    [anon_sym_Natural_SLASHeven] = ACTIONS(59),
    [anon_sym_Natural_SLASHodd] = ACTIONS(59),
    [anon_sym_Natural_SLASHtoInteger] = ACTIONS(59),
    [anon_sym_Natural_SLASHshow] = ACTIONS(59),
    [anon_sym_Integer_SLASHtoDouble] = ACTIONS(59),
    [anon_sym_Integer_SLASHshow] = ACTIONS(59),
    [anon_sym_Integer_SLASHnegate] = ACTIONS(59),
    [anon_sym_Integer_SLASHclamp] = ACTIONS(59),
    [anon_sym_Natural_SLASHsubtract] = ACTIONS(59),
    [anon_sym_Double_SLASHshow] = ACTIONS(59),
    [anon_sym_List_SLASHbuild] = ACTIONS(59),
    [anon_sym_List_SLASHfold] = ACTIONS(59),
    [anon_sym_List_SLASHlength] = ACTIONS(59),
    [anon_sym_List_SLASHhead] = ACTIONS(59),
    [anon_sym_List_SLASHlast] = ACTIONS(59),
    [anon_sym_List_SLASHindexed] = ACTIONS(59),
    [anon_sym_List_SLASHreverse] = ACTIONS(59),
    [anon_sym_Text_SLASHshow] = ACTIONS(59),
    [anon_sym_Text_SLASHreplace] = ACTIONS(59),
    [anon_sym_Bool] = ACTIONS(59),
    [anon_sym_True] = ACTIONS(59),
    [anon_sym_False] = ACTIONS(59),
    [anon_sym_Optional] = ACTIONS(59),
    [anon_sym_None] = ACTIONS(59),
    [anon_sym_Natural] = ACTIONS(59),
    [anon_sym_Integer] = ACTIONS(59),
    [anon_sym_Double] = ACTIONS(59),
    [anon_sym_Text] = ACTIONS(59),
    [anon_sym_Date] = ACTIONS(59),
    [anon_sym_Time] = ACTIONS(59),
    [anon_sym_TimeZone] = ACTIONS(59),
    [anon_sym_List] = ACTIONS(59),
    [anon_sym_Type] = ACTIONS(59),
    [anon_sym_Kind] = ACTIONS(59),
    [anon_sym_Sort] = ACTIONS(59),
    [anon_sym_COLON_COLON] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(61),
    [sym_line_comment_prefix] = ACTIONS(3),
    [sym_block_comment_open] = ACTIONS(5),
    [anon_sym_DASHInfinity] = ACTIONS(61),
    [anon_sym_Infinity] = ACTIONS(59),
    [anon_sym_NaN] = ACTIONS(59),
    [aux_sym_double_literal_token1] = ACTIONS(61),
    [sym_natural_literal] = ACTIONS(59),
    [sym_integer_literal] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_LBRACK] = ACTIONS(61),
  },
  [29] = {
    [sym_line_comment] = STATE(29),
    [sym_block_comment] = STATE(29),
    [sym_label] = ACTIONS(83),
    [anon_sym_Natural_SLASHfold] = ACTIONS(83),
    [anon_sym_Natural_SLASHbuild] = ACTIONS(83),
    [anon_sym_Natural_SLASHisZero] = ACTIONS(83),
    [anon_sym_Natural_SLASHeven] = ACTIONS(83),
    [anon_sym_Natural_SLASHodd] = ACTIONS(83),
    [anon_sym_Natural_SLASHtoInteger] = ACTIONS(83),
    [anon_sym_Natural_SLASHshow] = ACTIONS(83),
    [anon_sym_Integer_SLASHtoDouble] = ACTIONS(83),
    [anon_sym_Integer_SLASHshow] = ACTIONS(83),
    [anon_sym_Integer_SLASHnegate] = ACTIONS(83),
    [anon_sym_Integer_SLASHclamp] = ACTIONS(83),
    [anon_sym_Natural_SLASHsubtract] = ACTIONS(83),
    [anon_sym_Double_SLASHshow] = ACTIONS(83),
    [anon_sym_List_SLASHbuild] = ACTIONS(83),
    [anon_sym_List_SLASHfold] = ACTIONS(83),
    [anon_sym_List_SLASHlength] = ACTIONS(83),
    [anon_sym_List_SLASHhead] = ACTIONS(83),
    [anon_sym_List_SLASHlast] = ACTIONS(83),
    [anon_sym_List_SLASHindexed] = ACTIONS(83),
    [anon_sym_List_SLASHreverse] = ACTIONS(83),
    [anon_sym_Text_SLASHshow] = ACTIONS(83),
    [anon_sym_Text_SLASHreplace] = ACTIONS(83),
    [anon_sym_Bool] = ACTIONS(83),
    [anon_sym_True] = ACTIONS(83),
    [anon_sym_False] = ACTIONS(83),
    [anon_sym_Optional] = ACTIONS(83),
    [anon_sym_None] = ACTIONS(83),
    [anon_sym_Natural] = ACTIONS(83),
    [anon_sym_Integer] = ACTIONS(83),
    [anon_sym_Double] = ACTIONS(83),
    [anon_sym_Text] = ACTIONS(83),
    [anon_sym_Date] = ACTIONS(83),
    [anon_sym_Time] = ACTIONS(83),
    [anon_sym_TimeZone] = ACTIONS(83),
    [anon_sym_List] = ACTIONS(83),
    [anon_sym_Type] = ACTIONS(83),
    [anon_sym_Kind] = ACTIONS(83),
    [anon_sym_Sort] = ACTIONS(83),
    [anon_sym_COLON_COLON] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(85),
    [sym_line_comment_prefix] = ACTIONS(3),
    [sym_block_comment_open] = ACTIONS(5),
    [anon_sym_DASHInfinity] = ACTIONS(85),
    [anon_sym_Infinity] = ACTIONS(83),
    [anon_sym_NaN] = ACTIONS(83),
    [aux_sym_double_literal_token1] = ACTIONS(85),
    [sym_natural_literal] = ACTIONS(83),
    [sym_integer_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(85),
  },
  [30] = {
    [sym_line_comment] = STATE(30),
    [sym_block_comment] = STATE(30),
    [sym_label] = ACTIONS(87),
    [anon_sym_Natural_SLASHfold] = ACTIONS(87),
    [anon_sym_Natural_SLASHbuild] = ACTIONS(87),
    [anon_sym_Natural_SLASHisZero] = ACTIONS(87),
    [anon_sym_Natural_SLASHeven] = ACTIONS(87),
    [anon_sym_Natural_SLASHodd] = ACTIONS(87),
    [anon_sym_Natural_SLASHtoInteger] = ACTIONS(87),
    [anon_sym_Natural_SLASHshow] = ACTIONS(87),
    [anon_sym_Integer_SLASHtoDouble] = ACTIONS(87),
    [anon_sym_Integer_SLASHshow] = ACTIONS(87),
    [anon_sym_Integer_SLASHnegate] = ACTIONS(87),
    [anon_sym_Integer_SLASHclamp] = ACTIONS(87),
    [anon_sym_Natural_SLASHsubtract] = ACTIONS(87),
    [anon_sym_Double_SLASHshow] = ACTIONS(87),
    [anon_sym_List_SLASHbuild] = ACTIONS(87),
    [anon_sym_List_SLASHfold] = ACTIONS(87),
    [anon_sym_List_SLASHlength] = ACTIONS(87),
    [anon_sym_List_SLASHhead] = ACTIONS(87),
    [anon_sym_List_SLASHlast] = ACTIONS(87),
    [anon_sym_List_SLASHindexed] = ACTIONS(87),
    [anon_sym_List_SLASHreverse] = ACTIONS(87),
    [anon_sym_Text_SLASHshow] = ACTIONS(87),
    [anon_sym_Text_SLASHreplace] = ACTIONS(87),
    [anon_sym_Bool] = ACTIONS(87),
    [anon_sym_True] = ACTIONS(87),
    [anon_sym_False] = ACTIONS(87),
    [anon_sym_Optional] = ACTIONS(87),
    [anon_sym_None] = ACTIONS(87),
    [anon_sym_Natural] = ACTIONS(87),
    [anon_sym_Integer] = ACTIONS(87),
    [anon_sym_Double] = ACTIONS(87),
    [anon_sym_Text] = ACTIONS(87),
    [anon_sym_Date] = ACTIONS(87),
    [anon_sym_Time] = ACTIONS(87),
    [anon_sym_TimeZone] = ACTIONS(87),
    [anon_sym_List] = ACTIONS(87),
    [anon_sym_Type] = ACTIONS(87),
    [anon_sym_Kind] = ACTIONS(87),
    [anon_sym_Sort] = ACTIONS(87),
    [anon_sym_COLON_COLON] = ACTIONS(89),
    [anon_sym_LPAREN] = ACTIONS(89),
    [sym_line_comment_prefix] = ACTIONS(3),
    [sym_block_comment_open] = ACTIONS(5),
    [anon_sym_DASHInfinity] = ACTIONS(89),
    [anon_sym_Infinity] = ACTIONS(87),
    [anon_sym_NaN] = ACTIONS(87),
    [aux_sym_double_literal_token1] = ACTIONS(89),
    [sym_natural_literal] = ACTIONS(87),
    [sym_integer_literal] = ACTIONS(87),
    [anon_sym_DQUOTE] = ACTIONS(89),
    [anon_sym_LBRACK] = ACTIONS(89),
  },
  [31] = {
    [sym_line_comment] = STATE(31),
    [sym_block_comment] = STATE(31),
    [sym_label] = ACTIONS(91),
    [anon_sym_Natural_SLASHfold] = ACTIONS(91),
    [anon_sym_Natural_SLASHbuild] = ACTIONS(91),
    [anon_sym_Natural_SLASHisZero] = ACTIONS(91),
    [anon_sym_Natural_SLASHeven] = ACTIONS(91),
    [anon_sym_Natural_SLASHodd] = ACTIONS(91),
    [anon_sym_Natural_SLASHtoInteger] = ACTIONS(91),
    [anon_sym_Natural_SLASHshow] = ACTIONS(91),
    [anon_sym_Integer_SLASHtoDouble] = ACTIONS(91),
    [anon_sym_Integer_SLASHshow] = ACTIONS(91),
    [anon_sym_Integer_SLASHnegate] = ACTIONS(91),
    [anon_sym_Integer_SLASHclamp] = ACTIONS(91),
    [anon_sym_Natural_SLASHsubtract] = ACTIONS(91),
    [anon_sym_Double_SLASHshow] = ACTIONS(91),
    [anon_sym_List_SLASHbuild] = ACTIONS(91),
    [anon_sym_List_SLASHfold] = ACTIONS(91),
    [anon_sym_List_SLASHlength] = ACTIONS(91),
    [anon_sym_List_SLASHhead] = ACTIONS(91),
    [anon_sym_List_SLASHlast] = ACTIONS(91),
    [anon_sym_List_SLASHindexed] = ACTIONS(91),
    [anon_sym_List_SLASHreverse] = ACTIONS(91),
    [anon_sym_Text_SLASHshow] = ACTIONS(91),
    [anon_sym_Text_SLASHreplace] = ACTIONS(91),
    [anon_sym_Bool] = ACTIONS(91),
    [anon_sym_True] = ACTIONS(91),
    [anon_sym_False] = ACTIONS(91),
    [anon_sym_Optional] = ACTIONS(91),
    [anon_sym_None] = ACTIONS(91),
    [anon_sym_Natural] = ACTIONS(91),
    [anon_sym_Integer] = ACTIONS(91),
    [anon_sym_Double] = ACTIONS(91),
    [anon_sym_Text] = ACTIONS(91),
    [anon_sym_Date] = ACTIONS(91),
    [anon_sym_Time] = ACTIONS(91),
    [anon_sym_TimeZone] = ACTIONS(91),
    [anon_sym_List] = ACTIONS(91),
    [anon_sym_Type] = ACTIONS(91),
    [anon_sym_Kind] = ACTIONS(91),
    [anon_sym_Sort] = ACTIONS(91),
    [anon_sym_COLON_COLON] = ACTIONS(93),
    [anon_sym_LPAREN] = ACTIONS(93),
    [sym_line_comment_prefix] = ACTIONS(3),
    [sym_block_comment_open] = ACTIONS(5),
    [anon_sym_DASHInfinity] = ACTIONS(93),
    [anon_sym_Infinity] = ACTIONS(91),
    [anon_sym_NaN] = ACTIONS(91),
    [aux_sym_double_literal_token1] = ACTIONS(93),
    [sym_natural_literal] = ACTIONS(91),
    [sym_integer_literal] = ACTIONS(91),
    [anon_sym_DQUOTE] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(93),
  },
  [32] = {
    [sym_line_comment] = STATE(32),
    [sym_block_comment] = STATE(32),
    [sym_label] = ACTIONS(95),
    [anon_sym_Natural_SLASHfold] = ACTIONS(95),
    [anon_sym_Natural_SLASHbuild] = ACTIONS(95),
    [anon_sym_Natural_SLASHisZero] = ACTIONS(95),
    [anon_sym_Natural_SLASHeven] = ACTIONS(95),
    [anon_sym_Natural_SLASHodd] = ACTIONS(95),
    [anon_sym_Natural_SLASHtoInteger] = ACTIONS(95),
    [anon_sym_Natural_SLASHshow] = ACTIONS(95),
    [anon_sym_Integer_SLASHtoDouble] = ACTIONS(95),
    [anon_sym_Integer_SLASHshow] = ACTIONS(95),
    [anon_sym_Integer_SLASHnegate] = ACTIONS(95),
    [anon_sym_Integer_SLASHclamp] = ACTIONS(95),
    [anon_sym_Natural_SLASHsubtract] = ACTIONS(95),
    [anon_sym_Double_SLASHshow] = ACTIONS(95),
    [anon_sym_List_SLASHbuild] = ACTIONS(95),
    [anon_sym_List_SLASHfold] = ACTIONS(95),
    [anon_sym_List_SLASHlength] = ACTIONS(95),
    [anon_sym_List_SLASHhead] = ACTIONS(95),
    [anon_sym_List_SLASHlast] = ACTIONS(95),
    [anon_sym_List_SLASHindexed] = ACTIONS(95),
    [anon_sym_List_SLASHreverse] = ACTIONS(95),
    [anon_sym_Text_SLASHshow] = ACTIONS(95),
    [anon_sym_Text_SLASHreplace] = ACTIONS(95),
    [anon_sym_Bool] = ACTIONS(95),
    [anon_sym_True] = ACTIONS(95),
    [anon_sym_False] = ACTIONS(95),
    [anon_sym_Optional] = ACTIONS(95),
    [anon_sym_None] = ACTIONS(95),
    [anon_sym_Natural] = ACTIONS(95),
    [anon_sym_Integer] = ACTIONS(95),
    [anon_sym_Double] = ACTIONS(95),
    [anon_sym_Text] = ACTIONS(95),
    [anon_sym_Date] = ACTIONS(95),
    [anon_sym_Time] = ACTIONS(95),
    [anon_sym_TimeZone] = ACTIONS(95),
    [anon_sym_List] = ACTIONS(95),
    [anon_sym_Type] = ACTIONS(95),
    [anon_sym_Kind] = ACTIONS(95),
    [anon_sym_Sort] = ACTIONS(95),
    [anon_sym_COLON_COLON] = ACTIONS(97),
    [anon_sym_LPAREN] = ACTIONS(97),
    [sym_line_comment_prefix] = ACTIONS(3),
    [sym_block_comment_open] = ACTIONS(5),
    [anon_sym_DASHInfinity] = ACTIONS(97),
    [anon_sym_Infinity] = ACTIONS(95),
    [anon_sym_NaN] = ACTIONS(95),
    [aux_sym_double_literal_token1] = ACTIONS(97),
    [sym_natural_literal] = ACTIONS(95),
    [sym_integer_literal] = ACTIONS(95),
    [anon_sym_DQUOTE] = ACTIONS(97),
    [anon_sym_LBRACK] = ACTIONS(97),
  },
  [33] = {
    [sym_line_comment] = STATE(33),
    [sym_block_comment] = STATE(33),
    [sym_label] = ACTIONS(99),
    [anon_sym_Natural_SLASHfold] = ACTIONS(99),
    [anon_sym_Natural_SLASHbuild] = ACTIONS(99),
    [anon_sym_Natural_SLASHisZero] = ACTIONS(99),
    [anon_sym_Natural_SLASHeven] = ACTIONS(99),
    [anon_sym_Natural_SLASHodd] = ACTIONS(99),
    [anon_sym_Natural_SLASHtoInteger] = ACTIONS(99),
    [anon_sym_Natural_SLASHshow] = ACTIONS(99),
    [anon_sym_Integer_SLASHtoDouble] = ACTIONS(99),
    [anon_sym_Integer_SLASHshow] = ACTIONS(99),
    [anon_sym_Integer_SLASHnegate] = ACTIONS(99),
    [anon_sym_Integer_SLASHclamp] = ACTIONS(99),
    [anon_sym_Natural_SLASHsubtract] = ACTIONS(99),
    [anon_sym_Double_SLASHshow] = ACTIONS(99),
    [anon_sym_List_SLASHbuild] = ACTIONS(99),
    [anon_sym_List_SLASHfold] = ACTIONS(99),
    [anon_sym_List_SLASHlength] = ACTIONS(99),
    [anon_sym_List_SLASHhead] = ACTIONS(99),
    [anon_sym_List_SLASHlast] = ACTIONS(99),
    [anon_sym_List_SLASHindexed] = ACTIONS(99),
    [anon_sym_List_SLASHreverse] = ACTIONS(99),
    [anon_sym_Text_SLASHshow] = ACTIONS(99),
    [anon_sym_Text_SLASHreplace] = ACTIONS(99),
    [anon_sym_Bool] = ACTIONS(99),
    [anon_sym_True] = ACTIONS(99),
    [anon_sym_False] = ACTIONS(99),
    [anon_sym_Optional] = ACTIONS(99),
    [anon_sym_None] = ACTIONS(99),
    [anon_sym_Natural] = ACTIONS(99),
    [anon_sym_Integer] = ACTIONS(99),
    [anon_sym_Double] = ACTIONS(99),
    [anon_sym_Text] = ACTIONS(99),
    [anon_sym_Date] = ACTIONS(99),
    [anon_sym_Time] = ACTIONS(99),
    [anon_sym_TimeZone] = ACTIONS(99),
    [anon_sym_List] = ACTIONS(99),
    [anon_sym_Type] = ACTIONS(99),
    [anon_sym_Kind] = ACTIONS(99),
    [anon_sym_Sort] = ACTIONS(99),
    [anon_sym_COLON_COLON] = ACTIONS(101),
    [anon_sym_LPAREN] = ACTIONS(101),
    [sym_line_comment_prefix] = ACTIONS(3),
    [sym_block_comment_open] = ACTIONS(5),
    [anon_sym_DASHInfinity] = ACTIONS(101),
    [anon_sym_Infinity] = ACTIONS(99),
    [anon_sym_NaN] = ACTIONS(99),
    [aux_sym_double_literal_token1] = ACTIONS(101),
    [sym_natural_literal] = ACTIONS(99),
    [sym_integer_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [anon_sym_LBRACK] = ACTIONS(101),
  },
  [34] = {
    [sym_line_comment] = STATE(34),
    [sym_block_comment] = STATE(34),
    [sym_label] = ACTIONS(103),
    [anon_sym_Natural_SLASHfold] = ACTIONS(103),
    [anon_sym_Natural_SLASHbuild] = ACTIONS(103),
    [anon_sym_Natural_SLASHisZero] = ACTIONS(103),
    [anon_sym_Natural_SLASHeven] = ACTIONS(103),
    [anon_sym_Natural_SLASHodd] = ACTIONS(103),
    [anon_sym_Natural_SLASHtoInteger] = ACTIONS(103),
    [anon_sym_Natural_SLASHshow] = ACTIONS(103),
    [anon_sym_Integer_SLASHtoDouble] = ACTIONS(103),
    [anon_sym_Integer_SLASHshow] = ACTIONS(103),
    [anon_sym_Integer_SLASHnegate] = ACTIONS(103),
    [anon_sym_Integer_SLASHclamp] = ACTIONS(103),
    [anon_sym_Natural_SLASHsubtract] = ACTIONS(103),
    [anon_sym_Double_SLASHshow] = ACTIONS(103),
    [anon_sym_List_SLASHbuild] = ACTIONS(103),
    [anon_sym_List_SLASHfold] = ACTIONS(103),
    [anon_sym_List_SLASHlength] = ACTIONS(103),
    [anon_sym_List_SLASHhead] = ACTIONS(103),
    [anon_sym_List_SLASHlast] = ACTIONS(103),
    [anon_sym_List_SLASHindexed] = ACTIONS(103),
    [anon_sym_List_SLASHreverse] = ACTIONS(103),
    [anon_sym_Text_SLASHshow] = ACTIONS(103),
    [anon_sym_Text_SLASHreplace] = ACTIONS(103),
    [anon_sym_Bool] = ACTIONS(103),
    [anon_sym_True] = ACTIONS(103),
    [anon_sym_False] = ACTIONS(103),
    [anon_sym_Optional] = ACTIONS(103),
    [anon_sym_None] = ACTIONS(103),
    [anon_sym_Natural] = ACTIONS(103),
    [anon_sym_Integer] = ACTIONS(103),
    [anon_sym_Double] = ACTIONS(103),
    [anon_sym_Text] = ACTIONS(103),
    [anon_sym_Date] = ACTIONS(103),
    [anon_sym_Time] = ACTIONS(103),
    [anon_sym_TimeZone] = ACTIONS(103),
    [anon_sym_List] = ACTIONS(103),
    [anon_sym_Type] = ACTIONS(103),
    [anon_sym_Kind] = ACTIONS(103),
    [anon_sym_Sort] = ACTIONS(103),
    [anon_sym_COLON_COLON] = ACTIONS(105),
    [anon_sym_LPAREN] = ACTIONS(105),
    [sym_line_comment_prefix] = ACTIONS(3),
    [sym_block_comment_open] = ACTIONS(5),
    [anon_sym_DASHInfinity] = ACTIONS(105),
    [anon_sym_Infinity] = ACTIONS(103),
    [anon_sym_NaN] = ACTIONS(103),
    [aux_sym_double_literal_token1] = ACTIONS(105),
    [sym_natural_literal] = ACTIONS(103),
    [sym_integer_literal] = ACTIONS(103),
    [anon_sym_DQUOTE] = ACTIONS(105),
    [anon_sym_LBRACK] = ACTIONS(105),
  },
  [35] = {
    [sym_line_comment] = STATE(35),
    [sym_block_comment] = STATE(35),
    [sym_label] = ACTIONS(107),
    [anon_sym_Natural_SLASHfold] = ACTIONS(107),
    [anon_sym_Natural_SLASHbuild] = ACTIONS(107),
    [anon_sym_Natural_SLASHisZero] = ACTIONS(107),
    [anon_sym_Natural_SLASHeven] = ACTIONS(107),
    [anon_sym_Natural_SLASHodd] = ACTIONS(107),
    [anon_sym_Natural_SLASHtoInteger] = ACTIONS(107),
    [anon_sym_Natural_SLASHshow] = ACTIONS(107),
    [anon_sym_Integer_SLASHtoDouble] = ACTIONS(107),
    [anon_sym_Integer_SLASHshow] = ACTIONS(107),
    [anon_sym_Integer_SLASHnegate] = ACTIONS(107),
    [anon_sym_Integer_SLASHclamp] = ACTIONS(107),
    [anon_sym_Natural_SLASHsubtract] = ACTIONS(107),
    [anon_sym_Double_SLASHshow] = ACTIONS(107),
    [anon_sym_List_SLASHbuild] = ACTIONS(107),
    [anon_sym_List_SLASHfold] = ACTIONS(107),
    [anon_sym_List_SLASHlength] = ACTIONS(107),
    [anon_sym_List_SLASHhead] = ACTIONS(107),
    [anon_sym_List_SLASHlast] = ACTIONS(107),
    [anon_sym_List_SLASHindexed] = ACTIONS(107),
    [anon_sym_List_SLASHreverse] = ACTIONS(107),
    [anon_sym_Text_SLASHshow] = ACTIONS(107),
    [anon_sym_Text_SLASHreplace] = ACTIONS(107),
    [anon_sym_Bool] = ACTIONS(107),
    [anon_sym_True] = ACTIONS(107),
    [anon_sym_False] = ACTIONS(107),
    [anon_sym_Optional] = ACTIONS(107),
    [anon_sym_None] = ACTIONS(107),
    [anon_sym_Natural] = ACTIONS(107),
    [anon_sym_Integer] = ACTIONS(107),
    [anon_sym_Double] = ACTIONS(107),
    [anon_sym_Text] = ACTIONS(107),
    [anon_sym_Date] = ACTIONS(107),
    [anon_sym_Time] = ACTIONS(107),
    [anon_sym_TimeZone] = ACTIONS(107),
    [anon_sym_List] = ACTIONS(107),
    [anon_sym_Type] = ACTIONS(107),
    [anon_sym_Kind] = ACTIONS(107),
    [anon_sym_Sort] = ACTIONS(107),
    [anon_sym_COLON_COLON] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(109),
    [sym_line_comment_prefix] = ACTIONS(3),
    [sym_block_comment_open] = ACTIONS(5),
    [anon_sym_DASHInfinity] = ACTIONS(109),
    [anon_sym_Infinity] = ACTIONS(107),
    [anon_sym_NaN] = ACTIONS(107),
    [aux_sym_double_literal_token1] = ACTIONS(109),
    [sym_natural_literal] = ACTIONS(107),
    [sym_integer_literal] = ACTIONS(107),
    [anon_sym_DQUOTE] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(109),
  },
  [36] = {
    [sym_line_comment] = STATE(36),
    [sym_block_comment] = STATE(36),
    [sym_label] = ACTIONS(111),
    [anon_sym_Natural_SLASHfold] = ACTIONS(111),
    [anon_sym_Natural_SLASHbuild] = ACTIONS(111),
    [anon_sym_Natural_SLASHisZero] = ACTIONS(111),
    [anon_sym_Natural_SLASHeven] = ACTIONS(111),
    [anon_sym_Natural_SLASHodd] = ACTIONS(111),
    [anon_sym_Natural_SLASHtoInteger] = ACTIONS(111),
    [anon_sym_Natural_SLASHshow] = ACTIONS(111),
    [anon_sym_Integer_SLASHtoDouble] = ACTIONS(111),
    [anon_sym_Integer_SLASHshow] = ACTIONS(111),
    [anon_sym_Integer_SLASHnegate] = ACTIONS(111),
    [anon_sym_Integer_SLASHclamp] = ACTIONS(111),
    [anon_sym_Natural_SLASHsubtract] = ACTIONS(111),
    [anon_sym_Double_SLASHshow] = ACTIONS(111),
    [anon_sym_List_SLASHbuild] = ACTIONS(111),
    [anon_sym_List_SLASHfold] = ACTIONS(111),
    [anon_sym_List_SLASHlength] = ACTIONS(111),
    [anon_sym_List_SLASHhead] = ACTIONS(111),
    [anon_sym_List_SLASHlast] = ACTIONS(111),
    [anon_sym_List_SLASHindexed] = ACTIONS(111),
    [anon_sym_List_SLASHreverse] = ACTIONS(111),
    [anon_sym_Text_SLASHshow] = ACTIONS(111),
    [anon_sym_Text_SLASHreplace] = ACTIONS(111),
    [anon_sym_Bool] = ACTIONS(111),
    [anon_sym_True] = ACTIONS(111),
    [anon_sym_False] = ACTIONS(111),
    [anon_sym_Optional] = ACTIONS(111),
    [anon_sym_None] = ACTIONS(111),
    [anon_sym_Natural] = ACTIONS(111),
    [anon_sym_Integer] = ACTIONS(111),
    [anon_sym_Double] = ACTIONS(111),
    [anon_sym_Text] = ACTIONS(111),
    [anon_sym_Date] = ACTIONS(111),
    [anon_sym_Time] = ACTIONS(111),
    [anon_sym_TimeZone] = ACTIONS(111),
    [anon_sym_List] = ACTIONS(111),
    [anon_sym_Type] = ACTIONS(111),
    [anon_sym_Kind] = ACTIONS(111),
    [anon_sym_Sort] = ACTIONS(111),
    [anon_sym_COLON_COLON] = ACTIONS(113),
    [anon_sym_LPAREN] = ACTIONS(113),
    [sym_line_comment_prefix] = ACTIONS(3),
    [sym_block_comment_open] = ACTIONS(5),
    [anon_sym_DASHInfinity] = ACTIONS(113),
    [anon_sym_Infinity] = ACTIONS(111),
    [anon_sym_NaN] = ACTIONS(111),
    [aux_sym_double_literal_token1] = ACTIONS(113),
    [sym_natural_literal] = ACTIONS(111),
    [sym_integer_literal] = ACTIONS(111),
    [anon_sym_DQUOTE] = ACTIONS(113),
    [anon_sym_LBRACK] = ACTIONS(113),
  },
  [37] = {
    [sym_line_comment] = STATE(37),
    [sym_block_comment] = STATE(37),
    [sym_label] = ACTIONS(115),
    [anon_sym_Natural_SLASHfold] = ACTIONS(115),
    [anon_sym_Natural_SLASHbuild] = ACTIONS(115),
    [anon_sym_Natural_SLASHisZero] = ACTIONS(115),
    [anon_sym_Natural_SLASHeven] = ACTIONS(115),
    [anon_sym_Natural_SLASHodd] = ACTIONS(115),
    [anon_sym_Natural_SLASHtoInteger] = ACTIONS(115),
    [anon_sym_Natural_SLASHshow] = ACTIONS(115),
    [anon_sym_Integer_SLASHtoDouble] = ACTIONS(115),
    [anon_sym_Integer_SLASHshow] = ACTIONS(115),
    [anon_sym_Integer_SLASHnegate] = ACTIONS(115),
    [anon_sym_Integer_SLASHclamp] = ACTIONS(115),
    [anon_sym_Natural_SLASHsubtract] = ACTIONS(115),
    [anon_sym_Double_SLASHshow] = ACTIONS(115),
    [anon_sym_List_SLASHbuild] = ACTIONS(115),
    [anon_sym_List_SLASHfold] = ACTIONS(115),
    [anon_sym_List_SLASHlength] = ACTIONS(115),
    [anon_sym_List_SLASHhead] = ACTIONS(115),
    [anon_sym_List_SLASHlast] = ACTIONS(115),
    [anon_sym_List_SLASHindexed] = ACTIONS(115),
    [anon_sym_List_SLASHreverse] = ACTIONS(115),
    [anon_sym_Text_SLASHshow] = ACTIONS(115),
    [anon_sym_Text_SLASHreplace] = ACTIONS(115),
    [anon_sym_Bool] = ACTIONS(115),
    [anon_sym_True] = ACTIONS(115),
    [anon_sym_False] = ACTIONS(115),
    [anon_sym_Optional] = ACTIONS(115),
    [anon_sym_None] = ACTIONS(115),
    [anon_sym_Natural] = ACTIONS(115),
    [anon_sym_Integer] = ACTIONS(115),
    [anon_sym_Double] = ACTIONS(115),
    [anon_sym_Text] = ACTIONS(115),
    [anon_sym_Date] = ACTIONS(115),
    [anon_sym_Time] = ACTIONS(115),
    [anon_sym_TimeZone] = ACTIONS(115),
    [anon_sym_List] = ACTIONS(115),
    [anon_sym_Type] = ACTIONS(115),
    [anon_sym_Kind] = ACTIONS(115),
    [anon_sym_Sort] = ACTIONS(115),
    [anon_sym_COLON_COLON] = ACTIONS(117),
    [anon_sym_LPAREN] = ACTIONS(117),
    [sym_line_comment_prefix] = ACTIONS(3),
    [sym_block_comment_open] = ACTIONS(5),
    [anon_sym_DASHInfinity] = ACTIONS(117),
    [anon_sym_Infinity] = ACTIONS(115),
    [anon_sym_NaN] = ACTIONS(115),
    [aux_sym_double_literal_token1] = ACTIONS(117),
    [sym_natural_literal] = ACTIONS(115),
    [sym_integer_literal] = ACTIONS(115),
    [anon_sym_DQUOTE] = ACTIONS(117),
    [anon_sym_LBRACK] = ACTIONS(117),
  },
  [38] = {
    [sym_line_comment] = STATE(38),
    [sym_block_comment] = STATE(38),
    [sym_label] = ACTIONS(119),
    [anon_sym_Natural_SLASHfold] = ACTIONS(119),
    [anon_sym_Natural_SLASHbuild] = ACTIONS(119),
    [anon_sym_Natural_SLASHisZero] = ACTIONS(119),
    [anon_sym_Natural_SLASHeven] = ACTIONS(119),
    [anon_sym_Natural_SLASHodd] = ACTIONS(119),
    [anon_sym_Natural_SLASHtoInteger] = ACTIONS(119),
    [anon_sym_Natural_SLASHshow] = ACTIONS(119),
    [anon_sym_Integer_SLASHtoDouble] = ACTIONS(119),
    [anon_sym_Integer_SLASHshow] = ACTIONS(119),
    [anon_sym_Integer_SLASHnegate] = ACTIONS(119),
    [anon_sym_Integer_SLASHclamp] = ACTIONS(119),
    [anon_sym_Natural_SLASHsubtract] = ACTIONS(119),
    [anon_sym_Double_SLASHshow] = ACTIONS(119),
    [anon_sym_List_SLASHbuild] = ACTIONS(119),
    [anon_sym_List_SLASHfold] = ACTIONS(119),
    [anon_sym_List_SLASHlength] = ACTIONS(119),
    [anon_sym_List_SLASHhead] = ACTIONS(119),
    [anon_sym_List_SLASHlast] = ACTIONS(119),
    [anon_sym_List_SLASHindexed] = ACTIONS(119),
    [anon_sym_List_SLASHreverse] = ACTIONS(119),
    [anon_sym_Text_SLASHshow] = ACTIONS(119),
    [anon_sym_Text_SLASHreplace] = ACTIONS(119),
    [anon_sym_Bool] = ACTIONS(119),
    [anon_sym_True] = ACTIONS(119),
    [anon_sym_False] = ACTIONS(119),
    [anon_sym_Optional] = ACTIONS(119),
    [anon_sym_None] = ACTIONS(119),
    [anon_sym_Natural] = ACTIONS(119),
    [anon_sym_Integer] = ACTIONS(119),
    [anon_sym_Double] = ACTIONS(119),
    [anon_sym_Text] = ACTIONS(119),
    [anon_sym_Date] = ACTIONS(119),
    [anon_sym_Time] = ACTIONS(119),
    [anon_sym_TimeZone] = ACTIONS(119),
    [anon_sym_List] = ACTIONS(119),
    [anon_sym_Type] = ACTIONS(119),
    [anon_sym_Kind] = ACTIONS(119),
    [anon_sym_Sort] = ACTIONS(119),
    [anon_sym_COLON_COLON] = ACTIONS(121),
    [anon_sym_LPAREN] = ACTIONS(121),
    [sym_line_comment_prefix] = ACTIONS(3),
    [sym_block_comment_open] = ACTIONS(5),
    [anon_sym_DASHInfinity] = ACTIONS(121),
    [anon_sym_Infinity] = ACTIONS(119),
    [anon_sym_NaN] = ACTIONS(119),
    [aux_sym_double_literal_token1] = ACTIONS(121),
    [sym_natural_literal] = ACTIONS(119),
    [sym_integer_literal] = ACTIONS(119),
    [anon_sym_DQUOTE] = ACTIONS(121),
    [anon_sym_LBRACK] = ACTIONS(121),
  },
  [39] = {
    [sym_line_comment] = STATE(39),
    [sym_block_comment] = STATE(39),
    [sym_label] = ACTIONS(123),
    [anon_sym_Natural_SLASHfold] = ACTIONS(123),
    [anon_sym_Natural_SLASHbuild] = ACTIONS(123),
    [anon_sym_Natural_SLASHisZero] = ACTIONS(123),
    [anon_sym_Natural_SLASHeven] = ACTIONS(123),
    [anon_sym_Natural_SLASHodd] = ACTIONS(123),
    [anon_sym_Natural_SLASHtoInteger] = ACTIONS(123),
    [anon_sym_Natural_SLASHshow] = ACTIONS(123),
    [anon_sym_Integer_SLASHtoDouble] = ACTIONS(123),
    [anon_sym_Integer_SLASHshow] = ACTIONS(123),
    [anon_sym_Integer_SLASHnegate] = ACTIONS(123),
    [anon_sym_Integer_SLASHclamp] = ACTIONS(123),
    [anon_sym_Natural_SLASHsubtract] = ACTIONS(123),
    [anon_sym_Double_SLASHshow] = ACTIONS(123),
    [anon_sym_List_SLASHbuild] = ACTIONS(123),
    [anon_sym_List_SLASHfold] = ACTIONS(123),
    [anon_sym_List_SLASHlength] = ACTIONS(123),
    [anon_sym_List_SLASHhead] = ACTIONS(123),
    [anon_sym_List_SLASHlast] = ACTIONS(123),
    [anon_sym_List_SLASHindexed] = ACTIONS(123),
    [anon_sym_List_SLASHreverse] = ACTIONS(123),
    [anon_sym_Text_SLASHshow] = ACTIONS(123),
    [anon_sym_Text_SLASHreplace] = ACTIONS(123),
    [anon_sym_Bool] = ACTIONS(123),
    [anon_sym_True] = ACTIONS(123),
    [anon_sym_False] = ACTIONS(123),
    [anon_sym_Optional] = ACTIONS(123),
    [anon_sym_None] = ACTIONS(123),
    [anon_sym_Natural] = ACTIONS(123),
    [anon_sym_Integer] = ACTIONS(123),
    [anon_sym_Double] = ACTIONS(123),
    [anon_sym_Text] = ACTIONS(123),
    [anon_sym_Date] = ACTIONS(123),
    [anon_sym_Time] = ACTIONS(123),
    [anon_sym_TimeZone] = ACTIONS(123),
    [anon_sym_List] = ACTIONS(123),
    [anon_sym_Type] = ACTIONS(123),
    [anon_sym_Kind] = ACTIONS(123),
    [anon_sym_Sort] = ACTIONS(123),
    [anon_sym_COLON_COLON] = ACTIONS(125),
    [anon_sym_LPAREN] = ACTIONS(125),
    [sym_line_comment_prefix] = ACTIONS(3),
    [sym_block_comment_open] = ACTIONS(5),
    [anon_sym_DASHInfinity] = ACTIONS(125),
    [anon_sym_Infinity] = ACTIONS(123),
    [anon_sym_NaN] = ACTIONS(123),
    [aux_sym_double_literal_token1] = ACTIONS(125),
    [sym_natural_literal] = ACTIONS(123),
    [sym_integer_literal] = ACTIONS(123),
    [anon_sym_DQUOTE] = ACTIONS(125),
    [anon_sym_LBRACK] = ACTIONS(125),
  },
  [40] = {
    [sym_line_comment] = STATE(40),
    [sym_block_comment] = STATE(40),
    [sym_label] = ACTIONS(127),
    [anon_sym_Natural_SLASHfold] = ACTIONS(127),
    [anon_sym_Natural_SLASHbuild] = ACTIONS(127),
    [anon_sym_Natural_SLASHisZero] = ACTIONS(127),
    [anon_sym_Natural_SLASHeven] = ACTIONS(127),
    [anon_sym_Natural_SLASHodd] = ACTIONS(127),
    [anon_sym_Natural_SLASHtoInteger] = ACTIONS(127),
    [anon_sym_Natural_SLASHshow] = ACTIONS(127),
    [anon_sym_Integer_SLASHtoDouble] = ACTIONS(127),
    [anon_sym_Integer_SLASHshow] = ACTIONS(127),
    [anon_sym_Integer_SLASHnegate] = ACTIONS(127),
    [anon_sym_Integer_SLASHclamp] = ACTIONS(127),
    [anon_sym_Natural_SLASHsubtract] = ACTIONS(127),
    [anon_sym_Double_SLASHshow] = ACTIONS(127),
    [anon_sym_List_SLASHbuild] = ACTIONS(127),
    [anon_sym_List_SLASHfold] = ACTIONS(127),
    [anon_sym_List_SLASHlength] = ACTIONS(127),
    [anon_sym_List_SLASHhead] = ACTIONS(127),
    [anon_sym_List_SLASHlast] = ACTIONS(127),
    [anon_sym_List_SLASHindexed] = ACTIONS(127),
    [anon_sym_List_SLASHreverse] = ACTIONS(127),
    [anon_sym_Text_SLASHshow] = ACTIONS(127),
    [anon_sym_Text_SLASHreplace] = ACTIONS(127),
    [anon_sym_Bool] = ACTIONS(127),
    [anon_sym_True] = ACTIONS(127),
    [anon_sym_False] = ACTIONS(127),
    [anon_sym_Optional] = ACTIONS(127),
    [anon_sym_None] = ACTIONS(127),
    [anon_sym_Natural] = ACTIONS(127),
    [anon_sym_Integer] = ACTIONS(127),
    [anon_sym_Double] = ACTIONS(127),
    [anon_sym_Text] = ACTIONS(127),
    [anon_sym_Date] = ACTIONS(127),
    [anon_sym_Time] = ACTIONS(127),
    [anon_sym_TimeZone] = ACTIONS(127),
    [anon_sym_List] = ACTIONS(127),
    [anon_sym_Type] = ACTIONS(127),
    [anon_sym_Kind] = ACTIONS(127),
    [anon_sym_Sort] = ACTIONS(127),
    [anon_sym_LPAREN] = ACTIONS(129),
    [sym_line_comment_prefix] = ACTIONS(3),
    [sym_block_comment_open] = ACTIONS(5),
    [anon_sym_DASHInfinity] = ACTIONS(129),
    [anon_sym_Infinity] = ACTIONS(127),
    [anon_sym_NaN] = ACTIONS(127),
    [aux_sym_double_literal_token1] = ACTIONS(129),
    [sym_natural_literal] = ACTIONS(127),
    [sym_integer_literal] = ACTIONS(127),
    [anon_sym_DQUOTE] = ACTIONS(129),
    [anon_sym_LBRACK] = ACTIONS(129),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    ACTIONS(59), 1,
      anon_sym_COLON,
    ACTIONS(131), 1,
      anon_sym_AT,
    STATE(51), 1,
      sym_de_bruijn_index,
    STATE(41), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(61), 7,
      ts_builtin_sym_end,
      anon_sym_EQ_EQ,
      anon_sym_COLON_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [29] = 5,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    ACTIONS(115), 1,
      anon_sym_COLON,
    STATE(42), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(117), 7,
      ts_builtin_sym_end,
      anon_sym_EQ_EQ,
      anon_sym_COLON_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [52] = 5,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    ACTIONS(123), 1,
      anon_sym_COLON,
    STATE(43), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(125), 7,
      ts_builtin_sym_end,
      anon_sym_EQ_EQ,
      anon_sym_COLON_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [75] = 5,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    ACTIONS(95), 1,
      anon_sym_COLON,
    STATE(44), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(97), 7,
      ts_builtin_sym_end,
      anon_sym_EQ_EQ,
      anon_sym_COLON_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [98] = 5,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    ACTIONS(111), 1,
      anon_sym_COLON,
    STATE(45), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(113), 7,
      ts_builtin_sym_end,
      anon_sym_EQ_EQ,
      anon_sym_COLON_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [121] = 6,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    ACTIONS(77), 1,
      anon_sym_COLON,
    ACTIONS(133), 1,
      anon_sym_COLON_COLON,
    STATE(46), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(81), 6,
      ts_builtin_sym_end,
      anon_sym_EQ_EQ,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [146] = 5,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    ACTIONS(65), 1,
      anon_sym_COLON,
    STATE(47), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(67), 7,
      ts_builtin_sym_end,
      anon_sym_EQ_EQ,
      anon_sym_COLON_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [169] = 5,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    ACTIONS(91), 1,
      anon_sym_COLON,
    STATE(48), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(93), 7,
      ts_builtin_sym_end,
      anon_sym_EQ_EQ,
      anon_sym_COLON_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [192] = 5,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    ACTIONS(73), 1,
      anon_sym_COLON,
    STATE(49), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(75), 7,
      ts_builtin_sym_end,
      anon_sym_EQ_EQ,
      anon_sym_COLON_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [215] = 5,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    ACTIONS(69), 1,
      anon_sym_COLON,
    STATE(50), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(71), 7,
      ts_builtin_sym_end,
      anon_sym_EQ_EQ,
      anon_sym_COLON_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [238] = 5,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    ACTIONS(99), 1,
      anon_sym_COLON,
    STATE(51), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(101), 7,
      ts_builtin_sym_end,
      anon_sym_EQ_EQ,
      anon_sym_COLON_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [261] = 5,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    ACTIONS(59), 1,
      anon_sym_COLON,
    STATE(52), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(61), 7,
      ts_builtin_sym_end,
      anon_sym_EQ_EQ,
      anon_sym_COLON_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [284] = 5,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    ACTIONS(83), 1,
      anon_sym_COLON,
    STATE(53), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(85), 7,
      ts_builtin_sym_end,
      anon_sym_EQ_EQ,
      anon_sym_COLON_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [307] = 5,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    ACTIONS(119), 1,
      anon_sym_COLON,
    STATE(54), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(121), 7,
      ts_builtin_sym_end,
      anon_sym_EQ_EQ,
      anon_sym_COLON_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [330] = 5,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    ACTIONS(87), 1,
      anon_sym_COLON,
    STATE(55), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(89), 7,
      ts_builtin_sym_end,
      anon_sym_EQ_EQ,
      anon_sym_COLON_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [353] = 5,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    ACTIONS(103), 1,
      anon_sym_COLON,
    STATE(56), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(105), 7,
      ts_builtin_sym_end,
      anon_sym_EQ_EQ,
      anon_sym_COLON_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [376] = 5,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    ACTIONS(107), 1,
      anon_sym_COLON,
    STATE(57), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(109), 7,
      ts_builtin_sym_end,
      anon_sym_EQ_EQ,
      anon_sym_COLON_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [399] = 4,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    STATE(58), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(135), 7,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_EQ_EQ,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [419] = 4,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    STATE(59), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(137), 7,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_EQ_EQ,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [439] = 8,
    ACTIONS(139), 1,
      sym_line_comment_prefix,
    ACTIONS(141), 1,
      sym_block_comment_open,
    ACTIONS(143), 1,
      anon_sym_DQUOTE,
    ACTIONS(148), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(71), 1,
      sym__double_quote_chunk,
    STATE(72), 1,
      sym_interpolation,
    ACTIONS(145), 2,
      aux_sym__double_quote_chunk_token1,
      sym_double_quote_escaped,
    STATE(60), 3,
      sym_line_comment,
      sym_block_comment,
      aux_sym_double_quote_literal_repeat1,
  [467] = 9,
    ACTIONS(139), 1,
      sym_line_comment_prefix,
    ACTIONS(141), 1,
      sym_block_comment_open,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    ACTIONS(155), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(60), 1,
      aux_sym_double_quote_literal_repeat1,
    STATE(71), 1,
      sym__double_quote_chunk,
    STATE(72), 1,
      sym_interpolation,
    ACTIONS(153), 2,
      aux_sym__double_quote_chunk_token1,
      sym_double_quote_escaped,
    STATE(61), 2,
      sym_line_comment,
      sym_block_comment,
  [497] = 6,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    ACTIONS(159), 1,
      anon_sym_COLON,
    ACTIONS(161), 1,
      anon_sym_EQ_EQ,
    STATE(62), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(157), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [521] = 9,
    ACTIONS(139), 1,
      sym_line_comment_prefix,
    ACTIONS(141), 1,
      sym_block_comment_open,
    ACTIONS(155), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    STATE(60), 1,
      aux_sym_double_quote_literal_repeat1,
    STATE(71), 1,
      sym__double_quote_chunk,
    STATE(72), 1,
      sym_interpolation,
    ACTIONS(153), 2,
      aux_sym__double_quote_chunk_token1,
      sym_double_quote_escaped,
    STATE(63), 2,
      sym_line_comment,
      sym_block_comment,
  [551] = 4,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    STATE(64), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(165), 7,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_EQ_EQ,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [571] = 4,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    STATE(65), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(167), 7,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_EQ_EQ,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [591] = 4,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    STATE(66), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(129), 7,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_EQ_EQ,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [611] = 4,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    STATE(67), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(169), 7,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_EQ_EQ,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [631] = 8,
    ACTIONS(139), 1,
      sym_line_comment_prefix,
    ACTIONS(141), 1,
      sym_block_comment_open,
    ACTIONS(155), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(63), 1,
      aux_sym_double_quote_literal_repeat1,
    STATE(71), 1,
      sym__double_quote_chunk,
    STATE(72), 1,
      sym_interpolation,
    ACTIONS(153), 2,
      aux_sym__double_quote_chunk_token1,
      sym_double_quote_escaped,
    STATE(68), 2,
      sym_line_comment,
      sym_block_comment,
  [658] = 8,
    ACTIONS(139), 1,
      sym_line_comment_prefix,
    ACTIONS(141), 1,
      sym_block_comment_open,
    ACTIONS(155), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(61), 1,
      aux_sym_double_quote_literal_repeat1,
    STATE(71), 1,
      sym__double_quote_chunk,
    STATE(72), 1,
      sym_interpolation,
    ACTIONS(153), 2,
      aux_sym__double_quote_chunk_token1,
      sym_double_quote_escaped,
    STATE(69), 2,
      sym_line_comment,
      sym_block_comment,
  [685] = 4,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    STATE(70), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(171), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [703] = 4,
    ACTIONS(139), 1,
      sym_line_comment_prefix,
    ACTIONS(141), 1,
      sym_block_comment_open,
    STATE(71), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(173), 4,
      anon_sym_DQUOTE,
      aux_sym__double_quote_chunk_token1,
      anon_sym_DOLLAR_LBRACE,
      sym_double_quote_escaped,
  [720] = 4,
    ACTIONS(139), 1,
      sym_line_comment_prefix,
    ACTIONS(141), 1,
      sym_block_comment_open,
    STATE(72), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(175), 4,
      anon_sym_DQUOTE,
      aux_sym__double_quote_chunk_token1,
      anon_sym_DOLLAR_LBRACE,
      sym_double_quote_escaped,
  [737] = 4,
    ACTIONS(139), 1,
      sym_line_comment_prefix,
    ACTIONS(141), 1,
      sym_block_comment_open,
    STATE(73), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(177), 4,
      anon_sym_DQUOTE,
      aux_sym__double_quote_chunk_token1,
      anon_sym_DOLLAR_LBRACE,
      sym_double_quote_escaped,
  [754] = 5,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    ACTIONS(179), 1,
      anon_sym_COMMA,
    ACTIONS(182), 1,
      anon_sym_RBRACK,
    STATE(74), 3,
      sym_line_comment,
      sym_block_comment,
      aux_sym_non_empty_list_literal_repeat1,
  [772] = 6,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    ACTIONS(184), 1,
      anon_sym_COMMA,
    ACTIONS(186), 1,
      anon_sym_RBRACK,
    STATE(81), 1,
      aux_sym_non_empty_list_literal_repeat1,
    STATE(75), 2,
      sym_line_comment,
      sym_block_comment,
  [792] = 6,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    ACTIONS(188), 1,
      anon_sym_COMMA,
    ACTIONS(190), 1,
      anon_sym_RBRACK,
    STATE(78), 1,
      aux_sym_non_empty_list_literal_repeat1,
    STATE(76), 2,
      sym_line_comment,
      sym_block_comment,
  [812] = 6,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    ACTIONS(37), 1,
      anon_sym_RBRACK,
    ACTIONS(192), 1,
      anon_sym_COMMA,
    STATE(79), 1,
      aux_sym_non_empty_list_literal_repeat1,
    STATE(77), 2,
      sym_line_comment,
      sym_block_comment,
  [832] = 6,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    ACTIONS(37), 1,
      anon_sym_RBRACK,
    ACTIONS(192), 1,
      anon_sym_COMMA,
    STATE(74), 1,
      aux_sym_non_empty_list_literal_repeat1,
    STATE(78), 2,
      sym_line_comment,
      sym_block_comment,
  [852] = 6,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    ACTIONS(27), 1,
      anon_sym_RBRACK,
    ACTIONS(194), 1,
      anon_sym_COMMA,
    STATE(74), 1,
      aux_sym_non_empty_list_literal_repeat1,
    STATE(79), 2,
      sym_line_comment,
      sym_block_comment,
  [872] = 6,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    ACTIONS(31), 1,
      anon_sym_RBRACK,
    ACTIONS(196), 1,
      anon_sym_COMMA,
    STATE(74), 1,
      aux_sym_non_empty_list_literal_repeat1,
    STATE(80), 2,
      sym_line_comment,
      sym_block_comment,
  [892] = 6,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    ACTIONS(35), 1,
      anon_sym_RBRACK,
    ACTIONS(198), 1,
      anon_sym_COMMA,
    STATE(74), 1,
      aux_sym_non_empty_list_literal_repeat1,
    STATE(81), 2,
      sym_line_comment,
      sym_block_comment,
  [912] = 6,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    ACTIONS(35), 1,
      anon_sym_RBRACK,
    ACTIONS(198), 1,
      anon_sym_COMMA,
    STATE(80), 1,
      aux_sym_non_empty_list_literal_repeat1,
    STATE(82), 2,
      sym_line_comment,
      sym_block_comment,
  [932] = 4,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    ACTIONS(182), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    STATE(83), 2,
      sym_line_comment,
      sym_block_comment,
  [947] = 4,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    ACTIONS(200), 1,
      sym_natural_literal,
    STATE(84), 2,
      sym_line_comment,
      sym_block_comment,
  [961] = 4,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    ACTIONS(202), 1,
      sym_block_comment_close,
    STATE(85), 2,
      sym_line_comment,
      sym_block_comment,
  [975] = 4,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    ACTIONS(204), 1,
      anon_sym_RBRACE,
    STATE(86), 2,
      sym_line_comment,
      sym_block_comment,
  [989] = 4,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    ACTIONS(206), 1,
      anon_sym_RPAREN,
    STATE(87), 2,
      sym_line_comment,
      sym_block_comment,
  [1003] = 4,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    ACTIONS(208), 1,
      sym_natural_literal,
    STATE(88), 2,
      sym_line_comment,
      sym_block_comment,
  [1017] = 4,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    ACTIONS(210), 1,
      anon_sym_RPAREN,
    STATE(89), 2,
      sym_line_comment,
      sym_block_comment,
  [1031] = 4,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    ACTIONS(212), 1,
      ts_builtin_sym_end,
    STATE(90), 2,
      sym_line_comment,
      sym_block_comment,
  [1045] = 4,
    ACTIONS(139), 1,
      sym_line_comment_prefix,
    ACTIONS(141), 1,
      sym_block_comment_open,
    ACTIONS(214), 1,
      sym_line_comment_content,
    STATE(91), 2,
      sym_line_comment,
      sym_block_comment,
  [1059] = 4,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    ACTIONS(216), 1,
      sym_block_comment_content,
    STATE(92), 2,
      sym_line_comment,
      sym_block_comment,
  [1073] = 1,
    ACTIONS(218), 1,
      ts_builtin_sym_end,
  [1077] = 1,
    ACTIONS(220), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(41)] = 0,
  [SMALL_STATE(42)] = 29,
  [SMALL_STATE(43)] = 52,
  [SMALL_STATE(44)] = 75,
  [SMALL_STATE(45)] = 98,
  [SMALL_STATE(46)] = 121,
  [SMALL_STATE(47)] = 146,
  [SMALL_STATE(48)] = 169,
  [SMALL_STATE(49)] = 192,
  [SMALL_STATE(50)] = 215,
  [SMALL_STATE(51)] = 238,
  [SMALL_STATE(52)] = 261,
  [SMALL_STATE(53)] = 284,
  [SMALL_STATE(54)] = 307,
  [SMALL_STATE(55)] = 330,
  [SMALL_STATE(56)] = 353,
  [SMALL_STATE(57)] = 376,
  [SMALL_STATE(58)] = 399,
  [SMALL_STATE(59)] = 419,
  [SMALL_STATE(60)] = 439,
  [SMALL_STATE(61)] = 467,
  [SMALL_STATE(62)] = 497,
  [SMALL_STATE(63)] = 521,
  [SMALL_STATE(64)] = 551,
  [SMALL_STATE(65)] = 571,
  [SMALL_STATE(66)] = 591,
  [SMALL_STATE(67)] = 611,
  [SMALL_STATE(68)] = 631,
  [SMALL_STATE(69)] = 658,
  [SMALL_STATE(70)] = 685,
  [SMALL_STATE(71)] = 703,
  [SMALL_STATE(72)] = 720,
  [SMALL_STATE(73)] = 737,
  [SMALL_STATE(74)] = 754,
  [SMALL_STATE(75)] = 772,
  [SMALL_STATE(76)] = 792,
  [SMALL_STATE(77)] = 812,
  [SMALL_STATE(78)] = 832,
  [SMALL_STATE(79)] = 852,
  [SMALL_STATE(80)] = 872,
  [SMALL_STATE(81)] = 892,
  [SMALL_STATE(82)] = 912,
  [SMALL_STATE(83)] = 932,
  [SMALL_STATE(84)] = 947,
  [SMALL_STATE(85)] = 961,
  [SMALL_STATE(86)] = 975,
  [SMALL_STATE(87)] = 989,
  [SMALL_STATE(88)] = 1003,
  [SMALL_STATE(89)] = 1017,
  [SMALL_STATE(90)] = 1031,
  [SMALL_STATE(91)] = 1045,
  [SMALL_STATE(92)] = 1059,
  [SMALL_STATE(93)] = 1073,
  [SMALL_STATE(94)] = 1077,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__selector_expression, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector_expression, 1),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_literal, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_literal, 1),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive_expression, 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_expression, 1),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__import_expression, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__import_expression, 1),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_literal, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_literal, 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_non_empty_list_literal, 6),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_non_empty_list_literal, 6),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_literal, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_literal, 1),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin, 1),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 2),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_de_bruijn_index, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_de_bruijn_index, 2),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive_expression, 3),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_expression, 3),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quote_literal, 3),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quote_literal, 3),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_non_empty_list_literal, 3),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_non_empty_list_literal, 3),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_non_empty_list_literal, 4),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_non_empty_list_literal, 4),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_non_empty_list_literal, 5),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_non_empty_list_literal, 5),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__import_expression, 3),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__import_expression, 3),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equal_expression, 3),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__application_expression, 3),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quote_literal_repeat1, 2),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quote_literal_repeat1, 2), SHIFT_REPEAT(72),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quote_literal_repeat1, 2), SHIFT_REPEAT(10),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__operator_expression, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__application_expression, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__application_expression, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quote_literal_repeat1, 1),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quote_chunk, 1),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 3),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_non_empty_list_literal_repeat1, 2), SHIFT_REPEAT(13),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_non_empty_list_literal_repeat1, 2),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [212] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 2),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_dhall_external_scanner_create(void);
void tree_sitter_dhall_external_scanner_destroy(void *);
bool tree_sitter_dhall_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_dhall_external_scanner_serialize(void *, char *);
void tree_sitter_dhall_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_dhall(void) {
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
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_label,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_dhall_external_scanner_create,
      tree_sitter_dhall_external_scanner_destroy,
      tree_sitter_dhall_external_scanner_scan,
      tree_sitter_dhall_external_scanner_serialize,
      tree_sitter_dhall_external_scanner_deserialize,
    },
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
