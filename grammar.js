const operand = (name, type) => $ => field(name, {
    "any": $._value_operand,
    "imm": $._immediate_operand,
    "reg": $._register_operand,
    "port": $._port_operand,
}[type]);

const instruction_convert = (instructions) => Object.fromEntries(
    Object.entries(instructions).map(([opcode, operands]) => [
        `inst_${opcode}`,
        $ => seq(
            field("labels", repeat($.label_def)),
            opcode,
            ...operands.map(operand => operand($)),
        )
    ]),
);

const instructions = instruction_convert({
    // Fundamental Instructions
    NOP: [],
    HLT: [],
    IN: [operand("destination", "reg"), operand("source", "port")],
    OUT: [operand("destination", "port"), operand("source", "any")],
    MOV: [operand("destination", "reg"), operand("source", "any")],
    IMM: [operand("destination", "reg"), operand("source", "imm")],

    // Stack Operations
    PSH: [operand("source", "any")],
    POP: [operand("destination", "reg")],
    RET: [],

    // Memory Operations
    LOD: [operand("destination", "reg"), operand("source", "any")],
    LLOD: [operand("destination", "reg"), operand("source1", "any"), operand("source2", "any")],
    STR: [operand("destination", "any"), operand("source", "any")],
    LSTR: [operand("destination", "any"), operand("source1", "any"), operand("source2", "any")],
    CPY: [operand("destination", "any"), operand("source", "any")],

    // Arithmetic Operations
    ADD: [operand("destination", "reg"), operand("source1", "any"), operand("source2", "any")],
    SUB: [operand("destination", "reg"), operand("source1", "any"), operand("source2", "any")],
    INC: [operand("destination", "reg"), operand("source", "any")],
    DEC: [operand("destination", "reg"), operand("source", "any")],
    NEG: [operand("destination", "reg"), operand("source", "any")],
    MLT: [operand("destination", "reg"), operand("source1", "any"), operand("source2", "any")],
    DIV: [operand("destination", "reg"), operand("source1", "any"), operand("source2", "any")],
    MOD: [operand("destination", "reg"), operand("source1", "any"), operand("source2", "any")],
    SDIV: [operand("destination", "reg"), operand("source1", "any"), operand("source2", "any")],

    // Logical Operations
    NOT: [operand("destination", "reg"), operand("source", "any")],
    OR: [operand("destination", "reg"), operand("source1", "any"), operand("source2", "any")],
    NOR: [operand("destination", "reg"), operand("source1", "any"), operand("source2", "any")],
    AND: [operand("destination", "reg"), operand("source1", "any"), operand("source2", "any")],
    NAND: [operand("destination", "reg"), operand("source1", "any"), operand("source2", "any")],
    XOR: [operand("destination", "reg"), operand("source1", "any"), operand("source2", "any")],
    XNOR: [operand("destination", "reg"), operand("source1", "any"), operand("source2", "any")],
    RSH: [operand("destination", "reg"), operand("source", "any")],
    SRS: [operand("destination", "reg"), operand("source", "any")],
    LSH: [operand("destination", "reg"), operand("source", "any")],
    BSR: [operand("destination", "reg"), operand("source1", "any"), operand("source2", "any")],
    BSS: [operand("destination", "reg"), operand("source1", "any"), operand("source2", "any")],
    BSL: [operand("destination", "reg"), operand("source1", "any"), operand("source2", "any")],

    // Branches
    JMP: [operand("destination", "any")],
    CAL: [operand("destination", "any")],
    BRE: [operand("destination", "any"), operand("source1", "any"), operand("source2", "any")],
    BNE: [operand("destination", "any"), operand("source1", "any"), operand("source2", "any")],
    SBRG: [operand("destination", "any"), operand("source1", "any"), operand("source2", "any")],
    SBGE: [operand("destination", "any"), operand("source1", "any"), operand("source2", "any")],
    SBRL: [operand("destination", "any"), operand("source1", "any"), operand("source2", "any")],
    SBLE: [operand("destination", "any"), operand("source1", "any"), operand("source2", "any")],
    BRG: [operand("destination", "any"), operand("source1", "any"), operand("source2", "any")],
    BGE: [operand("destination", "any"), operand("source1", "any"), operand("source2", "any")],
    BRL: [operand("destination", "any"), operand("source1", "any"), operand("source2", "any")],
    BLE: [operand("destination", "any"), operand("source1", "any"), operand("source2", "any")],
    BRC: [operand("destination", "any"), operand("source1", "any"), operand("source2", "any")],
    BNC: [operand("destination", "any"), operand("source1", "any"), operand("source2", "any")],
    BEV: [operand("destination", "any"), operand("source", "any")],
    BOD: [operand("destination", "any"), operand("source", "any")],
    BRZ: [operand("destination", "any"), operand("source", "any")],
    BNZ: [operand("destination", "any"), operand("source", "any")],
    BRP: [operand("destination", "any"), operand("source", "any")],
    BRN: [operand("destination", "any"), operand("source", "any")],

    // Non-Branching Comparisons
    SETE: [operand("destination", "reg"), operand("source1", "any"), operand("source2", "any")],
    SETNE: [operand("destination", "reg"), operand("source1", "any"), operand("source2", "any")],
    SSETLT: [operand("destination", "reg"), operand("source1", "any"), operand("source2", "any")],
    SSETLE: [operand("destination", "reg"), operand("source1", "any"), operand("source2", "any")],
    SSETGT: [operand("destination", "reg"), operand("source1", "any"), operand("source2", "any")],
    SSETGE: [operand("destination", "reg"), operand("source1", "any"), operand("source2", "any")],
    SETLT: [operand("destination", "reg"), operand("source1", "any"), operand("source2", "any")],
    SETLE: [operand("destination", "reg"), operand("source1", "any"), operand("source2", "any")],
    SETGT: [operand("destination", "reg"), operand("source1", "any"), operand("source2", "any")],
    SETGE: [operand("destination", "reg"), operand("source1", "any"), operand("source2", "any")],
    SETC: [operand("destination", "reg"), operand("source1", "any"), operand("source2", "any")],
    SETNC: [operand("destination", "reg"), operand("source1", "any"), operand("source2", "any")],
});

