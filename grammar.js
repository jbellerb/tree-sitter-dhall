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

  extras: $ => [
    $.line_comment,
    $.block_comment,
    /\s/
  ],

  rules: {
    expression: $ => $.primitive_expression,
    primitive_expression: $ => choice(
      $.numeric_literal,
      $.text_literal,
      $.non_empty_list_literal,
    ),

    _tab: $ => '\t',
    _end_of_line: $ => choice('\n', '\r\n'),

    line_comment: $ => seq($.line_comment_prefix, $.line_comment_content),
    line_comment_prefix: $ => '--',
    line_comment_content: $ => /.*/,

    block_comment: $ => choice(
      seq(
        $.block_comment_open,
        $.block_comment_content,
        $.block_comment_close,
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

    text_literal: $ => choice($.double_quote_literal), //, $.single_quote_literal),
    double_quote_literal: $ => seq('"', repeat1($._double_quote_chunk), '"'),
    _double_quote_chunk: $ => choice(
      $.interpolation,
      $.double_quote_escaped,
      /[^\"\\]/,
    ),
    interpolation: $ => seq('${', $.expression, '}'),
    double_quote_escaped: $ => choice(
      /\\["\$\\/bfnrt]/,
      /\\u[0-9A-F]{4}|\\u\{0*[0-9A-F]{1,6}\}/,
    ),
    // single_quote_literal: $ => ,

    non_empty_list_literal: $ => seq(
      '[',
      optional(','),
      $.expression,
      repeat(seq(',', $.expression)),
      optional(','),
      ']',
    ),
  }
});
