module.exports = grammar({
    name: "URCL",
    extras: $ => [$._whitespace, $.comment],

    rules: {
        source_file: $ => seq(
            repeat($._newline),
            repeat(seq($._line, repeat1($._newline))),
            optional($._line)
        ),
        macro: $ => /@\w+/,
        _whitespace: $ => /[\t\f\v \u00a0\u1680\u2000-\u200a\u2028\u2029\u202f\u205f\u3000\ufeff]/, // /\s/ without \r\n
        _newline: $ => /[\r\n]/,
        comment: $ => choice(
            // from C# grammar
            seq("//", /[^\r\n]*/),
            seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/"),
        ),
        _header: $ => choice(
            $.header_BITS,
            $.header_MINREG,
            $.header_MINHEAP,
            $.header_MINSTACK,
            $.header_RUN,
        ),
        header_BITS: $ => seq(
            "BITS",
            optional(field("comparison", choice("<=", "==", ">="))),
            field("value", $._immediate_literal)
        ),
        header_MINREG: $ => seq("MINREG", field("value", $._immediate_literal)),
        header_MINHEAP: $ => seq("MINHEAP", field("value", $._immediate_literal)),
        header_MINSTACK: $ => seq("MINSTACK", field("value", $._immediate_literal)),
        header_RUN: $ => seq(
            field("header_type", "RUN"),
            field("value", choice("RAM", "ROM")),
        ),
        define_word: $ => seq("DW", $._dw_literal),
        label_def: $ => seq($.label, repeat1($._newline)),
        label: $ => seq(".", field("name", $.identifier)),
        _operand: $ => choice(
            $._immediate_literal,
            $.label,
            $.relative,
            prec(1, $.register),
            prec(1, $.memory),
            $.macro,
            $.port,
            $.placeholder,
            prec(-1, $.identifier),
        ),
        _register: $ => choice($.register, $.program_counter, $.stack_pointer),
        register: $ => /[$Rr](([1-9]0*)+|0)/,
        program_counter: $ => "PC",
        stack_pointer: $ => "SP",
        placeholder: $ => seq("<", $.identifier, ">"),
        identifier: $ => choice(
            /[A-LN-QS-Za-ln-qs-z_]\w\w+/,
            /[A-LNOQT-Za-ln-qs-z_]\w?/,
            /[RMrm]\d*[A-Za-z_]\w*/,
            /S[A-OQ-Za-z\d_]/,
            /P[A-BD-Za-z\d_]/,
        ),
        _dw_literal: $ => choice($._immediate_literal, $.array, $.string),
        array: $ => seq("[", repeat($._immediate_literal), "]"),
        string: $ => /"([^\\'\r\n"]|\\[^\r\n])*"/,
        _immediate_literal: $ => choice($.number, $.char, $.char_escape),
        number: $ => token(seq(
            /[+-]?/,
            choice(
                /0b[0-1]+/,
                /0o[0-7]+/,
                /\d+/,
                /0x[A-Fa-f\d]+/,
            ),
        )),
        char: $ => /'[^\\'\r\n]'/,
        char_escape: $ => /'\\['\\nrt0]'/,
        relative: $ => /~[+-]([1-9]0*)+/,
        memory: $ => /[#Mm](([1-9]0*)+|0)/,
        port: $ => /%\w+/,
        _line: $ => choice(
            $._header,
            $.define_word,
            $.instruction,
        ),

        instruction: $ => seq(field("label", repeat($.label_def)), field("name", choice($.macro, $.identifier)), repeat(seq($._whitespace, field("operand", $._operand)))),
    },
});