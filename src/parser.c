#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 41
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 34
#define ALIAS_COUNT 0
#define TOKEN_COUNT 20
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  sym_free_text = 1,
  sym__tab = 2,
  anon_sym_LF = 3,
  anon_sym_CR_LF = 4,
  anon_sym_ = 5,
  anon_sym_POUND_BANG = 6,
  sym_line_comment_prefix = 7,
  sym_block_comment_open = 8,
  sym_block_comment_close = 9,
  anon_sym_DASHInfinity = 10,
  anon_sym_Infinity = 11,
  anon_sym_NaN = 12,
  aux_sym_double_literal_token1 = 13,
  aux_sym_natural_literal_token1 = 14,
  aux_sym_natural_literal_token2 = 15,
  anon_sym_PLUS = 16,
  anon_sym_DASH = 17,
  sym_block_comment_content = 18,
  sym_block_comment_end = 19,
  sym_complete_expression = 20,
  sym_expression = 21,
  sym_primitive_expression = 22,
  sym__end_of_line = 23,
  sym__whitespace_chunk = 24,
  sym_shebang = 25,
  sym_line_comment = 26,
  sym_block_comment = 27,
  sym_numeric_literal = 28,
  sym_double_literal = 29,
  sym_natural_literal = 30,
  sym_integer_literal = 31,
  aux_sym_complete_expression_repeat1 = 32,
  aux_sym_complete_expression_repeat2 = 33,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_free_text] = "free_text",
  [sym__tab] = "_tab",
  [anon_sym_LF] = "\n",
  [anon_sym_CR_LF] = "\r\n",
  [anon_sym_] = " ",
  [anon_sym_POUND_BANG] = "#!",
  [sym_line_comment_prefix] = "line_comment_prefix",
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
  [sym_block_comment_content] = "block_comment_content",
  [sym_block_comment_end] = "block_comment_end",
  [sym_complete_expression] = "complete_expression",
  [sym_expression] = "expression",
  [sym_primitive_expression] = "primitive_expression",
  [sym__end_of_line] = "_end_of_line",
  [sym__whitespace_chunk] = "_whitespace_chunk",
  [sym_shebang] = "shebang",
  [sym_line_comment] = "line_comment",
  [sym_block_comment] = "block_comment",
  [sym_numeric_literal] = "numeric_literal",
  [sym_double_literal] = "double_literal",
  [sym_natural_literal] = "natural_literal",
  [sym_integer_literal] = "integer_literal",
  [aux_sym_complete_expression_repeat1] = "complete_expression_repeat1",
  [aux_sym_complete_expression_repeat2] = "complete_expression_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_free_text] = sym_free_text,
  [sym__tab] = sym__tab,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_CR_LF] = anon_sym_CR_LF,
  [anon_sym_] = anon_sym_,
  [anon_sym_POUND_BANG] = anon_sym_POUND_BANG,
  [sym_line_comment_prefix] = sym_line_comment_prefix,
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
  [sym_block_comment_content] = sym_block_comment_content,
  [sym_block_comment_end] = sym_block_comment_end,
  [sym_complete_expression] = sym_complete_expression,
  [sym_expression] = sym_expression,
  [sym_primitive_expression] = sym_primitive_expression,
  [sym__end_of_line] = sym__end_of_line,
  [sym__whitespace_chunk] = sym__whitespace_chunk,
  [sym_shebang] = sym_shebang,
  [sym_line_comment] = sym_line_comment,
  [sym_block_comment] = sym_block_comment,
  [sym_numeric_literal] = sym_numeric_literal,
  [sym_double_literal] = sym_double_literal,
  [sym_natural_literal] = sym_natural_literal,
  [sym_integer_literal] = sym_integer_literal,
  [aux_sym_complete_expression_repeat1] = aux_sym_complete_expression_repeat1,
  [aux_sym_complete_expression_repeat2] = aux_sym_complete_expression_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_free_text] = {
    .visible = true,
    .named = true,
  },
  [sym__tab] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CR_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_BANG] = {
    .visible = true,
    .named = false,
  },
  [sym_line_comment_prefix] = {
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
  [sym_block_comment_content] = {
    .visible = true,
    .named = true,
  },
  [sym_block_comment_end] = {
    .visible = true,
    .named = true,
  },
  [sym_complete_expression] = {
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
  [sym__end_of_line] = {
    .visible = false,
    .named = true,
  },
  [sym__whitespace_chunk] = {
    .visible = false,
    .named = true,
  },
  [sym_shebang] = {
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
  [aux_sym_complete_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_complete_expression_repeat2] = {
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(25);
      if (lookahead == '\t') ADVANCE(28);
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(31);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == '+') ADVANCE(44);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == '0') ADVANCE(42);
      if (lookahead == 'I') ADVANCE(13);
      if (lookahead == 'N') ADVANCE(6);
      if (lookahead == '{') ADVANCE(3);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(30);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(32);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(34);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == 'N') ADVANCE(38);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(5);
      END_STATE();
    case 7:
      if (lookahead == 'f') ADVANCE(10);
      END_STATE();
    case 8:
      if (lookahead == 'f') ADVANCE(12);
      END_STATE();
    case 9:
      if (lookahead == 'i') ADVANCE(17);
      END_STATE();
    case 10:
      if (lookahead == 'i') ADVANCE(14);
      END_STATE();
    case 11:
      if (lookahead == 'i') ADVANCE(18);
      END_STATE();
    case 12:
      if (lookahead == 'i') ADVANCE(15);
      END_STATE();
    case 13:
      if (lookahead == 'n') ADVANCE(7);
      END_STATE();
    case 14:
      if (lookahead == 'n') ADVANCE(9);
      END_STATE();
    case 15:
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 16:
      if (lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 17:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 18:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 19:
      if (lookahead == 'y') ADVANCE(37);
      END_STATE();
    case 20:
      if (lookahead == 'y') ADVANCE(36);
      END_STATE();
    case 21:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(41);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_free_text);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_free_text);
      if (eof) ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym__tab);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_CR_LF);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_POUND_BANG);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_line_comment_prefix);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_block_comment_open);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_block_comment_close);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_DASHInfinity);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_Infinity);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_NaN);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_double_literal_token1);
      if (lookahead == 'e') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_double_literal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_natural_literal_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_natural_literal_token2);
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(21);
      if (lookahead == 'x') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_natural_literal_token2);
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == 'I') ADVANCE(16);
      if (lookahead == '}') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
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
  [30] = {.lex_state = 27},
  [31] = {.lex_state = 27},
  [32] = {.lex_state = 27},
  [33] = {.lex_state = 27},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 27},
  [36] = {.lex_state = 27},
  [37] = {.lex_state = 0, .external_lex_state = 2},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 27},
  [40] = {.lex_state = 0, .external_lex_state = 2},
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
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__tab] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_CR_LF] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_POUND_BANG] = ACTIONS(1),
    [sym_line_comment_prefix] = ACTIONS(1),
    [sym_block_comment_open] = ACTIONS(1),
    [sym_block_comment_close] = ACTIONS(1),
    [anon_sym_DASHInfinity] = ACTIONS(1),
    [anon_sym_Infinity] = ACTIONS(1),
    [anon_sym_NaN] = ACTIONS(1),
    [aux_sym_double_literal_token1] = ACTIONS(1),
    [aux_sym_natural_literal_token1] = ACTIONS(1),
    [aux_sym_natural_literal_token2] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [sym_block_comment_content] = ACTIONS(1),
    [sym_block_comment_end] = ACTIONS(1),
  },
  [1] = {
    [sym_complete_expression] = STATE(38),
    [sym_expression] = STATE(14),
    [sym_primitive_expression] = STATE(23),
    [sym__end_of_line] = STATE(4),
    [sym__whitespace_chunk] = STATE(4),
    [sym_shebang] = STATE(2),
    [sym_line_comment] = STATE(4),
    [sym_block_comment] = STATE(4),
    [sym_numeric_literal] = STATE(19),
    [sym_double_literal] = STATE(20),
    [sym_natural_literal] = STATE(20),
    [sym_integer_literal] = STATE(20),
    [aux_sym_complete_expression_repeat1] = STATE(2),
    [aux_sym_complete_expression_repeat2] = STATE(4),
    [sym__tab] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(3),
    [anon_sym_CR_LF] = ACTIONS(3),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_POUND_BANG] = ACTIONS(5),
    [sym_line_comment_prefix] = ACTIONS(7),
    [sym_block_comment_open] = ACTIONS(9),
    [anon_sym_DASHInfinity] = ACTIONS(11),
    [anon_sym_Infinity] = ACTIONS(11),
    [anon_sym_NaN] = ACTIONS(11),
    [aux_sym_double_literal_token1] = ACTIONS(11),
    [aux_sym_natural_literal_token1] = ACTIONS(13),
    [aux_sym_natural_literal_token2] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
  },
  [2] = {
    [sym_expression] = STATE(13),
    [sym_primitive_expression] = STATE(23),
    [sym__end_of_line] = STATE(3),
    [sym__whitespace_chunk] = STATE(3),
    [sym_shebang] = STATE(6),
    [sym_line_comment] = STATE(3),
    [sym_block_comment] = STATE(3),
    [sym_numeric_literal] = STATE(19),
    [sym_double_literal] = STATE(20),
    [sym_natural_literal] = STATE(20),
    [sym_integer_literal] = STATE(20),
    [aux_sym_complete_expression_repeat1] = STATE(6),
    [aux_sym_complete_expression_repeat2] = STATE(3),
    [sym__tab] = ACTIONS(19),
    [anon_sym_LF] = ACTIONS(19),
    [anon_sym_CR_LF] = ACTIONS(19),
    [anon_sym_] = ACTIONS(19),
    [anon_sym_POUND_BANG] = ACTIONS(5),
    [sym_line_comment_prefix] = ACTIONS(7),
    [sym_block_comment_open] = ACTIONS(9),
    [anon_sym_DASHInfinity] = ACTIONS(11),
    [anon_sym_Infinity] = ACTIONS(11),
    [anon_sym_NaN] = ACTIONS(11),
    [aux_sym_double_literal_token1] = ACTIONS(11),
    [aux_sym_natural_literal_token1] = ACTIONS(13),
    [aux_sym_natural_literal_token2] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
  },
  [3] = {
    [sym_expression] = STATE(11),
    [sym_primitive_expression] = STATE(23),
    [sym__end_of_line] = STATE(5),
    [sym__whitespace_chunk] = STATE(5),
    [sym_line_comment] = STATE(5),
    [sym_block_comment] = STATE(5),
    [sym_numeric_literal] = STATE(19),
    [sym_double_literal] = STATE(20),
    [sym_natural_literal] = STATE(20),
    [sym_integer_literal] = STATE(20),
    [aux_sym_complete_expression_repeat2] = STATE(5),
    [sym__tab] = ACTIONS(21),
    [anon_sym_LF] = ACTIONS(21),
    [anon_sym_CR_LF] = ACTIONS(21),
    [anon_sym_] = ACTIONS(21),
    [sym_line_comment_prefix] = ACTIONS(7),
    [sym_block_comment_open] = ACTIONS(9),
    [anon_sym_DASHInfinity] = ACTIONS(11),
    [anon_sym_Infinity] = ACTIONS(11),
    [anon_sym_NaN] = ACTIONS(11),
    [aux_sym_double_literal_token1] = ACTIONS(11),
    [aux_sym_natural_literal_token1] = ACTIONS(13),
    [aux_sym_natural_literal_token2] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
  },
  [4] = {
    [sym_expression] = STATE(13),
    [sym_primitive_expression] = STATE(23),
    [sym__end_of_line] = STATE(5),
    [sym__whitespace_chunk] = STATE(5),
    [sym_line_comment] = STATE(5),
    [sym_block_comment] = STATE(5),
    [sym_numeric_literal] = STATE(19),
    [sym_double_literal] = STATE(20),
    [sym_natural_literal] = STATE(20),
    [sym_integer_literal] = STATE(20),
    [aux_sym_complete_expression_repeat2] = STATE(5),
    [sym__tab] = ACTIONS(21),
    [anon_sym_LF] = ACTIONS(21),
    [anon_sym_CR_LF] = ACTIONS(21),
    [anon_sym_] = ACTIONS(21),
    [sym_line_comment_prefix] = ACTIONS(7),
    [sym_block_comment_open] = ACTIONS(9),
    [anon_sym_DASHInfinity] = ACTIONS(11),
    [anon_sym_Infinity] = ACTIONS(11),
    [anon_sym_NaN] = ACTIONS(11),
    [aux_sym_double_literal_token1] = ACTIONS(11),
    [aux_sym_natural_literal_token1] = ACTIONS(13),
    [aux_sym_natural_literal_token2] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
  },
  [5] = {
    [sym__end_of_line] = STATE(5),
    [sym__whitespace_chunk] = STATE(5),
    [sym_line_comment] = STATE(5),
    [sym_block_comment] = STATE(5),
    [aux_sym_complete_expression_repeat2] = STATE(5),
    [sym__tab] = ACTIONS(23),
    [anon_sym_LF] = ACTIONS(23),
    [anon_sym_CR_LF] = ACTIONS(23),
    [anon_sym_] = ACTIONS(23),
    [sym_line_comment_prefix] = ACTIONS(26),
    [sym_block_comment_open] = ACTIONS(29),
    [anon_sym_DASHInfinity] = ACTIONS(32),
    [anon_sym_Infinity] = ACTIONS(32),
    [anon_sym_NaN] = ACTIONS(32),
    [aux_sym_double_literal_token1] = ACTIONS(32),
    [aux_sym_natural_literal_token1] = ACTIONS(32),
    [aux_sym_natural_literal_token2] = ACTIONS(34),
    [anon_sym_PLUS] = ACTIONS(34),
    [anon_sym_DASH] = ACTIONS(34),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(38), 1,
      anon_sym_POUND_BANG,
    STATE(6), 2,
      sym_shebang,
      aux_sym_complete_expression_repeat1,
    ACTIONS(41), 3,
      aux_sym_natural_literal_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(36), 11,
      sym__tab,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      sym_line_comment_prefix,
      sym_block_comment_open,
      anon_sym_DASHInfinity,
      anon_sym_Infinity,
      anon_sym_NaN,
      aux_sym_double_literal_token1,
      aux_sym_natural_literal_token1,
  [26] = 2,
    ACTIONS(45), 3,
      aux_sym_natural_literal_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(43), 12,
      sym__tab,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_POUND_BANG,
      sym_line_comment_prefix,
      sym_block_comment_open,
      anon_sym_DASHInfinity,
      anon_sym_Infinity,
      anon_sym_NaN,
      aux_sym_double_literal_token1,
      aux_sym_natural_literal_token1,
  [46] = 3,
    ACTIONS(49), 1,
      sym_block_comment_close,
    ACTIONS(51), 3,
      aux_sym_natural_literal_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(47), 11,
      sym__tab,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      sym_line_comment_prefix,
      sym_block_comment_open,
      anon_sym_DASHInfinity,
      anon_sym_Infinity,
      anon_sym_NaN,
      aux_sym_double_literal_token1,
      aux_sym_natural_literal_token1,
  [68] = 2,
    ACTIONS(55), 3,
      aux_sym_natural_literal_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(53), 11,
      sym__tab,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      sym_line_comment_prefix,
      sym_block_comment_open,
      anon_sym_DASHInfinity,
      anon_sym_Infinity,
      anon_sym_NaN,
      aux_sym_double_literal_token1,
      aux_sym_natural_literal_token1,
  [87] = 2,
    ACTIONS(59), 3,
      aux_sym_natural_literal_token2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(57), 11,
      sym__tab,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      sym_line_comment_prefix,
      sym_block_comment_open,
      anon_sym_DASHInfinity,
      anon_sym_Infinity,
      anon_sym_NaN,
      aux_sym_double_literal_token1,
      aux_sym_natural_literal_token1,
  [106] = 5,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    ACTIONS(65), 1,
      sym_line_comment_prefix,
    ACTIONS(67), 1,
      sym_block_comment_open,
    ACTIONS(63), 4,
      sym__tab,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
    STATE(17), 5,
      sym__end_of_line,
      sym__whitespace_chunk,
      sym_line_comment,
      sym_block_comment,
      aux_sym_complete_expression_repeat2,
  [129] = 5,
    ACTIONS(67), 1,
      sym_block_comment_open,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    ACTIONS(73), 1,
      sym_line_comment_prefix,
    ACTIONS(71), 4,
      sym__tab,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
    STATE(15), 5,
      sym__end_of_line,
      sym__whitespace_chunk,
      sym_line_comment,
      sym_block_comment,
      aux_sym_complete_expression_repeat2,
  [152] = 5,
    ACTIONS(67), 1,
      sym_block_comment_open,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    ACTIONS(73), 1,
      sym_line_comment_prefix,
    ACTIONS(75), 4,
      sym__tab,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
    STATE(16), 5,
      sym__end_of_line,
      sym__whitespace_chunk,
      sym_line_comment,
      sym_block_comment,
      aux_sym_complete_expression_repeat2,
  [175] = 5,
    ACTIONS(67), 1,
      sym_block_comment_open,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    ACTIONS(81), 1,
      sym_line_comment_prefix,
    ACTIONS(79), 4,
      sym__tab,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
    STATE(12), 5,
      sym__end_of_line,
      sym__whitespace_chunk,
      sym_line_comment,
      sym_block_comment,
      aux_sym_complete_expression_repeat2,
  [198] = 5,
    ACTIONS(32), 1,
      ts_builtin_sym_end,
    ACTIONS(86), 1,
      sym_line_comment_prefix,
    ACTIONS(89), 1,
      sym_block_comment_open,
    ACTIONS(83), 4,
      sym__tab,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
    STATE(15), 5,
      sym__end_of_line,
      sym__whitespace_chunk,
      sym_line_comment,
      sym_block_comment,
      aux_sym_complete_expression_repeat2,
  [221] = 5,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    ACTIONS(65), 1,
      sym_line_comment_prefix,
    ACTIONS(67), 1,
      sym_block_comment_open,
    ACTIONS(71), 4,
      sym__tab,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
    STATE(15), 5,
      sym__end_of_line,
      sym__whitespace_chunk,
      sym_line_comment,
      sym_block_comment,
      aux_sym_complete_expression_repeat2,
  [244] = 5,
    ACTIONS(67), 1,
      sym_block_comment_open,
    ACTIONS(92), 1,
      ts_builtin_sym_end,
    ACTIONS(94), 1,
      sym_line_comment_prefix,
    ACTIONS(71), 4,
      sym__tab,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
    STATE(15), 5,
      sym__end_of_line,
      sym__whitespace_chunk,
      sym_line_comment,
      sym_block_comment,
      aux_sym_complete_expression_repeat2,
  [267] = 2,
    ACTIONS(96), 1,
      sym_block_comment_close,
    ACTIONS(47), 7,
      ts_builtin_sym_end,
      sym__tab,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      sym_line_comment_prefix,
      sym_block_comment_open,
  [280] = 1,
    ACTIONS(98), 7,
      ts_builtin_sym_end,
      sym__tab,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      sym_line_comment_prefix,
      sym_block_comment_open,
  [290] = 1,
    ACTIONS(100), 7,
      ts_builtin_sym_end,
      sym__tab,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      sym_line_comment_prefix,
      sym_block_comment_open,
  [300] = 1,
    ACTIONS(53), 7,
      ts_builtin_sym_end,
      sym__tab,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      sym_line_comment_prefix,
      sym_block_comment_open,
  [310] = 1,
    ACTIONS(102), 7,
      ts_builtin_sym_end,
      sym__tab,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      sym_line_comment_prefix,
      sym_block_comment_open,
  [320] = 1,
    ACTIONS(104), 7,
      ts_builtin_sym_end,
      sym__tab,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      sym_line_comment_prefix,
      sym_block_comment_open,
  [330] = 1,
    ACTIONS(57), 7,
      ts_builtin_sym_end,
      sym__tab,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      sym_line_comment_prefix,
      sym_block_comment_open,
  [340] = 1,
    ACTIONS(106), 7,
      ts_builtin_sym_end,
      sym__tab,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      sym_line_comment_prefix,
      sym_block_comment_open,
  [350] = 1,
    ACTIONS(108), 7,
      ts_builtin_sym_end,
      sym__tab,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      sym_line_comment_prefix,
      sym_block_comment_open,
  [360] = 2,
    STATE(24), 1,
      sym__end_of_line,
    ACTIONS(110), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [368] = 2,
    STATE(7), 1,
      sym__end_of_line,
    ACTIONS(112), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [376] = 2,
    STATE(10), 1,
      sym__end_of_line,
    ACTIONS(114), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [384] = 2,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    ACTIONS(116), 1,
      sym_free_text,
  [391] = 2,
    ACTIONS(92), 1,
      ts_builtin_sym_end,
    ACTIONS(116), 1,
      sym_free_text,
  [398] = 2,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    ACTIONS(116), 1,
      sym_free_text,
  [405] = 2,
    ACTIONS(116), 1,
      sym_free_text,
    ACTIONS(118), 1,
      ts_builtin_sym_end,
  [412] = 2,
    ACTIONS(120), 1,
      aux_sym_natural_literal_token1,
    ACTIONS(122), 1,
      aux_sym_natural_literal_token2,
  [419] = 1,
    ACTIONS(124), 1,
      sym_free_text,
  [423] = 1,
    ACTIONS(126), 1,
      sym_free_text,
  [427] = 1,
    ACTIONS(128), 1,
      sym_block_comment_content,
  [431] = 1,
    ACTIONS(130), 1,
      ts_builtin_sym_end,
  [435] = 1,
    ACTIONS(116), 1,
      sym_free_text,
  [439] = 1,
    ACTIONS(132), 1,
      sym_block_comment_content,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 26,
  [SMALL_STATE(8)] = 46,
  [SMALL_STATE(9)] = 68,
  [SMALL_STATE(10)] = 87,
  [SMALL_STATE(11)] = 106,
  [SMALL_STATE(12)] = 129,
  [SMALL_STATE(13)] = 152,
  [SMALL_STATE(14)] = 175,
  [SMALL_STATE(15)] = 198,
  [SMALL_STATE(16)] = 221,
  [SMALL_STATE(17)] = 244,
  [SMALL_STATE(18)] = 267,
  [SMALL_STATE(19)] = 280,
  [SMALL_STATE(20)] = 290,
  [SMALL_STATE(21)] = 300,
  [SMALL_STATE(22)] = 310,
  [SMALL_STATE(23)] = 320,
  [SMALL_STATE(24)] = 330,
  [SMALL_STATE(25)] = 340,
  [SMALL_STATE(26)] = 350,
  [SMALL_STATE(27)] = 360,
  [SMALL_STATE(28)] = 368,
  [SMALL_STATE(29)] = 376,
  [SMALL_STATE(30)] = 384,
  [SMALL_STATE(31)] = 391,
  [SMALL_STATE(32)] = 398,
  [SMALL_STATE(33)] = 405,
  [SMALL_STATE(34)] = 412,
  [SMALL_STATE(35)] = 419,
  [SMALL_STATE(36)] = 423,
  [SMALL_STATE(37)] = 427,
  [SMALL_STATE(38)] = 431,
  [SMALL_STATE(39)] = 435,
  [SMALL_STATE(40)] = 439,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_complete_expression_repeat2, 2), SHIFT_REPEAT(5),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_complete_expression_repeat2, 2), SHIFT_REPEAT(35),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_complete_expression_repeat2, 2), SHIFT_REPEAT(37),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_complete_expression_repeat2, 2),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_complete_expression_repeat2, 2),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_complete_expression_repeat1, 2),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_complete_expression_repeat1, 2), SHIFT_REPEAT(36),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_complete_expression_repeat1, 2),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shebang, 3),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shebang, 3),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 2),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 2),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 3),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 3),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_comment, 3),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_complete_expression, 3),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_complete_expression, 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_complete_expression, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_complete_expression_repeat2, 2), SHIFT_REPEAT(15),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_complete_expression_repeat2, 2), SHIFT_REPEAT(39),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_complete_expression_repeat2, 2), SHIFT_REPEAT(40),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_complete_expression, 4),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_expression, 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_literal, 1),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_literal, 2),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_natural_literal, 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_literal, 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_complete_expression, 5),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [130] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
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
