module.exports = grammar({
    name: "URCL",
    extras: $ => [$._whitespace, $.comment],

    rules: {
        source_file: $ => seq(
            repeat($._newline),
            repeat(seq(choice(
                field("header", $._header),
                field("DW", $.define_word),
                field("inst", $.instruction),
            ), repeat1($._newline))),
            optional(choice(
                field("header", $._header),
                field("DW", $.define_word),
                field("inst", $.instruction),
            ))
        ),
        macro: $ => /@\w+/,
        _whitespace: $ => /[\t\f\v \u00a0\u1680\u2000-\u200a\u2028\u2029\u202f\u205f\u3000\ufeff]/, // /\s/ without \r\n
        _newline: $ => /[\r\n]/,
        comment: $ => choice(
            // from C# grammar
            token(seq("//", /[^\r\n]*/)),
            token(seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/")),
        ),
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
        define_word: $ => seq(field("label", repeat($.label_def)), "DW", field("value", $._dw_literal)),
        label_def: $ => seq($.label, repeat1($._newline)),
        label: $ => seq(".", field("name", $.identifier)),
        _operand: $ => choice(
            $._immediate_literal,
            $.label,
            $.relative,
            $.register,
            $.program_counter,
            $.stack_pointer,
            $.memory,
            $.macro,
            $.port,
            $.placeholder,
            $.identifier,
        ),
        register: $ => /[$Rr](([1-9]0*)+|0)/,
        program_counter: $ => "PC",
        stack_pointer: $ => "SP",
        placeholder: $ => seq("<", $.identifier, ">"),
        // WHY DO MEMS PARSE AS IDENTIFIER BUT NOT REGS??
        identifier: $ => /[A-LN-Za-ln-z_]\w*|[Mm]\d*[A-Za-z_]\w*/,
        _dw_literal: $ => choice($._immediate_literal, $.array, $.string),
        array: $ => seq("[", field("item", repeat($._immediate_literal)), "]"),
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

        instruction: $ => seq(field("label", repeat($.label_def)), field("name", choice($.macro, $.identifier)), field("operand", repeat($._operand))),
    },
});