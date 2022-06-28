module.exports = grammar({
    name: "URCL",
    extras: $ => [$._whitespace, $.comment],

    rules: {
        source_file: $ => seq(
            repeat($._newline),
            repeat(seq(choice(
                field("header", $._header),
                field("define_word", $.DW),
                field("inst", $.instruction),
            ), $._newline)),
            optional(choice(
                field("header", $._header),
                field("define_word", $.DW),
                field("inst", $.instruction),
            ))
        ),
        macro: $ => /@\w+/,
        _whitespace: $ => /[\t\f\v \u00a0\u1680\u2000-\u200a\u2028\u2029\u202f\u205f\u3000\ufeff]+/, // /\s/ without \r\n
        _newline: $ => /[\r\n]+/,
        comment: $ => token(choice(
            // from C# grammar
            seq("//", /[^\r\n]*/),
            seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/"),
        )),
        _header: $ => choice(
            $.BITS,
            $.MINREG,
            $.MINHEAP,
            $.MINSTACK,
            $.RUN,
        ),
        BITS: $ => seq(
            "BITS",
            optional(field("comparison", choice("<=", "==", ">="))),
            field("value", $._immediate_literal)
        ),
        MINREG: $ => seq("MINREG", field("value", $._immediate_literal)),
        MINHEAP: $ => seq("MINHEAP", field("value", $._immediate_literal)),
        MINSTACK: $ => seq("MINSTACK", field("value", $._immediate_literal)),
        RUN: $ => seq(
            field("header_type", "RUN"),
            field("value", choice("RAM", "ROM")),
        ),
        DW: $ => seq(repeat(seq(field("label", $.label), $._newline)), "DW", field("value", $._dw_literal)),
        label: $ => seq(".", field("name", $.identifier)),
        _operand: $ => choice(
            $._immediate_literal,
            $.register,
            $.program_counter,
            $.stack_pointer,
        ),
        register: $ => /[$Rr](([1-9]0*)+|0)/,
        program_counter: $ => "PC",
        stack_pointer: $ => "SP",
        placeholder: $ => seq("<", $.identifier, ">"),
        // WHY DO MEMS PARSE AS IDENTIFIER BUT NOT REGS??
        identifier: $ => /[A-LN-Za-ln-z_]\w*|[Mm]\d*[A-Za-z_]\w*/,
        _dw_literal: $ => choice($._immediate_literal, $.array, $.string),
        array: $ => seq("[", choice($._newline, field("item", repeat($._dw_literal))), "]"),
        // string from C# grammar, allow its escape sequences because why not 🤷‍♀️
        string: $ => seq(
            '"',
            repeat(choice(
                token.immediate(prec(1, /[^\\"\n]+/)),
                $.escape_sequence
            )),
            '"'
        ),
        escape_sequence: $ => token.immediate(choice(
            /\\x[0-9a-fA-F][0-9a-fA-F]?[0-9a-fA-F]?[0-9a-fA-F]?/,
            /\\u[0-9a-fA-F][0-9a-fA-F][0-9a-fA-F][0-9a-fA-F]/,
            /\\U[0-9a-fA-F][0-9a-fA-F][0-9a-fA-F][0-9a-fA-F][0-9a-fA-F][0-9a-fA-F][0-9a-fA-F][0-9a-fA-F]/,
            /\\[^xuU]/,
        )),
        _immediate_literal: $ => choice(
            $.number,
            $.char,
            $.label,
            $.relative,
            $.memory,
            $.macro,
            $.port,
            $.placeholder,
            $.identifier,
        ),
        number: $ => token(seq(
            /[+-]?/,
            choice(
                /0b[0-1]+/,
                /0o[0-7]+/,
                /\d+/,
                /0x[A-Fa-f\d]+/,
            ),
        )),
        char: $ => seq(
            "'",
            choice(token.immediate(/[^'\\]/), $.escape_sequence),
            "'"
        ),
        relative: $ => /~[+-]([1-9]0*)+/,
        memory: $ => /[#Mm](([1-9]0*)+|0)/,
        port: $ => /%\w+/,

        instruction: $ => seq(
            repeat(seq(field("label", $.label), $._newline)),
            field("name", choice($.macro, $.identifier)),
            repeat(field("operand", $._operand)),
        ),
    },
});