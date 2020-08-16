module.exports = grammar({
  name: "cm",
  extras: $ => [/\s/],
  word: $ => $.identifier,
  rules: {
    program: $ => repeat($._declaration),
    _declaration: $ => choice($.var_declaration, $.function_declaration),
    var_declaration: $ =>
      seq($.type_specifier, $.identifier, optional(seq("[", $.num_literal, "]")), ';'),
    type_specifier: $ => choice('int', 'void', 'bool'),
    function_declaration: $ => seq($.type_specifier, $.identifier, $.param_list, $.compound_statement),
    param_list: $ => seq('(', optional(seq($.param, repeat(seq(',', $.param)))), ')'),
    param: $ => seq($.type_specifier, $.identifier, optional(seq('[', ']'))),
    compound_statement: $ => seq('{', optional(repeat($.var_declaration)), optional(repeat($._statement)), '}'),
    _statement: $ => choice($.expression_statement, $.compound_statement, $.selection_statement, $.iteration_statement, $.return_statement),
    selection_statement: $ => prec.right(2, seq('if', '(', $._expression, ')', $._statement, optional(seq('else', $._statement)))),
    iteration_statement: $ => seq('while', '(', $._expression, ')', $._statement),
    return_statement: $ => seq('return', optional($._expression), ';'),
    // selection_statement: $ => '',
    expression_statement: $ => seq(optional($._expression), ';'),
    _expression: $ => choice($.assignment, $._simple_expression),
    // _simple_expression: $ => seq($.binary_expression, optional())
    _simple_expression: $ => choice(
      $._factor,
      $.binary_expression
    ),
    binary_expression: $ => choice(
      prec.left(1, seq(field('left', $._expression), field('op', $.rel_op), field('right', $._expression))),
      prec.left(2, seq(field('left', $._expression), field('op', $.add_op), field('right', $._expression))),
      prec.left(3, seq(field('left', $._expression), field('op', $.mul_op), field('right', $._expression))),

    ),
    rel_op: $ => choice('>', '>=', '<', '<=', '==', '!='),
    add_op: $ => choice('+', '-'),
    mul_op: $ => choice('*', '/'),
    _factor: $ => choice(seq('(', $._expression, ')'), $.variable, $.call_expression, $.num_literal),
    call_expression: $ => seq($.identifier, $.arg_list),
    arg_list: $ => seq('(', optional(seq($._expression, repeat(seq(',', $._expression)))), ')'),
    assignment: $ => prec.left(0, seq(field('left', $.variable), '=', field('right', $._expression))),
    variable: $ => seq($.identifier, optional(seq('[', $._expression, ']'))),
    identifier: $ => /[a-zA-Z]+/,
    num_literal: $ => /\d+/,
  },
});
