module.exports = grammar({
  name: 'cm',
  extras: $ => [
    /\s/
  ],
  rules: {
    json: $ => $.element,
    element: $ => $._value,
    _value: $ => choice(
      $.object,
      $.array,
      $.string,
      $.number,
      $.true,
      $.false,
      $.null
    ),
    object: $ => seq("{", optional($._members), "}"),
    _members: $ => seq($.member, repeat(seq(',', $.member))),
    member: $ => seq(field('name', $.string), ":", field('value', $._value)),
    array: $ => seq(
      '[',
      optional(
        seq(
          $._value,
          repeat(seq(',', $._value)),
        )
      ),
      ']'
    ),
    _digit: $ => /\d/,
    number: $ => token(seq(
      optional('-'),
      choice(
        '0',
        /[1-9]\d*/,
      ),
      optional(/\.\d+/), // fraction
      optional(seq(/E|e/, optional(/(\-|\+)/), /\d+/)) // exponent
    )),

    string: $ => choice(seq("\"", "\""), seq("\"", $._codePoint, "\"")),
    _codePoint: $ => repeat1(choice(token.immediate(/[^"\\\n]+/), token.immediate(seq(/\\/, /[\"b\/\\nfrt]/)))),
    true: $ => 'true',
    false: $ => 'false',
    null: $ => 'null',
  }
})
