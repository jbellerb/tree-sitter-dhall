#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 66
#define LARGE_STATE_COUNT 14
#define SYMBOL_COUNT 40
#define ALIAS_COUNT 0
#define TOKEN_COUNT 24
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  sym_line_comment_prefix = 1,
  sym_line_comment_content = 2,
  sym_block_comment_open = 3,
  sym_block_comment_close = 4,
  anon_sym_DASHInfinity = 5,
  anon_sym_Infinity = 6,
  anon_sym_NaN = 7,
  aux_sym_double_literal_token1 = 8,
  aux_sym_natural_literal_token1 = 9,
  aux_sym_natural_literal_token2 = 10,
  anon_sym_PLUS = 11,
  anon_sym_DASH = 12,
  anon_sym_DQUOTE = 13,
  aux_sym__double_quote_chunk_token1 = 14,
  anon_sym_DOLLAR_LBRACE = 15,
  anon_sym_RBRACE = 16,
  aux_sym_double_quote_escaped_token1 = 17,
  aux_sym_double_quote_escaped_token2 = 18,
  anon_sym_LBRACK = 19,
  anon_sym_COMMA = 20,
  anon_sym_RBRACK = 21,
  sym_block_comment_content = 22,
  sym_block_comment_end = 23,
  sym_expression = 24,
  sym_primitive_expression = 25,
  sym_line_comment = 26,
  sym_block_comment = 27,
  sym_numeric_literal = 28,
  sym_double_literal = 29,
  sym_natural_literal = 30,
  sym_integer_literal = 31,
  sym_text_literal = 32,
  sym_double_quote_literal = 33,
  sym__double_quote_chunk = 34,
  sym_interpolation = 35,
  sym_double_quote_escaped = 36,
  sym_non_empty_list_literal = 37,
  aux_sym_double_quote_literal_repeat1 = 38,
  aux_sym_non_empty_list_literal_repeat1 = 39,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_line_comment_prefix] = "line_comment_prefix",
  [sym_line_comment_content] = "line_comment_content",
  [sym_block_comment_open] = "block_comment_open",
  [sym_block_comment_close] = "block_comment_close",
  [anon_sym_DASHInfinity] = "-Infinity",
  [anon_sym_Infinity] = "Infinity",
  [anon_sym_NaN] = "NaN",
  [aux_sym_double_literal_token1] = "double_literal_token1",
  [aux_sym_natural_literal_token1] = "natural_literal_token1",
  [aux_sym_natural_literal_token2] = "natural_literal_token2",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__double_quote_chunk_token1] = "_double_quote_chunk_token1",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [anon_sym_RBRACE] = "}",
  [aux_sym_double_quote_escaped_token1] = "double_quote_escaped_token1",
  [aux_sym_double_quote_escaped_token2] = "double_quote_escaped_token2",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [sym_block_comment_content] = "block_comment_content",
  [sym_block_comment_end] = "block_comment_end",
  [sym_expression] = "expression",
  [sym_primitive_expression] = "primitive_expression",
  [sym_line_comment] = "line_comment",
  [sym_block_comment] = "block_comment",
  [sym_numeric_literal] = "numeric_literal",
  [sym_double_literal] = "double_literal",
  [sym_natural_literal] = "natural_literal",
  [sym_integer_literal] = "integer_literal",
  [sym_text_literal] = "text_literal",
  [sym_double_quote_literal] = "double_quote_literal",
  [sym__double_quote_chunk] = "_double_quote_chunk",
  [sym_interpolation] = "interpolation",
  [sym_double_quote_escaped] = "double_quote_escaped",
  [sym_non_empty_list_literal] = "non_empty_list_literal",
  [aux_sym_double_quote_literal_repeat1] = "double_quote_literal_repeat1",
  [aux_sym_non_empty_list_literal_repeat1] = "non_empty_list_literal_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_line_comment_prefix] = sym_line_comment_prefix,
  [sym_line_comment_content] = sym_line_comment_content,
  [sym_block_comment_open] = sym_block_comment_open,
  [sym_block_comment_close] = sym_block_comment_close,
  [anon_sym_DASHInfinity] = anon_sym_DASHInfinity,
  [anon_sym_Infinity] = anon_sym_Infinity,
  [anon_sym_NaN] = anon_sym_NaN,
  [aux_sym_double_literal_token1] = aux_sym_double_literal_token1,
  [aux_sym_natural_literal_token1] = aux_sym_natural_literal_token1,
  [aux_sym_natural_literal_token2] = aux_sym_natural_literal_token2,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__double_quote_chunk_token1] = aux_sym__double_quote_chunk_token1,
  [anon_sym_DOLLAR_LBRACE] = anon_sym_DOLLAR_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [aux_sym_double_quote_escaped_token1] = aux_sym_double_quote_escaped_token1,
  [aux_sym_double_quote_escaped_token2] = aux_sym_double_quote_escaped_token2,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_block_comment_content] = sym_block_comment_content,
  [sym_block_comment_end] = sym_block_comment_end,
  [sym_expression] = sym_expression,
  [sym_primitive_expression] = sym_primitive_expression,
  [sym_line_comment] = sym_line_comment,
  [sym_block_comment] = sym_block_comment,
  [sym_numeric_literal] = sym_numeric_literal,
  [sym_double_literal] = sym_double_literal,
  [sym_natural_literal] = sym_natural_literal,
  [sym_integer_literal] = sym_integer_literal,
  [sym_text_literal] = sym_text_literal,
  [sym_double_quote_literal] = sym_double_quote_literal,
  [sym__double_quote_chunk] = sym__double_quote_chunk,
  [sym_interpolation] = sym_interpolation,
  [sym_double_quote_escaped] = sym_double_quote_escaped,
  [sym_non_empty_list_literal] = sym_non_empty_list_literal,
  [aux_sym_double_quote_literal_repeat1] = aux_sym_double_quote_literal_repeat1,
  [aux_sym_non_empty_list_literal_repeat1] = aux_sym_non_empty_list_literal_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
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
  [aux_sym_natural_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_natural_literal_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
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
  [aux_sym_double_quote_escaped_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_double_quote_escaped_token2] = {
    .visible = false,
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
  [sym_natural_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_integer_literal] = {
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
  [sym_double_quote_escaped] = {
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

static inline bool aux_sym_double_quote_escaped_token1_character_set_1(int32_t c) {
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
      if (eof) ADVANCE(41);
      if (lookahead == '"') ADVANCE(62);
      if (lookahead == '$') ADVANCE(26);
      if (lookahead == '+') ADVANCE(59);
      if (lookahead == ',') ADVANCE(73);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == '0') ADVANCE(57);
      if (lookahead == 'I') ADVANCE(17);
      if (lookahead == 'N') ADVANCE(10);
      if (lookahead == '[') ADVANCE(72);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead == ']') ADVANCE(74);
      if (lookahead == '{') ADVANCE(4);
      if (lookahead == '}') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(62);
      if (lookahead == '$') ADVANCE(67);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead == '{') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead != 0) ADVANCE(63);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(62);
      if (lookahead == '+') ADVANCE(59);
      if (lookahead == ',') ADVANCE(73);
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == '0') ADVANCE(57);
      if (lookahead == 'I') ADVANCE(17);
      if (lookahead == 'N') ADVANCE(10);
      if (lookahead == '[') ADVANCE(72);
      if (lookahead == ']') ADVANCE(74);
      if (lookahead == '{') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == '}') ADVANCE(50);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(48);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '{') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == 'e') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '0') ADVANCE(7);
      if (lookahead == '}') ADVANCE(71);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(33);
      END_STATE();
    case 8:
      if (lookahead == '0') ADVANCE(7);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(33);
      END_STATE();
    case 9:
      if (lookahead == 'N') ADVANCE(53);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == 'f') ADVANCE(14);
      END_STATE();
    case 12:
      if (lookahead == 'f') ADVANCE(16);
      END_STATE();
    case 13:
      if (lookahead == 'i') ADVANCE(21);
      END_STATE();
    case 14:
      if (lookahead == 'i') ADVANCE(18);
      END_STATE();
    case 15:
      if (lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 16:
      if (lookahead == 'i') ADVANCE(19);
      END_STATE();
    case 17:
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 18:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 19:
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 20:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 21:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 22:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 23:
      if (lookahead == 'u') ADVANCE(27);
      if (aux_sym_double_quote_escaped_token1_character_set_1(lookahead)) ADVANCE(70);
      END_STATE();
    case 24:
      if (lookahead == 'y') ADVANCE(52);
      END_STATE();
    case 25:
      if (lookahead == 'y') ADVANCE(51);
      END_STATE();
    case 26:
      if (lookahead == '{') ADVANCE(68);
      END_STATE();
    case 27:
      if (lookahead == '{') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(40);
      END_STATE();
    case 28:
      if (lookahead == '}') ADVANCE(71);
      END_STATE();
    case 29:
      if (lookahead == '}') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(28);
      END_STATE();
    case 30:
      if (lookahead == '}') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(29);
      END_STATE();
    case 31:
      if (lookahead == '}') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(30);
      END_STATE();
    case 32:
      if (lookahead == '}') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(31);
      END_STATE();
    case 33:
      if (lookahead == '}') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(32);
      END_STATE();
    case 34:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(56);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(71);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(38);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(39);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_line_comment_prefix);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_line_comment_prefix);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_line_comment_content);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == '{') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_line_comment_content);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_line_comment_content);
      if (lookahead == '-') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_line_comment_content);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_block_comment_open);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_block_comment_open);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_block_comment_close);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_DASHInfinity);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_Infinity);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_NaN);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_double_literal_token1);
      if (lookahead == 'e') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_double_literal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_natural_literal_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_natural_literal_token2);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == 'e') ADVANCE(34);
      if (lookahead == 'x') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_natural_literal_token2);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == 'e') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == 'I') ADVANCE(20);
      if (lookahead == '}') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == 'I') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym__double_quote_chunk_token1);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym__double_quote_chunk_token1);
      if (lookahead == '$') ADVANCE(67);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '{') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(63);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym__double_quote_chunk_token1);
      if (lookahead == '-') ADVANCE(42);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym__double_quote_chunk_token1);
      if (lookahead == '-') ADVANCE(48);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym__double_quote_chunk_token1);
      if (lookahead == '{') ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_double_quote_escaped_token1);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_double_quote_escaped_token2);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 2},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
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
  [50] = {.lex_state = 44},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0, .external_lex_state = 2},
  [64] = {(TSStateId)(-1)},
  [65] = {(TSStateId)(-1)},
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
    [sym_line_comment_prefix] = ACTIONS(3),
    [sym_block_comment_open] = ACTIONS(5),
    [sym_block_comment_close] = ACTIONS(1),
    [anon_sym_DASHInfinity] = ACTIONS(1),
    [anon_sym_Infinity] = ACTIONS(1),
    [anon_sym_NaN] = ACTIONS(1),
    [aux_sym_double_literal_token1] = ACTIONS(1),
    [aux_sym_natural_literal_token1] = ACTIONS(1),
    [aux_sym_natural_literal_token2] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [aux_sym_double_quote_escaped_token1] = ACTIONS(1),
    [aux_sym_double_quote_escaped_token2] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_block_comment_content] = ACTIONS(1),
    [sym_block_comment_end] = ACTIONS(1),
  },
  [1] = {
    [sym_expression] = STATE(58),
    [sym_primitive_expression] = STATE(57),
    [sym_line_comment] = STATE(1),
    [sym_block_comment] = STATE(1),
    [sym_numeric_literal] = STATE(47),
    [sym_double_literal] = STATE(49),
    [sym_natural_literal] = STATE(49),
    [sym_integer_literal] = STATE(49),
    [sym_text_literal] = STATE(47),
    [sym_double_quote_literal] = STATE(48),
    [sym_non_empty_list_literal] = STATE(47),
    [sym_line_comment_prefix] = ACTIONS(3),
    [sym_block_comment_open] = ACTIONS(5),
    [anon_sym_DASHInfinity] = ACTIONS(7),
    [anon_sym_Infinity] = ACTIONS(7),
    [anon_sym_NaN] = ACTIONS(7),
    [aux_sym_double_literal_token1] = ACTIONS(7),
    [aux_sym_natural_literal_token1] = ACTIONS(9),
    [aux_sym_natural_literal_token2] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
  },
  [2] = {
    [sym_expression] = STATE(45),
    [sym_primitive_expression] = STATE(24),
    [sym_line_comment] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym_numeric_literal] = STATE(41),
    [sym_double_literal] = STATE(40),
    [sym_natural_literal] = STATE(40),
    [sym_integer_literal] = STATE(40),
    [sym_text_literal] = STATE(41),
    [sym_double_quote_literal] = STATE(39),
    [sym_non_empty_list_literal] = STATE(41),
    [sym_line_comment_prefix] = ACTIONS(3),
    [sym_block_comment_open] = ACTIONS(5),
    [anon_sym_DASHInfinity] = ACTIONS(19),
    [anon_sym_Infinity] = ACTIONS(19),
    [anon_sym_NaN] = ACTIONS(19),
    [aux_sym_double_literal_token1] = ACTIONS(19),
    [aux_sym_natural_literal_token1] = ACTIONS(21),
    [aux_sym_natural_literal_token2] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(31),
  },
  [3] = {
    [sym_expression] = STATE(29),
    [sym_primitive_expression] = STATE(24),
    [sym_line_comment] = STATE(3),
    [sym_block_comment] = STATE(3),
    [sym_numeric_literal] = STATE(41),
    [sym_double_literal] = STATE(40),
    [sym_natural_literal] = STATE(40),
    [sym_integer_literal] = STATE(40),
    [sym_text_literal] = STATE(41),
    [sym_double_quote_literal] = STATE(39),
    [sym_non_empty_list_literal] = STATE(41),
    [sym_line_comment_prefix] = ACTIONS(3),
    [sym_block_comment_open] = ACTIONS(5),
    [anon_sym_DASHInfinity] = ACTIONS(19),
    [anon_sym_Infinity] = ACTIONS(19),
    [anon_sym_NaN] = ACTIONS(19),
    [aux_sym_double_literal_token1] = ACTIONS(19),
    [aux_sym_natural_literal_token1] = ACTIONS(21),
    [aux_sym_natural_literal_token2] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(33),
  },
  [4] = {
    [sym_expression] = STATE(45),
    [sym_primitive_expression] = STATE(24),
    [sym_line_comment] = STATE(4),
    [sym_block_comment] = STATE(4),
    [sym_numeric_literal] = STATE(41),
    [sym_double_literal] = STATE(40),
    [sym_natural_literal] = STATE(40),
    [sym_integer_literal] = STATE(40),
    [sym_text_literal] = STATE(41),
    [sym_double_quote_literal] = STATE(39),
    [sym_non_empty_list_literal] = STATE(41),
    [sym_line_comment_prefix] = ACTIONS(3),
    [sym_block_comment_open] = ACTIONS(5),
    [anon_sym_DASHInfinity] = ACTIONS(19),
    [anon_sym_Infinity] = ACTIONS(19),
    [anon_sym_NaN] = ACTIONS(19),
    [aux_sym_double_literal_token1] = ACTIONS(19),
    [aux_sym_natural_literal_token1] = ACTIONS(21),
    [aux_sym_natural_literal_token2] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(35),
  },
  [5] = {
    [sym_expression] = STATE(45),
    [sym_primitive_expression] = STATE(24),
    [sym_line_comment] = STATE(5),
    [sym_block_comment] = STATE(5),
    [sym_numeric_literal] = STATE(41),
    [sym_double_literal] = STATE(40),
    [sym_natural_literal] = STATE(40),
    [sym_integer_literal] = STATE(40),
    [sym_text_literal] = STATE(41),
    [sym_double_quote_literal] = STATE(39),
    [sym_non_empty_list_literal] = STATE(41),
    [sym_line_comment_prefix] = ACTIONS(3),
    [sym_block_comment_open] = ACTIONS(5),
    [anon_sym_DASHInfinity] = ACTIONS(19),
    [anon_sym_Infinity] = ACTIONS(19),
    [anon_sym_NaN] = ACTIONS(19),
    [aux_sym_double_literal_token1] = ACTIONS(19),
    [aux_sym_natural_literal_token1] = ACTIONS(21),
    [aux_sym_natural_literal_token2] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(37),
  },
  [6] = {
    [sym_expression] = STATE(27),
    [sym_primitive_expression] = STATE(24),
    [sym_line_comment] = STATE(6),
    [sym_block_comment] = STATE(6),
    [sym_numeric_literal] = STATE(41),
    [sym_double_literal] = STATE(40),
    [sym_natural_literal] = STATE(40),
    [sym_integer_literal] = STATE(40),
    [sym_text_literal] = STATE(41),
    [sym_double_quote_literal] = STATE(39),
    [sym_non_empty_list_literal] = STATE(41),
    [sym_line_comment_prefix] = ACTIONS(3),
    [sym_block_comment_open] = ACTIONS(5),
    [anon_sym_DASHInfinity] = ACTIONS(19),
    [anon_sym_Infinity] = ACTIONS(19),
    [anon_sym_NaN] = ACTIONS(19),
    [aux_sym_double_literal_token1] = ACTIONS(19),
    [aux_sym_natural_literal_token1] = ACTIONS(21),
    [aux_sym_natural_literal_token2] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(39),
  },
  [7] = {
    [sym_expression] = STATE(45),
    [sym_primitive_expression] = STATE(24),
    [sym_line_comment] = STATE(7),
    [sym_block_comment] = STATE(7),
    [sym_numeric_literal] = STATE(41),
    [sym_double_literal] = STATE(40),
    [sym_natural_literal] = STATE(40),
    [sym_integer_literal] = STATE(40),
    [sym_text_literal] = STATE(41),
    [sym_double_quote_literal] = STATE(39),
    [sym_non_empty_list_literal] = STATE(41),
    [sym_line_comment_prefix] = ACTIONS(3),
    [sym_block_comment_open] = ACTIONS(5),
    [anon_sym_DASHInfinity] = ACTIONS(19),
    [anon_sym_Infinity] = ACTIONS(19),
    [anon_sym_NaN] = ACTIONS(19),
    [aux_sym_double_literal_token1] = ACTIONS(19),
    [aux_sym_natural_literal_token1] = ACTIONS(21),
    [aux_sym_natural_literal_token2] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(41),
  },
  [8] = {
    [sym_expression] = STATE(45),
    [sym_primitive_expression] = STATE(24),
    [sym_line_comment] = STATE(8),
    [sym_block_comment] = STATE(8),
    [sym_numeric_literal] = STATE(41),
    [sym_double_literal] = STATE(40),
    [sym_natural_literal] = STATE(40),
    [sym_integer_literal] = STATE(40),
    [sym_text_literal] = STATE(41),
    [sym_double_quote_literal] = STATE(39),
    [sym_non_empty_list_literal] = STATE(41),
    [sym_line_comment_prefix] = ACTIONS(3),
    [sym_block_comment_open] = ACTIONS(5),
    [anon_sym_DASHInfinity] = ACTIONS(19),
    [anon_sym_Infinity] = ACTIONS(19),
    [anon_sym_NaN] = ACTIONS(19),
    [aux_sym_double_literal_token1] = ACTIONS(19),
    [aux_sym_natural_literal_token1] = ACTIONS(21),
    [aux_sym_natural_literal_token2] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(43),
  },
  [9] = {
    [sym_expression] = STATE(45),
    [sym_primitive_expression] = STATE(24),
    [sym_line_comment] = STATE(9),
    [sym_block_comment] = STATE(9),
    [sym_numeric_literal] = STATE(41),
    [sym_double_literal] = STATE(40),
    [sym_natural_literal] = STATE(40),
    [sym_integer_literal] = STATE(40),
    [sym_text_literal] = STATE(41),
    [sym_double_quote_literal] = STATE(39),
    [sym_non_empty_list_literal] = STATE(41),
    [sym_line_comment_prefix] = ACTIONS(3),
    [sym_block_comment_open] = ACTIONS(5),
    [anon_sym_DASHInfinity] = ACTIONS(19),
    [anon_sym_Infinity] = ACTIONS(19),
    [anon_sym_NaN] = ACTIONS(19),
    [aux_sym_double_literal_token1] = ACTIONS(19),
    [aux_sym_natural_literal_token1] = ACTIONS(21),
    [aux_sym_natural_literal_token2] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(45),
  },
  [10] = {
    [sym_expression] = STATE(28),
    [sym_primitive_expression] = STATE(24),
    [sym_line_comment] = STATE(10),
    [sym_block_comment] = STATE(10),
    [sym_numeric_literal] = STATE(41),
    [sym_double_literal] = STATE(40),
    [sym_natural_literal] = STATE(40),
    [sym_integer_literal] = STATE(40),
    [sym_text_literal] = STATE(41),
    [sym_double_quote_literal] = STATE(39),
    [sym_non_empty_list_literal] = STATE(41),
    [sym_line_comment_prefix] = ACTIONS(3),
    [sym_block_comment_open] = ACTIONS(5),
    [anon_sym_DASHInfinity] = ACTIONS(19),
    [anon_sym_Infinity] = ACTIONS(19),
    [anon_sym_NaN] = ACTIONS(19),
    [aux_sym_double_literal_token1] = ACTIONS(19),
    [aux_sym_natural_literal_token1] = ACTIONS(21),
    [aux_sym_natural_literal_token2] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
  },
  [11] = {
    [sym_expression] = STATE(45),
    [sym_primitive_expression] = STATE(24),
    [sym_line_comment] = STATE(11),
    [sym_block_comment] = STATE(11),
    [sym_numeric_literal] = STATE(41),
    [sym_double_literal] = STATE(40),
    [sym_natural_literal] = STATE(40),
    [sym_integer_literal] = STATE(40),
    [sym_text_literal] = STATE(41),
    [sym_double_quote_literal] = STATE(39),
    [sym_non_empty_list_literal] = STATE(41),
    [sym_line_comment_prefix] = ACTIONS(3),
    [sym_block_comment_open] = ACTIONS(5),
    [anon_sym_DASHInfinity] = ACTIONS(19),
    [anon_sym_Infinity] = ACTIONS(19),
    [anon_sym_NaN] = ACTIONS(19),
    [aux_sym_double_literal_token1] = ACTIONS(19),
    [aux_sym_natural_literal_token1] = ACTIONS(21),
    [aux_sym_natural_literal_token2] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
  },
  [12] = {
    [sym_expression] = STATE(56),
    [sym_primitive_expression] = STATE(24),
    [sym_line_comment] = STATE(12),
    [sym_block_comment] = STATE(12),
    [sym_numeric_literal] = STATE(41),
    [sym_double_literal] = STATE(40),
    [sym_natural_literal] = STATE(40),
    [sym_integer_literal] = STATE(40),
    [sym_text_literal] = STATE(41),
    [sym_double_quote_literal] = STATE(39),
    [sym_non_empty_list_literal] = STATE(41),
    [sym_line_comment_prefix] = ACTIONS(3),
    [sym_block_comment_open] = ACTIONS(5),
    [anon_sym_DASHInfinity] = ACTIONS(19),
    [anon_sym_Infinity] = ACTIONS(19),
    [anon_sym_NaN] = ACTIONS(19),
    [aux_sym_double_literal_token1] = ACTIONS(19),
    [aux_sym_natural_literal_token1] = ACTIONS(21),
    [aux_sym_natural_literal_token2] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
  },
  [13] = {
    [sym_expression] = STATE(31),
    [sym_primitive_expression] = STATE(24),
    [sym_line_comment] = STATE(13),
    [sym_block_comment] = STATE(13),
    [sym_numeric_literal] = STATE(41),
    [sym_double_literal] = STATE(40),
    [sym_natural_literal] = STATE(40),
    [sym_integer_literal] = STATE(40),
    [sym_text_literal] = STATE(41),
    [sym_double_quote_literal] = STATE(39),
    [sym_non_empty_list_literal] = STATE(41),
    [sym_line_comment_prefix] = ACTIONS(3),
    [sym_block_comment_open] = ACTIONS(5),
    [anon_sym_DASHInfinity] = ACTIONS(19),
    [anon_sym_Infinity] = ACTIONS(19),
    [anon_sym_NaN] = ACTIONS(19),
    [aux_sym_double_literal_token1] = ACTIONS(19),
    [aux_sym_natural_literal_token1] = ACTIONS(21),
    [aux_sym_natural_literal_token2] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(47), 1,
      sym_line_comment_prefix,
    ACTIONS(49), 1,
      sym_block_comment_open,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      aux_sym__double_quote_chunk_token1,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(15), 1,
      aux_sym_double_quote_literal_repeat1,
    STATE(22), 1,
      sym__double_quote_chunk,
    ACTIONS(57), 2,
      aux_sym_double_quote_escaped_token1,
      aux_sym_double_quote_escaped_token2,
    STATE(14), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(20), 2,
      sym_interpolation,
      sym_double_quote_escaped,
  [34] = 9,
    ACTIONS(47), 1,
      sym_line_comment_prefix,
    ACTIONS(49), 1,
      sym_block_comment_open,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(61), 1,
      aux_sym__double_quote_chunk_token1,
    ACTIONS(64), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(22), 1,
      sym__double_quote_chunk,
    ACTIONS(67), 2,
      aux_sym_double_quote_escaped_token1,
      aux_sym_double_quote_escaped_token2,
    STATE(20), 2,
      sym_interpolation,
      sym_double_quote_escaped,
    STATE(15), 3,
      sym_line_comment,
      sym_block_comment,
      aux_sym_double_quote_literal_repeat1,
  [66] = 10,
    ACTIONS(47), 1,
      sym_line_comment_prefix,
    ACTIONS(49), 1,
      sym_block_comment_open,
    ACTIONS(53), 1,
      aux_sym__double_quote_chunk_token1,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(70), 1,
      anon_sym_DQUOTE,
    STATE(15), 1,
      aux_sym_double_quote_literal_repeat1,
    STATE(22), 1,
      sym__double_quote_chunk,
    ACTIONS(57), 2,
      aux_sym_double_quote_escaped_token1,
      aux_sym_double_quote_escaped_token2,
    STATE(16), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(20), 2,
      sym_interpolation,
      sym_double_quote_escaped,
  [100] = 9,
    ACTIONS(47), 1,
      sym_line_comment_prefix,
    ACTIONS(49), 1,
      sym_block_comment_open,
    ACTIONS(53), 1,
      aux_sym__double_quote_chunk_token1,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(14), 1,
      aux_sym_double_quote_literal_repeat1,
    STATE(22), 1,
      sym__double_quote_chunk,
    ACTIONS(57), 2,
      aux_sym_double_quote_escaped_token1,
      aux_sym_double_quote_escaped_token2,
    STATE(17), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(20), 2,
      sym_interpolation,
      sym_double_quote_escaped,
  [131] = 9,
    ACTIONS(47), 1,
      sym_line_comment_prefix,
    ACTIONS(49), 1,
      sym_block_comment_open,
    ACTIONS(53), 1,
      aux_sym__double_quote_chunk_token1,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(16), 1,
      aux_sym_double_quote_literal_repeat1,
    STATE(22), 1,
      sym__double_quote_chunk,
    ACTIONS(57), 2,
      aux_sym_double_quote_escaped_token1,
      aux_sym_double_quote_escaped_token2,
    STATE(18), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(20), 2,
      sym_interpolation,
      sym_double_quote_escaped,
  [162] = 4,
    ACTIONS(47), 1,
      sym_line_comment_prefix,
    ACTIONS(49), 1,
      sym_block_comment_open,
    STATE(19), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(72), 5,
      anon_sym_DQUOTE,
      aux_sym__double_quote_chunk_token1,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_double_quote_escaped_token1,
      aux_sym_double_quote_escaped_token2,
  [180] = 4,
    ACTIONS(47), 1,
      sym_line_comment_prefix,
    ACTIONS(49), 1,
      sym_block_comment_open,
    STATE(20), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(74), 5,
      anon_sym_DQUOTE,
      aux_sym__double_quote_chunk_token1,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_double_quote_escaped_token1,
      aux_sym_double_quote_escaped_token2,
  [198] = 4,
    ACTIONS(47), 1,
      sym_line_comment_prefix,
    ACTIONS(49), 1,
      sym_block_comment_open,
    STATE(21), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(76), 5,
      anon_sym_DQUOTE,
      aux_sym__double_quote_chunk_token1,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_double_quote_escaped_token1,
      aux_sym_double_quote_escaped_token2,
  [216] = 4,
    ACTIONS(47), 1,
      sym_line_comment_prefix,
    ACTIONS(49), 1,
      sym_block_comment_open,
    STATE(22), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(78), 5,
      anon_sym_DQUOTE,
      aux_sym__double_quote_chunk_token1,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_double_quote_escaped_token1,
      aux_sym_double_quote_escaped_token2,
  [234] = 4,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    STATE(23), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(80), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [250] = 4,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    STATE(24), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(82), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [266] = 6,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    ACTIONS(37), 1,
      anon_sym_RBRACK,
    ACTIONS(84), 1,
      anon_sym_COMMA,
    STATE(37), 1,
      aux_sym_non_empty_list_literal_repeat1,
    STATE(25), 2,
      sym_line_comment,
      sym_block_comment,
  [286] = 6,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    ACTIONS(41), 1,
      anon_sym_RBRACK,
    ACTIONS(86), 1,
      anon_sym_COMMA,
    STATE(37), 1,
      aux_sym_non_empty_list_literal_repeat1,
    STATE(26), 2,
      sym_line_comment,
      sym_block_comment,
  [306] = 6,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    ACTIONS(88), 1,
      anon_sym_COMMA,
    ACTIONS(90), 1,
      anon_sym_RBRACK,
    STATE(33), 1,
      aux_sym_non_empty_list_literal_repeat1,
    STATE(27), 2,
      sym_line_comment,
      sym_block_comment,
  [326] = 6,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    ACTIONS(41), 1,
      anon_sym_RBRACK,
    ACTIONS(86), 1,
      anon_sym_COMMA,
    STATE(25), 1,
      aux_sym_non_empty_list_literal_repeat1,
    STATE(28), 2,
      sym_line_comment,
      sym_block_comment,
  [346] = 6,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    ACTIONS(92), 1,
      anon_sym_COMMA,
    ACTIONS(94), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      aux_sym_non_empty_list_literal_repeat1,
    STATE(29), 2,
      sym_line_comment,
      sym_block_comment,
  [366] = 4,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    STATE(30), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(96), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [382] = 6,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    ACTIONS(31), 1,
      anon_sym_RBRACK,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    STATE(35), 1,
      aux_sym_non_empty_list_literal_repeat1,
    STATE(31), 2,
      sym_line_comment,
      sym_block_comment,
  [402] = 4,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    STATE(32), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(100), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [418] = 6,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    ACTIONS(31), 1,
      anon_sym_RBRACK,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    STATE(37), 1,
      aux_sym_non_empty_list_literal_repeat1,
    STATE(33), 2,
      sym_line_comment,
      sym_block_comment,
  [438] = 4,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    STATE(34), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(102), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [454] = 6,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    ACTIONS(45), 1,
      anon_sym_RBRACK,
    ACTIONS(104), 1,
      anon_sym_COMMA,
    STATE(37), 1,
      aux_sym_non_empty_list_literal_repeat1,
    STATE(35), 2,
      sym_line_comment,
      sym_block_comment,
  [474] = 4,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    STATE(36), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(106), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [490] = 5,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    ACTIONS(108), 1,
      anon_sym_COMMA,
    ACTIONS(111), 1,
      anon_sym_RBRACK,
    STATE(37), 3,
      sym_line_comment,
      sym_block_comment,
      aux_sym_non_empty_list_literal_repeat1,
  [508] = 4,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    STATE(38), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(113), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [524] = 4,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    STATE(39), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(115), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [540] = 4,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    STATE(40), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(117), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [556] = 4,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    STATE(41), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(119), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [572] = 4,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    STATE(42), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(121), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [588] = 4,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    STATE(43), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(123), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [604] = 5,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    ACTIONS(125), 1,
      aux_sym_natural_literal_token1,
    ACTIONS(127), 1,
      aux_sym_natural_literal_token2,
    STATE(44), 2,
      sym_line_comment,
      sym_block_comment,
  [621] = 4,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    ACTIONS(111), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    STATE(45), 2,
      sym_line_comment,
      sym_block_comment,
  [636] = 5,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    ACTIONS(129), 1,
      aux_sym_natural_literal_token1,
    ACTIONS(131), 1,
      aux_sym_natural_literal_token2,
    STATE(46), 2,
      sym_line_comment,
      sym_block_comment,
  [653] = 4,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
    STATE(47), 2,
      sym_line_comment,
      sym_block_comment,
  [667] = 4,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    ACTIONS(115), 1,
      ts_builtin_sym_end,
    STATE(48), 2,
      sym_line_comment,
      sym_block_comment,
  [681] = 4,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    ACTIONS(117), 1,
      ts_builtin_sym_end,
    STATE(49), 2,
      sym_line_comment,
      sym_block_comment,
  [695] = 4,
    ACTIONS(47), 1,
      sym_line_comment_prefix,
    ACTIONS(49), 1,
      sym_block_comment_open,
    ACTIONS(133), 1,
      sym_line_comment_content,
    STATE(50), 2,
      sym_line_comment,
      sym_block_comment,
  [709] = 4,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    ACTIONS(100), 1,
      ts_builtin_sym_end,
    STATE(51), 2,
      sym_line_comment,
      sym_block_comment,
  [723] = 4,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    ACTIONS(102), 1,
      ts_builtin_sym_end,
    STATE(52), 2,
      sym_line_comment,
      sym_block_comment,
  [737] = 4,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    ACTIONS(106), 1,
      ts_builtin_sym_end,
    STATE(53), 2,
      sym_line_comment,
      sym_block_comment,
  [751] = 4,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    ACTIONS(135), 1,
      sym_block_comment_close,
    STATE(54), 2,
      sym_line_comment,
      sym_block_comment,
  [765] = 4,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    ACTIONS(113), 1,
      ts_builtin_sym_end,
    STATE(55), 2,
      sym_line_comment,
      sym_block_comment,
  [779] = 4,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    ACTIONS(137), 1,
      anon_sym_RBRACE,
    STATE(56), 2,
      sym_line_comment,
      sym_block_comment,
  [793] = 4,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    ACTIONS(82), 1,
      ts_builtin_sym_end,
    STATE(57), 2,
      sym_line_comment,
      sym_block_comment,
  [807] = 4,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    ACTIONS(139), 1,
      ts_builtin_sym_end,
    STATE(58), 2,
      sym_line_comment,
      sym_block_comment,
  [821] = 4,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    ACTIONS(80), 1,
      ts_builtin_sym_end,
    STATE(59), 2,
      sym_line_comment,
      sym_block_comment,
  [835] = 4,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    ACTIONS(96), 1,
      ts_builtin_sym_end,
    STATE(60), 2,
      sym_line_comment,
      sym_block_comment,
  [849] = 4,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    ACTIONS(123), 1,
      ts_builtin_sym_end,
    STATE(61), 2,
      sym_line_comment,
      sym_block_comment,
  [863] = 4,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    STATE(62), 2,
      sym_line_comment,
      sym_block_comment,
  [877] = 4,
    ACTIONS(3), 1,
      sym_line_comment_prefix,
    ACTIONS(5), 1,
      sym_block_comment_open,
    ACTIONS(141), 1,
      sym_block_comment_content,
    STATE(63), 2,
      sym_line_comment,
      sym_block_comment,
  [891] = 1,
    ACTIONS(143), 1,
      ts_builtin_sym_end,
  [895] = 1,
    ACTIONS(145), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(14)] = 0,
  [SMALL_STATE(15)] = 34,
  [SMALL_STATE(16)] = 66,
  [SMALL_STATE(17)] = 100,
  [SMALL_STATE(18)] = 131,
  [SMALL_STATE(19)] = 162,
  [SMALL_STATE(20)] = 180,
  [SMALL_STATE(21)] = 198,
  [SMALL_STATE(22)] = 216,
  [SMALL_STATE(23)] = 234,
  [SMALL_STATE(24)] = 250,
  [SMALL_STATE(25)] = 266,
  [SMALL_STATE(26)] = 286,
  [SMALL_STATE(27)] = 306,
  [SMALL_STATE(28)] = 326,
  [SMALL_STATE(29)] = 346,
  [SMALL_STATE(30)] = 366,
  [SMALL_STATE(31)] = 382,
  [SMALL_STATE(32)] = 402,
  [SMALL_STATE(33)] = 418,
  [SMALL_STATE(34)] = 438,
  [SMALL_STATE(35)] = 454,
  [SMALL_STATE(36)] = 474,
  [SMALL_STATE(37)] = 490,
  [SMALL_STATE(38)] = 508,
  [SMALL_STATE(39)] = 524,
  [SMALL_STATE(40)] = 540,
  [SMALL_STATE(41)] = 556,
  [SMALL_STATE(42)] = 572,
  [SMALL_STATE(43)] = 588,
  [SMALL_STATE(44)] = 604,
  [SMALL_STATE(45)] = 621,
  [SMALL_STATE(46)] = 636,
  [SMALL_STATE(47)] = 653,
  [SMALL_STATE(48)] = 667,
  [SMALL_STATE(49)] = 681,
  [SMALL_STATE(50)] = 695,
  [SMALL_STATE(51)] = 709,
  [SMALL_STATE(52)] = 723,
  [SMALL_STATE(53)] = 737,
  [SMALL_STATE(54)] = 751,
  [SMALL_STATE(55)] = 765,
  [SMALL_STATE(56)] = 779,
  [SMALL_STATE(57)] = 793,
  [SMALL_STATE(58)] = 807,
  [SMALL_STATE(59)] = 821,
  [SMALL_STATE(60)] = 835,
  [SMALL_STATE(61)] = 849,
  [SMALL_STATE(62)] = 863,
  [SMALL_STATE(63)] = 877,
  [SMALL_STATE(64)] = 891,
  [SMALL_STATE(65)] = 895,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quote_literal_repeat1, 2),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quote_literal_repeat1, 2), SHIFT_REPEAT(20),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quote_literal_repeat1, 2), SHIFT_REPEAT(12),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quote_literal_repeat1, 2), SHIFT_REPEAT(21),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 3),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quote_chunk, 1),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quote_escaped, 1),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quote_literal_repeat1, 1),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_literal, 2),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_non_empty_list_literal, 6),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_non_empty_list_literal, 5),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_non_empty_list_literal, 4),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_non_empty_list_literal, 3),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_non_empty_list_literal_repeat1, 2), SHIFT_REPEAT(11),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_non_empty_list_literal_repeat1, 2),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quote_literal, 3),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_literal, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_literal, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_expression, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_literal, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_natural_literal, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [139] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3),
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
