(label) @label
(relative) @relative
(register) @register
(stack_pointer) @register.special
(program_counter) @register.special
(port) @port
(comment) @comment
(char) @string
(char_escape) @string.special
(string) @string
(number) @number
(memory) @address
(macro) @macro
(instruction
    name: (identifier) @instruction
)
(placeholder
    (identifier) @identifier.placeholder
)

[
    "[" "]" ; array literal
    "<" ">" ; placeholders from documentation, actually invalid syntax
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