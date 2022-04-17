const digits = /[0-9]+/;
const decimal_natural = /0|[1-9][0-9]*/;
const hexadecimal_natural = /0x[0-9A-F]+/;
const decimal_double_exponent = /e[+-]?[0-9]+/;

module.exports = grammar({
  name: 'dhall',

  externals: $ => [
    $.block_comment_content,
    $.block_comment_end,
  ],

  extras: $ => [],

  rules: {
    complete_expression: $ => seq(
      repeat($.shebang),
      repeat($._whitespace_chunk),
      $.expression,
      repeat($._whitespace_chunk),
      optional($.line_comment_prefix),
    ),
    expression: $ => $.primitive_expression,
    primitive_expression: $ => $.numeric_literal,

    free_text: $ => /.*/,
    _tab: $ => '\t',
    _end_of_line: $ => choice('\n', '\r\n'),

    _whitespace: $ => repeat($._whitespace_chunk),
    _whitespace_chunk: $ => choice(
      ' ',
      $._tab,
      $._end_of_line,
      $.line_comment,
      $.block_comment,
    ),

    shebang: $ => seq(
      '#!',
      $.free_text,
      $._end_of_line,
    ),

    line_comment: $ => seq($.line_comment_prefix, $.free_text, $._end_of_line),
    line_comment_prefix: $ => '--',

    block_comment: $ => choice(
      seq(
        $.block_comment_open,
        $.block_comment_content,
        $.block_comment_close,
      ),
      seq(
        $.block_comment_open,
        $.block_comment_content,
      ),
    ),
    block_comment_open: $ => '{-',
    block_comment_close: $ => '-}',

    numeric_literal: $ => choice(
      $.double_literal,
      $.natural_literal,
      $.integer_literal,
    ),
    double_literal: $ => choice(
      '-Infinity',
      'Infinity',
      'NaN',
      token(
        seq(
          optional(choice('+', '-')),
          digits,
          choice(
            seq('.', digits, optional(decimal_double_exponent)),
            decimal_double_exponent,
          ),
        ),
      ),
    ),
    natural_literal: $ => choice(hexadecimal_natural, decimal_natural),
    integer_literal: $ => seq(
      choice('+', '-'),
      choice(hexadecimal_natural, decimal_natural),
    ),
  }
});
