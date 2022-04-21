#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 53
#define LARGE_STATE_COUNT 11
#define SYMBOL_COUNT 42
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_COLON = 1,
  anon_sym_merge = 2,
  anon_sym_Some = 3,
  anon_sym_toMap = 4,
  anon_sym_showConstructor = 5,
  anon_sym_COLON_COLON = 6,
  anon_sym_LPAREN = 7,
  anon_sym_RPAREN = 8,
  sym_line_comment_prefix = 9,
  sym_line_comment_content = 10,
  sym_block_comment_open = 11,
  sym_block_comment_close = 12,
  sym_double_literal = 13,
  sym_natural_literal = 14,
  sym_integer_literal = 15,
  anon_sym_DQUOTE = 16,
  aux_sym__double_quote_chunk_token1 = 17,
  anon_sym_DOLLAR_LBRACE = 18,
  anon_sym_RBRACE = 19,
  sym_double_quote_escaped = 20,
  anon_sym_LBRACK = 21,
  anon_sym_COMMA = 22,
  anon_sym_RBRACK = 23,
  sym_block_comment_content = 24,
  sym_block_comment_end = 25,
  sym_expression = 26,
  sym__operator_expression = 27,
  sym__application_expression = 28,
  sym__import_expression = 29,
  sym__selector_expression = 30,
  sym_primitive_expression = 31,
  sym_line_comment = 32,
  sym_block_comment = 33,
  sym_numeric_literal = 34,
  sym_text_literal = 35,
  sym_double_quote_literal = 36,
  sym__double_quote_chunk = 37,
  sym_interpolation = 38,
  sym_non_empty_list_literal = 39,
  aux_sym_double_quote_literal_repeat1 = 40,
  aux_sym_non_empty_list_literal_repeat1 = 41,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COLON] = ":",
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
  [sym_double_literal] = "double_literal",
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
  [sym_block_comment_content] = "block_comment_content",
  [sym_block_comment_end] = "block_comment_end",
  [sym_expression] = "expression",
  [sym__operator_expression] = "_operator_expression",
  [sym__application_expression] = "_application_expression",
  [sym__import_expression] = "_import_expression",
  [sym__selector_expression] = "_selector_expression",
  [sym_primitive_expression] = "primitive_expression",
  [sym_line_comment] = "line_comment",
  [sym_block_comment] = "block_comment",
  [sym_numeric_literal] = "numeric_literal",
  [sym_text_literal] = "text_literal",
  [sym_double_quote_literal] = "double_quote_literal",
  [sym__double_quote_chunk] = "_double_quote_chunk",
  [sym_interpolation] = "interpolation",
  [sym_non_empty_list_literal] = "non_empty_list_literal",
  [aux_sym_double_quote_literal_repeat1] = "double_quote_literal_repeat1",
  [aux_sym_non_empty_list_literal_repeat1] = "non_empty_list_literal_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_COLON] = anon_sym_COLON,
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
  [sym_double_literal] = sym_double_literal,
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
  [sym_block_comment_content] = sym_block_comment_content,
  [sym_block_comment_end] = sym_block_comment_end,
  [sym_expression] = sym_expression,
  [sym__operator_expression] = sym__operator_expression,
  [sym__application_expression] = sym__application_expression,
  [sym__import_expression] = sym__import_expression,
  [sym__selector_expression] = sym__selector_expression,
  [sym_primitive_expression] = sym_primitive_expression,
  [sym_line_comment] = sym_line_comment,
  [sym_block_comment] = sym_block_comment,
  [sym_numeric_literal] = sym_numeric_literal,
  [sym_text_literal] = sym_text_literal,
  [sym_double_quote_literal] = sym_double_quote_literal,
  [sym__double_quote_chunk] = sym__double_quote_chunk,
  [sym_interpolation] = sym_interpolation,
  [sym_non_empty_list_literal] = sym_non_empty_list_literal,
  [aux_sym_double_quote_literal_repeat1] = aux_sym_double_quote_literal_repeat1,
  [aux_sym_non_empty_list_literal_repeat1] = aux_sym_non_empty_list_literal_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_COLON] = {
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
  [sym_double_literal] = {
    .visible = true,
    .named = true,
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
  [sym__operator_expression] = {
    .visible = false,
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
      if (eof) ADVANCE(58);
      if (lookahead == '"') ADVANCE(85);
      if (lookahead == '$') ADVANCE(42);
      if (lookahead == '(') ADVANCE(65);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == '+') ADVANCE(4);
      if (lookahead == ',') ADVANCE(95);
      if (lookahead == '-') ADVANCE(2);
      if (lookahead == '0') ADVANCE(79);
      if (lookahead == ':') ADVANCE(59);
      if (lookahead == 'I') ADVANCE(22);
      if (lookahead == 'N') ADVANCE(10);
      if (lookahead == 'S') ADVANCE(25);
      if (lookahead == '[') ADVANCE(94);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == ']') ADVANCE(96);
      if (lookahead == 'm') ADVANCE(13);
      if (lookahead == 's') ADVANCE(18);
      if (lookahead == 't') ADVANCE(26);
      if (lookahead == '{') ADVANCE(3);
      if (lookahead == '}') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(85);
      if (lookahead == '$') ADVANCE(90);
      if (lookahead == '-') ADVANCE(88);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == '{') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(87);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 2:
      if (lookahead == '-') ADVANCE(67);
      if (lookahead == '0') ADVANCE(82);
      if (lookahead == 'I') ADVANCE(22);
      if (lookahead == '}') ADVANCE(75);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(73);
      END_STATE();
    case 4:
      if (lookahead == '0') ADVANCE(82);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 5:
      if (lookahead == '0') ADVANCE(5);
      if (lookahead == '}') ADVANCE(93);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(49);
      END_STATE();
    case 6:
      if (lookahead == '0') ADVANCE(5);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(49);
      END_STATE();
    case 7:
      if (lookahead == 'C') ADVANCE(28);
      END_STATE();
    case 8:
      if (lookahead == 'M') ADVANCE(11);
      END_STATE();
    case 9:
      if (lookahead == 'N') ADVANCE(76);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(37);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 16:
      if (lookahead == 'f') ADVANCE(20);
      END_STATE();
    case 17:
      if (lookahead == 'g') ADVANCE(15);
      END_STATE();
    case 18:
      if (lookahead == 'h') ADVANCE(27);
      END_STATE();
    case 19:
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 20:
      if (lookahead == 'i') ADVANCE(24);
      END_STATE();
    case 21:
      if (lookahead == 'm') ADVANCE(14);
      END_STATE();
    case 22:
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 23:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 24:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 25:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 26:
      if (lookahead == 'o') ADVANCE(8);
      END_STATE();
    case 27:
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 28:
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 29:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 30:
      if (lookahead == 'p') ADVANCE(62);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 32:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 34:
      if (lookahead == 's') ADVANCE(36);
      END_STATE();
    case 35:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 36:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 37:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 38:
      if (lookahead == 'u') ADVANCE(43);
      if (sym_double_quote_escaped_character_set_1(lookahead)) ADVANCE(93);
      END_STATE();
    case 39:
      if (lookahead == 'u') ADVANCE(12);
      END_STATE();
    case 40:
      if (lookahead == 'w') ADVANCE(7);
      END_STATE();
    case 41:
      if (lookahead == 'y') ADVANCE(76);
      END_STATE();
    case 42:
      if (lookahead == '{') ADVANCE(91);
      END_STATE();
    case 43:
      if (lookahead == '{') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(57);
      END_STATE();
    case 44:
      if (lookahead == '}') ADVANCE(93);
      END_STATE();
    case 45:
      if (lookahead == '}') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(44);
      END_STATE();
    case 46:
      if (lookahead == '}') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(45);
      END_STATE();
    case 47:
      if (lookahead == '}') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(46);
      END_STATE();
    case 48:
      if (lookahead == '}') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(47);
      END_STATE();
    case 49:
      if (lookahead == '}') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(48);
      END_STATE();
    case 50:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(93);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(81);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(84);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(53);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(56);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(64);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_merge);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_Some);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_toMap);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_showConstructor);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_line_comment_prefix);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_line_comment_prefix);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(72);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_line_comment_content);
      if (lookahead == '-') ADVANCE(70);
      if (lookahead == '{') ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(72);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_line_comment_content);
      if (lookahead == '-') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(72);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_line_comment_content);
      if (lookahead == '-') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(72);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_line_comment_content);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_block_comment_open);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_block_comment_open);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(72);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_block_comment_close);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_double_literal);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_double_literal);
      if (lookahead == 'e') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_double_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_natural_literal);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == 'e') ADVANCE(50);
      if (lookahead == 'x') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_natural_literal);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == 'e') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_natural_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == 'e') ADVANCE(50);
      if (lookahead == 'x') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == 'e') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_integer_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym__double_quote_chunk_token1);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym__double_quote_chunk_token1);
      if (lookahead == '$') ADVANCE(90);
      if (lookahead == '-') ADVANCE(88);
      if (lookahead == '{') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(86);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym__double_quote_chunk_token1);
      if (lookahead == '-') ADVANCE(67);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym__double_quote_chunk_token1);
      if (lookahead == '-') ADVANCE(73);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym__double_quote_chunk_token1);
      if (lookahead == '{') ADVANCE(91);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_double_quote_escaped);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_RBRACK);
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
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 69},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0, .external_lex_state = 2},
  [51] = {(TSStateId)(-1)},
  [52] = {(TSStateId)(-1)},
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
    [anon_sym_COLON] = ACTIONS(1),
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
    [sym_double_literal] = ACTIONS(1),
    [sym_natural_literal] = ACTIONS(1),
    [sym_integer_literal] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_double_quote_escaped] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_block_comment_content] = ACTIONS(1),
    [sym_block_comment_end] = ACTIONS(1),
  },
  [1] = {
    [sym_expression] = STATE(49),
    [sym__operator_expression] = STATE(30),
    [sym__application_expression] = STATE(32),
    [sym__import_expression] = STATE(33),
    [sym__selector_expression] = STATE(16),
    [sym_primitive_expression] = STATE(17),
    [sym_line_comment] = STATE(1),
    [sym_block_comment] = STATE(1),
    [sym_numeric_literal] = STATE(18),
    [sym_text_literal] = STATE(18),
    [sym_double_quote_literal] = STATE(19),
    [sym_non_empty_list_literal] = STATE(18),
    [anon_sym_merge] = ACTIONS(7),
    [anon_sym_Some] = ACTIONS(9),
    [anon_sym_toMap] = ACTIONS(9),
    [anon_sym_showConstructor] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [sym_line_comment_prefix] = ACTIONS(3),
    [sym_block_comment_open] = ACTIONS(5),
    [sym_double_literal] = ACTIONS(13),
    [sym_natural_literal] = ACTIONS(15),
    [sym_integer_literal] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
  },
  [2] = {
    [sym_expression] = STATE(42),
    [sym__operator_expression] = STATE(30),
    [sym__application_expression] = STATE(32),
    [sym__import_expression] = STATE(33),
    [sym__selector_expression] = STATE(16),
    [sym_primitive_expression] = STATE(17),
    [sym_line_comment] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym_numeric_literal] = STATE(18),
    [sym_text_literal] = STATE(18),
    [sym_double_quote_literal] = STATE(19),
    [sym_non_empty_list_literal] = STATE(18),
    [anon_sym_merge] = ACTIONS(7),
    [anon_sym_Some] = ACTIONS(9),
    [anon_sym_toMap] = ACTIONS(9),
    [anon_sym_showConstructor] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [sym_line_comment_prefix] = ACTIONS(3),
    [sym_block_comment_open] = ACTIONS(5),
    [sym_double_literal] = ACTIONS(13),
    [sym_natural_literal] = ACTIONS(15),
    [sym_integer_literal] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_COMMA] = ACTIONS(21),
  },
  [3] = {
    [sym_expression] = STATE(44),
    [sym__operator_expression] = STATE(30),
    [sym__application_expression] = STATE(32),
    [sym__import_expression] = STATE(33),
    [sym__selector_expression] = STATE(16),
    [sym_primitive_expression] = STATE(17),
    [sym_line_comment] = STATE(3),
    [sym_block_comment] = STATE(3),
    [sym_numeric_literal] = STATE(18),
    [sym_text_literal] = STATE(18),
    [sym_double_quote_literal] = STATE(19),
    [sym_non_empty_list_literal] = STATE(18),
    [anon_sym_merge] = ACTIONS(7),
    [anon_sym_Some] = ACTIONS(9),
    [anon_sym_toMap] = ACTIONS(9),
    [anon_sym_showConstructor] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [sym_line_comment_prefix] = ACTIONS(3),
    [sym_block_comment_open] = ACTIONS(5),
    [sym_double_literal] = ACTIONS(13),
    [sym_natural_literal] = ACTIONS(15),
    [sym_integer_literal] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_RBRACK] = ACTIONS(23),
  },
  [4] = {
    [sym_expression] = STATE(44),
    [sym__operator_expression] = STATE(30),
    [sym__application_expression] = STATE(32),
    [sym__import_expression] = STATE(33),
    [sym__selector_expression] = STATE(16),
    [sym_primitive_expression] = STATE(17),
    [sym_line_comment] = STATE(4),
    [sym_block_comment] = STATE(4),
    [sym_numeric_literal] = STATE(18),
    [sym_text_literal] = STATE(18),
    [sym_double_quote_literal] = STATE(19),
    [sym_non_empty_list_literal] = STATE(18),
    [anon_sym_merge] = ACTIONS(7),
    [anon_sym_Some] = ACTIONS(9),
    [anon_sym_toMap] = ACTIONS(9),
    [anon_sym_showConstructor] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [sym_line_comment_prefix] = ACTIONS(3),
    [sym_block_comment_open] = ACTIONS(5),
    [sym_double_literal] = ACTIONS(13),
    [sym_natural_literal] = ACTIONS(15),
    [sym_integer_literal] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_RBRACK] = ACTIONS(25),
  },
  [5] = {
    [sym_expression] = STATE(44),
    [sym__operator_expression] = STATE(30),
    [sym__application_expression] = STATE(32),
    [sym__import_expression] = STATE(33),
    [sym__selector_expression] = STATE(16),
    [sym_primitive_expression] = STATE(17),
    [sym_line_comment] = STATE(5),
    [sym_block_comment] = STATE(5),
    [sym_numeric_literal] = STATE(18),
    [sym_text_literal] = STATE(18),
    [sym_double_quote_literal] = STATE(19),
    [sym_non_empty_list_literal] = STATE(18),
    [anon_sym_merge] = ACTIONS(7),
    [anon_sym_Some] = ACTIONS(9),
    [anon_sym_toMap] = ACTIONS(9),
    [anon_sym_showConstructor] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [sym_line_comment_prefix] = ACTIONS(3),
    [sym_block_comment_open] = ACTIONS(5),
    [sym_double_literal] = ACTIONS(13),
    [sym_natural_literal] = ACTIONS(15),
    [sym_integer_literal] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_RBRACK] = ACTIONS(27),
  },
  [6] = {
    [sym_expression] = STATE(47),
    [sym__operator_expression] = STATE(30),
    [sym__application_expression] = STATE(32),
    [sym__import_expression] = STATE(33),
    [sym__selector_expression] = STATE(16),
    [sym_primitive_expression] = STATE(17),
    [sym_line_comment] = STATE(6),
    [sym_block_comment] = STATE(6),
    [sym_numeric_literal] = STATE(18),
    [sym_text_literal] = STATE(18),
    [sym_double_quote_literal] = STATE(19),
    [sym_non_empty_list_literal] = STATE(18),
    [anon_sym_merge] = ACTIONS(7),
    [anon_sym_Some] = ACTIONS(9),
    [anon_sym_toMap] = ACTIONS(9),
    [anon_sym_showConstructor] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [sym_line_comment_prefix] = ACTIONS(3),
    [sym_block_comment_open] = ACTIONS(5),
    [sym_double_literal] = ACTIONS(13),
    [sym_natural_literal] = ACTIONS(15),
    [sym_integer_literal] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
  },
  [7] = {
    [sym_expression] = STATE(41),
    [sym__operator_expression] = STATE(30),
    [sym__application_expression] = STATE(32),
    [sym__import_expression] = STATE(33),
    [sym__selector_expression] = STATE(16),
    [sym_primitive_expression] = STATE(17),
    [sym_line_comment] = STATE(7),
    [sym_block_comment] = STATE(7),
    [sym_numeric_literal] = STATE(18),
    [sym_text_literal] = STATE(18),
    [sym_double_quote_literal] = STATE(19),
    [sym_non_empty_list_literal] = STATE(18),
    [anon_sym_merge] = ACTIONS(7),
    [anon_sym_Some] = ACTIONS(9),
    [anon_sym_toMap] = ACTIONS(9),
    [anon_sym_showConstructor] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [sym_line_comment_prefix] = ACTIONS(3),
    [sym_block_comment_open] = ACTIONS(5),
    [sym_double_literal] = ACTIONS(13),
    [sym_natural_literal] = ACTIONS(15),
    [sym_integer_literal] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
  },
  [8] = {
    [sym_expression] = STATE(48),
    [sym__operator_expression] = STATE(30),
    [sym__application_expression] = STATE(32),
    [sym__import_expression] = STATE(33),
    [sym__selector_expression] = STATE(16),
    [sym_primitive_expression] = STATE(17),
    [sym_line_comment] = STATE(8),
    [sym_block_comment] = STATE(8),
    [sym_numeric_literal] = STATE(18),
    [sym_text_literal] = STATE(18),
    [sym_double_quote_literal] = STATE(19),
    [sym_non_empty_list_literal] = STATE(18),
    [anon_sym_merge] = ACTIONS(7),
    [anon_sym_Some] = ACTIONS(9),
    [anon_sym_toMap] = ACTIONS(9),
    [anon_sym_showConstructor] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [sym_line_comment_prefix] = ACTIONS(3),
    [sym_block_comment_open] = ACTIONS(5),
    [sym_double_literal] = ACTIONS(13),
    [sym_natural_literal] = ACTIONS(15),
    [sym_integer_literal] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
  },
  [9] = {
    [sym_expression] = STATE(35),
    [sym__operator_expression] = STATE(30),
    [sym__application_expression] = STATE(32),
    [sym__import_expression] = STATE(33),
    [sym__selector_expression] = STATE(16),
    [sym_primitive_expression] = STATE(17),
    [sym_line_comment] = STATE(9),
    [sym_block_comment] = STATE(9),
    [sym_numeric_literal] = STATE(18),
    [sym_text_literal] = STATE(18),
    [sym_double_quote_literal] = STATE(19),
    [sym_non_empty_list_literal] = STATE(18),
    [anon_sym_merge] = ACTIONS(7),
    [anon_sym_Some] = ACTIONS(9),
    [anon_sym_toMap] = ACTIONS(9),
    [anon_sym_showConstructor] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [sym_line_comment_prefix] = ACTIONS(3),
    [sym_block_comment_open] = ACTIONS(5),
    [sym_double_literal] = ACTIONS(13),
    [sym_natural_literal] = ACTIONS(15),
    [sym_integer_literal] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
  },
  [10] = {
    [sym_expression] = STATE(44),
    [sym__operator_expression] = STATE(30),
    [sym__application_expression] = STATE(32),
    [sym__import_expression] = STATE(33),
    [sym__selector_expression] = STATE(16),
    [sym_primitive_expression] = STATE(17),
    [sym_line_comment] = STATE(10),
    [sym_block_comment] = STATE(10),
    [sym_numeric_literal] = STATE(18),
    [sym_text_literal] = STATE(18),
    [sym_double_quote_literal] = STATE(19),
    [sym_non_empty_list_literal] = STATE(18),
    [anon_sym_merge] = ACTIONS(7),
    [anon_sym_Some] = ACTIONS(9),
    [anon_sym_toMap] = ACTIONS(9),
    [anon_sym_showConstructor] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [sym_line_comment_prefix] = ACTIONS(3),
    [sym_block_comment_open] = ACTIONS(5),
    [sym_double_literal] = ACTIONS(13),
    [sym_natural_literal] = ACTIONS(15),
    [sym_integer_literal] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym_double_literal,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    STATE(16), 1,
      sym__selector_expression,
    STATE(17), 1,
      sym_primitive_expression,
    STATE(19), 1,
      sym_double_quote_literal,
    STATE(22), 1,
      sym__import_expression,
    ACTIONS(15), 2,
      sym_natural_literal,
      sym_integer_literal,
    STATE(11), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(18), 3,
      sym_numeric_literal,
      sym_text_literal,
      sym_non_empty_list_literal,
  [44] = 13,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym_double_literal,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    STATE(16), 1,
      sym__selector_expression,
    STATE(17), 1,
      sym_primitive_expression,
    STATE(19), 1,
      sym_double_quote_literal,
    STATE(34), 1,
      sym__import_expression,
    ACTIONS(15), 2,
      sym_natural_literal,
      sym_integer_literal,
    STATE(12), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(18), 3,
      sym_numeric_literal,
      sym_text_literal,
      sym_non_empty_list_literal,
  [88] = 5,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    STATE(13), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(31), 3,
      anon_sym_COLON,
      sym_natural_literal,
      sym_integer_literal,
    ACTIONS(29), 10,
      ts_builtin_sym_end,
      anon_sym_COLON_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_double_literal,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [116] = 5,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    STATE(14), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(35), 3,
      anon_sym_COLON,
      sym_natural_literal,
      sym_integer_literal,
    ACTIONS(33), 10,
      ts_builtin_sym_end,
      anon_sym_COLON_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_double_literal,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [144] = 5,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    STATE(15), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(39), 3,
      anon_sym_COLON,
      sym_natural_literal,
      sym_integer_literal,
    ACTIONS(37), 10,
      ts_builtin_sym_end,
      anon_sym_COLON_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_double_literal,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [172] = 6,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    ACTIONS(45), 1,
      anon_sym_COLON_COLON,
    STATE(16), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(43), 3,
      anon_sym_COLON,
      sym_natural_literal,
      sym_integer_literal,
    ACTIONS(41), 9,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_double_literal,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [202] = 5,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    STATE(17), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(49), 3,
      anon_sym_COLON,
      sym_natural_literal,
      sym_integer_literal,
    ACTIONS(47), 10,
      ts_builtin_sym_end,
      anon_sym_COLON_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_double_literal,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [230] = 5,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    STATE(18), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(53), 3,
      anon_sym_COLON,
      sym_natural_literal,
      sym_integer_literal,
    ACTIONS(51), 10,
      ts_builtin_sym_end,
      anon_sym_COLON_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_double_literal,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [258] = 5,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    STATE(19), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(57), 3,
      anon_sym_COLON,
      sym_natural_literal,
      sym_integer_literal,
    ACTIONS(55), 10,
      ts_builtin_sym_end,
      anon_sym_COLON_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_double_literal,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [286] = 5,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    STATE(20), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(61), 3,
      anon_sym_COLON,
      sym_natural_literal,
      sym_integer_literal,
    ACTIONS(59), 10,
      ts_builtin_sym_end,
      anon_sym_COLON_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_double_literal,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [314] = 5,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    STATE(21), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(65), 3,
      anon_sym_COLON,
      sym_natural_literal,
      sym_integer_literal,
    ACTIONS(63), 10,
      ts_builtin_sym_end,
      anon_sym_COLON_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_double_literal,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [342] = 13,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym_double_literal,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    STATE(16), 1,
      sym__selector_expression,
    STATE(17), 1,
      sym_primitive_expression,
    STATE(19), 1,
      sym_double_quote_literal,
    STATE(31), 1,
      sym__import_expression,
    ACTIONS(15), 2,
      sym_natural_literal,
      sym_integer_literal,
    STATE(22), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(18), 3,
      sym_numeric_literal,
      sym_text_literal,
      sym_non_empty_list_literal,
  [386] = 5,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    STATE(23), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(69), 3,
      anon_sym_COLON,
      sym_natural_literal,
      sym_integer_literal,
    ACTIONS(67), 10,
      ts_builtin_sym_end,
      anon_sym_COLON_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_double_literal,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [414] = 5,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    STATE(24), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(73), 3,
      anon_sym_COLON,
      sym_natural_literal,
      sym_integer_literal,
    ACTIONS(71), 10,
      ts_builtin_sym_end,
      anon_sym_COLON_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_double_literal,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [442] = 5,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    ACTIONS(77), 2,
      sym_natural_literal,
      sym_integer_literal,
    STATE(25), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(75), 10,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_double_literal,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [469] = 12,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym_double_literal,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    STATE(17), 1,
      sym_primitive_expression,
    STATE(19), 1,
      sym_double_quote_literal,
    STATE(25), 1,
      sym__selector_expression,
    ACTIONS(15), 2,
      sym_natural_literal,
      sym_integer_literal,
    STATE(26), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(18), 3,
      sym_numeric_literal,
      sym_text_literal,
      sym_non_empty_list_literal,
  [510] = 9,
    ACTIONS(79), 1,
      sym_line_comment_prefix,
    ACTIONS(81), 1,
      sym_block_comment_open,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(87), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(28), 1,
      aux_sym_double_quote_literal_repeat1,
    STATE(36), 1,
      sym__double_quote_chunk,
    STATE(37), 1,
      sym_interpolation,
    ACTIONS(85), 2,
      aux_sym__double_quote_chunk_token1,
      sym_double_quote_escaped,
    STATE(27), 2,
      sym_line_comment,
      sym_block_comment,
  [540] = 8,
    ACTIONS(79), 1,
      sym_line_comment_prefix,
    ACTIONS(81), 1,
      sym_block_comment_open,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(94), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(36), 1,
      sym__double_quote_chunk,
    STATE(37), 1,
      sym_interpolation,
    ACTIONS(91), 2,
      aux_sym__double_quote_chunk_token1,
      sym_double_quote_escaped,
    STATE(28), 3,
      sym_line_comment,
      sym_block_comment,
      aux_sym_double_quote_literal_repeat1,
  [568] = 8,
    ACTIONS(79), 1,
      sym_line_comment_prefix,
    ACTIONS(81), 1,
      sym_block_comment_open,
    ACTIONS(87), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(27), 1,
      aux_sym_double_quote_literal_repeat1,
    STATE(36), 1,
      sym__double_quote_chunk,
    STATE(37), 1,
      sym_interpolation,
    ACTIONS(85), 2,
      aux_sym__double_quote_chunk_token1,
      sym_double_quote_escaped,
    STATE(29), 2,
      sym_line_comment,
      sym_block_comment,
  [595] = 5,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    ACTIONS(99), 1,
      anon_sym_COLON,
    STATE(30), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(97), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [616] = 4,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    STATE(31), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(101), 6,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [635] = 4,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    STATE(32), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(103), 6,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [654] = 4,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    STATE(33), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(105), 6,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [673] = 4,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    STATE(34), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(107), 6,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [692] = 4,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    STATE(35), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(109), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [710] = 4,
    ACTIONS(79), 1,
      sym_line_comment_prefix,
    ACTIONS(81), 1,
      sym_block_comment_open,
    STATE(36), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(111), 4,
      anon_sym_DQUOTE,
      aux_sym__double_quote_chunk_token1,
      anon_sym_DOLLAR_LBRACE,
      sym_double_quote_escaped,
  [727] = 4,
    ACTIONS(79), 1,
      sym_line_comment_prefix,
    ACTIONS(81), 1,
      sym_block_comment_open,
    STATE(37), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(113), 4,
      anon_sym_DQUOTE,
      aux_sym__double_quote_chunk_token1,
      anon_sym_DOLLAR_LBRACE,
      sym_double_quote_escaped,
  [744] = 4,
    ACTIONS(79), 1,
      sym_line_comment_prefix,
    ACTIONS(81), 1,
      sym_block_comment_open,
    STATE(38), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(115), 4,
      anon_sym_DQUOTE,
      aux_sym__double_quote_chunk_token1,
      anon_sym_DOLLAR_LBRACE,
      sym_double_quote_escaped,
  [761] = 6,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    ACTIONS(25), 1,
      anon_sym_RBRACK,
    ACTIONS(117), 1,
      anon_sym_COMMA,
    STATE(43), 1,
      aux_sym_non_empty_list_literal_repeat1,
    STATE(39), 2,
      sym_line_comment,
      sym_block_comment,
  [781] = 6,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    ACTIONS(23), 1,
      anon_sym_RBRACK,
    ACTIONS(119), 1,
      anon_sym_COMMA,
    STATE(43), 1,
      aux_sym_non_empty_list_literal_repeat1,
    STATE(40), 2,
      sym_line_comment,
      sym_block_comment,
  [801] = 6,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    ACTIONS(23), 1,
      anon_sym_RBRACK,
    ACTIONS(119), 1,
      anon_sym_COMMA,
    STATE(39), 1,
      aux_sym_non_empty_list_literal_repeat1,
    STATE(41), 2,
      sym_line_comment,
      sym_block_comment,
  [821] = 6,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    ACTIONS(121), 1,
      anon_sym_COMMA,
    ACTIONS(123), 1,
      anon_sym_RBRACK,
    STATE(40), 1,
      aux_sym_non_empty_list_literal_repeat1,
    STATE(42), 2,
      sym_line_comment,
      sym_block_comment,
  [841] = 5,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    ACTIONS(125), 1,
      anon_sym_COMMA,
    ACTIONS(128), 1,
      anon_sym_RBRACK,
    STATE(43), 3,
      sym_line_comment,
      sym_block_comment,
      aux_sym_non_empty_list_literal_repeat1,
  [859] = 4,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    ACTIONS(128), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    STATE(44), 2,
      sym_line_comment,
      sym_block_comment,
  [874] = 4,
    ACTIONS(79), 1,
      sym_line_comment_prefix,
    ACTIONS(81), 1,
      sym_block_comment_open,
    ACTIONS(130), 1,
      sym_line_comment_content,
    STATE(45), 2,
      sym_line_comment,
      sym_block_comment,
  [888] = 4,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    ACTIONS(132), 1,
      sym_block_comment_close,
    STATE(46), 2,
      sym_line_comment,
      sym_block_comment,
  [902] = 4,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    ACTIONS(134), 1,
      anon_sym_RPAREN,
    STATE(47), 2,
      sym_line_comment,
      sym_block_comment,
  [916] = 4,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    ACTIONS(136), 1,
      anon_sym_RBRACE,
    STATE(48), 2,
      sym_line_comment,
      sym_block_comment,
  [930] = 4,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    ACTIONS(138), 1,
      ts_builtin_sym_end,
    STATE(49), 2,
      sym_line_comment,
      sym_block_comment,
  [944] = 4,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    ACTIONS(140), 1,
      sym_block_comment_content,
    STATE(50), 2,
      sym_line_comment,
      sym_block_comment,
  [958] = 1,
    ACTIONS(142), 1,
      ts_builtin_sym_end,
  [962] = 1,
    ACTIONS(144), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(11)] = 0,
  [SMALL_STATE(12)] = 44,
  [SMALL_STATE(13)] = 88,
  [SMALL_STATE(14)] = 116,
  [SMALL_STATE(15)] = 144,
  [SMALL_STATE(16)] = 172,
  [SMALL_STATE(17)] = 202,
  [SMALL_STATE(18)] = 230,
  [SMALL_STATE(19)] = 258,
  [SMALL_STATE(20)] = 286,
  [SMALL_STATE(21)] = 314,
  [SMALL_STATE(22)] = 342,
  [SMALL_STATE(23)] = 386,
  [SMALL_STATE(24)] = 414,
  [SMALL_STATE(25)] = 442,
  [SMALL_STATE(26)] = 469,
  [SMALL_STATE(27)] = 510,
  [SMALL_STATE(28)] = 540,
  [SMALL_STATE(29)] = 568,
  [SMALL_STATE(30)] = 595,
  [SMALL_STATE(31)] = 616,
  [SMALL_STATE(32)] = 635,
  [SMALL_STATE(33)] = 654,
  [SMALL_STATE(34)] = 673,
  [SMALL_STATE(35)] = 692,
  [SMALL_STATE(36)] = 710,
  [SMALL_STATE(37)] = 727,
  [SMALL_STATE(38)] = 744,
  [SMALL_STATE(39)] = 761,
  [SMALL_STATE(40)] = 781,
  [SMALL_STATE(41)] = 801,
  [SMALL_STATE(42)] = 821,
  [SMALL_STATE(43)] = 841,
  [SMALL_STATE(44)] = 859,
  [SMALL_STATE(45)] = 874,
  [SMALL_STATE(46)] = 888,
  [SMALL_STATE(47)] = 902,
  [SMALL_STATE(48)] = 916,
  [SMALL_STATE(49)] = 930,
  [SMALL_STATE(50)] = 944,
  [SMALL_STATE(51)] = 958,
  [SMALL_STATE(52)] = 962,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_literal, 1),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_literal, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_non_empty_list_literal, 5),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_non_empty_list_literal, 5),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_non_empty_list_literal, 4),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_non_empty_list_literal, 4),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__import_expression, 1),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__import_expression, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector_expression, 1),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__selector_expression, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_expression, 1),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive_expression, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_literal, 1),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_literal, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_non_empty_list_literal, 3),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_non_empty_list_literal, 3),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_non_empty_list_literal, 6),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_non_empty_list_literal, 6),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quote_literal, 3),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quote_literal, 3),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_expression, 3),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive_expression, 3),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__import_expression, 3),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__import_expression, 3),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quote_literal_repeat1, 2),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quote_literal_repeat1, 2), SHIFT_REPEAT(37),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quote_literal_repeat1, 2), SHIFT_REPEAT(8),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__application_expression, 3),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__operator_expression, 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__application_expression, 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__application_expression, 2),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quote_literal_repeat1, 1),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quote_chunk, 1),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 3),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_non_empty_list_literal_repeat1, 2), SHIFT_REPEAT(10),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_non_empty_list_literal_repeat1, 2),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [138] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 2),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3),
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