module.exports = grammar({
    name: "URCL",
    extras: $ => [$._whitespace, $.multiline_comment],

    rules: {
        source_file: $ => seq(
            repeat($._newline),
            repeat(seq($._line, repeat1($._newline))),
            optional($._line)
        ),
        macro: $ => seq("@", /\w+/),
        _whitespace: $ => /[\t\f\v \u00a0\u1680\u2000-\u200a\u2028\u2029\u202f\u205f\u3000\ufeff]+/, // /\s/ without \r\n
        _anything: $ => /[^\r\n]/,
        _newline: $ => seq(optional($.comment), choice("\r", "\n")),
        comment: $ => seq("//", repeat($._anything)),
        multiline_comment: $ => seq("/*", repeat(choice($._anything, $._newline)), "*/"),
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
        // prec of -1 is mostly for ensuring registers and mems are not parsed as identifiers
        _immediate_operand: $ => choice(prec(-1, alias($.unknown_operand_imm, $.unknown_operand)), $._immediate),
        _register_operand: $ => choice(prec(-1, alias($.unknown_operand_reg, $.unknown_operand)), $._register),
        _value_operand: $ => choice(prec(-1, $.unknown_operand), $._value),
        _port_operand: $ => choice(prec(-1, alias($.unknown_operand_port, $.unknown_operand)), $.port),
        _value: $ => choice($._register, $._immediate),
        unknown_operand_imm: $ => choice($._register, $.port, $._unknown_operand),
        unknown_operand_reg: $ => choice($._immediate, $.port, $._unknown_operand),
        unknown_operand_port: $ => choice($._value, $._unknown_operand),
        unknown_operand: $ => choice($.port, $._unknown_operand),
        _unknown_operand: $ => choice(
            $.placeholder,
            $.identifier,
            $.macro
        ),
        _any_operand: $ => choice(prec(-1, $._unknown_operand), $._value),
        _register: $ => choice($.zero_register, $.register, $.program_counter, $.stack_pointer),
        zero_register: $ => choice("$0", "R0"),
        register: $ => /[$Rr]\d+/,
        program_counter: $ => "PC",
        stack_pointer: $ => "SP",
        _immediate: $ => choice(
            $._immediate_literal,
            $.label,
            $.relative,
            $.memory,
            $.defined_immediate,
        ),
        placeholder: $ => seq("<", $.identifier, ">"),
        identifier: $ => /([a-z_]\d*)+/,
        _dw_literal: $ => choice($._immediate_literal, $.array, $.string),
        array: $ => seq("[", repeat($._immediate_literal), "]"),
        string: $ => seq('"', repeat($._char), '"'),
        _immediate_literal: $ => choice($.number, $.char_literal),
        number: $ => token(seq(
            /[+-]?/,
            choice(
                /0b[0-1]+/,
                /0o[0-7]+/,
                /\d+/,
                /0x[A-Fa-f\d]+/,
            ),
        )),
        char_literal: $ => seq(
            "'",
            field("value", $._char),
            "'",
        ),
        _char: $ => choice($.char, $.char_escape),
        char: $ => /[^\\'\r\n]/,
        char_escape: $ => /\\['\\bfnrtv0]/,
        relative: $ => seq(
            "~",
            field("sign", /[+-]/),
            field("value", $.number),
        ),
        memory: $ => /[#Mm][0-9]+/,
        defined_immediate: $ => seq(
            "@", choice(
                "BITS",
                "MINREG",
                "MINHEAP",
                "MINSTACK",
                "HEAP",
                "MSB",
                "SMSB",
                "MAX",
                "SMAX",
                "UHALF",
                "LHALF",
            ),
        ),
        port: $ => seq("%", field("name", /\w+/)),
        _line: $ => choice(
            $._header,
            $.define_word,
            $.unknown_instruction,
            // this took me painfully long to debug, because without the $[op] it will **literally** match "inst_XX" and give the incorrect error that **port is an invalid node** when syntax highlighting!
            ...Object.keys(instructions).map(op => $[op]),
        ),

        unknown_instruction: $ => seq(field("label", repeat($.label_def)), field("name", choice($.macro, $.identifier)), repeat($._any_operand)),

        ...instructions,
    },
});