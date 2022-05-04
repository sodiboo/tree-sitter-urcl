(label) @label
(register) @register
(port) @port
(comment) @comment
(multiline_comment) @comment
(char) @string
(char_escape) @string.special
(number) @number
(memory) @address
(macro) @macro
(defined_immediate) @attribute
(unknown_instruction
    name: (identifier) @instruction.unknown
)
(unknown_operand ; do not use @identifier when identifier is not used as an operand.
    (identifier) @identifier ; it will always be a child of unknown_operand, because it is not a thing in plain standard URCL, only some dialects
)
(placeholder
    (identifier) @identifier.placeholder
)

[
    "'"
    "\""
] @string
[
    "[" "]" ; array literal
    "<" ">" ; 
] @punctuation.bracket
[
    ">="
    "=="
    "<="
] @operator
[
    "BITS"
    "MINREG"
    "MINHEAP"
    "MINSTACK"
    "RUN"
] @header
[
    "RAM"
    "ROM"
] @constant
[
    "NOP"
    "HLT"
    "IN"
    "OUT"
    "MOV"
    "IMM"
    "PSH"
    "POP"
    "RET"
    "LOD"
    "LLOD"
    "STR"
    "LSTR"
    "CPY"
    "ADD"
    "SUB"
    "INC"
    "DEC"
    "NEG"
    "MLT"
    "DIV"
    "MOD"
    "NOT"
    "OR"
    "NOR"
    "AND"
    "NAND"
    "XOR"
    "XNOR"
    "RSH"
    "SRS"
    "LSH"
    "BSR"
    "BSS"
    "BSL"
    "JMP"
    "CAL"
    "BRE"
    "BNE"
    "BRG"
    "BGE"
    "BRL"
    "BLE"
    "BRC"
    "BNC"
    "BEV"
    "BOD"
    "BRZ"
    "BNZ"
    "BRP"
    "BRN"
    "SETE"
    "SETNE"
    "SETLT"
    "SETLE"
    "SETGT"
    "SETGE"
    "SETC"
    "SETNC"
] @instruction