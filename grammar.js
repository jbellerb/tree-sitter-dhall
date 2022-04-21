const digits = /[0-9]+/;
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

  inline: $ => [
    $.annotated_expression,
  ],

  rules: {
    expression: $ => choice(
      // TODO: the others
      $.annotated_expression,
    ),

    annotated_expression: $ => seq(
      $._operator_expression,
      optional(seq(':', $.expression))
    ),

    _operator_expression: $ => choice(
      // TODO: the rest of the operators
      $._application_expression,
    ),

    _application_expression: $ => seq(
      choice(
        seq('merge', $._import_expression, $._import_expression),
        seq('Some', $._import_expression),
        seq('toMap', $._import_expression),
        seq('showConstructor', $._import_expression),
        $._import_expression,
      ),
    ),

    _import_expression: $ => choice(
      // TODO: $.import,
      seq($._selector_expression, optional(seq('::', $._selector_expression))),
    ),
    _selector_expression: $ => seq(
      $.primitive_expression,
      // repeat(seq('.', $.selector)),
    ),

    primitive_expression: $ => choice(
      $.numeric_literal,
      $.text_literal,
      $.non_empty_list_literal,
      seq('(', $.expression, ')'),
    ),

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
    double_literal: $ => token(
      choice(
        '-Infinity',
        'Infinity',
        'NaN',
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
    natural_literal: $ => token(choice(hexadecimal_natural, digits)),
    integer_literal: $ => token(
      seq(choice('+', '-'), choice(hexadecimal_natural, digits)),
    ),

    text_literal: $ => choice($.double_quote_literal), //, $.single_quote_literal),
    double_quote_literal: $ => seq('"', repeat1($._double_quote_chunk), '"'),
    _double_quote_chunk: $ => choice(
      $.interpolation,
      $.double_quote_escaped,
      /[^\"\\]/,
    ),
    interpolation: $ => seq('${', $.expression, '}'),
    double_quote_escaped: $ => token(
      choice(
        /\\["\$\\/bfnrt]/,
        /\\u[0-9A-F]{4}/,
        /\\u\{0*[0-9A-F]{1,6}\}/,
      ),
    ),
    // TODO: single_quote_literal: $ => ,

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
