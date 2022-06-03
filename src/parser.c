#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 70
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 64
#define ALIAS_COUNT 0
#define TOKEN_COUNT 40
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 11

enum {
  sym_macro = 1,
  sym__whitespace = 2,
  sym__newline = 3,
  anon_sym_SLASH_SLASH = 4,
  aux_sym_comment_token1 = 5,
  anon_sym_SLASH_STAR = 6,
  aux_sym_comment_token2 = 7,
  anon_sym_SLASH = 8,
  anon_sym_BITS = 9,
  anon_sym_LT_EQ = 10,
  anon_sym_EQ_EQ = 11,
  anon_sym_GT_EQ = 12,
  anon_sym_MINREG = 13,
  anon_sym_MINHEAP = 14,
  anon_sym_MINSTACK = 15,
  anon_sym_RUN = 16,
  anon_sym_RAM = 17,
  anon_sym_ROM = 18,
  anon_sym_DW = 19,
  anon_sym_DOT = 20,
  sym_register = 21,
  sym_program_counter = 22,
  sym_stack_pointer = 23,
  anon_sym_LT = 24,
  anon_sym_GT = 25,
  aux_sym_identifier_token1 = 26,
  aux_sym_identifier_token2 = 27,
  aux_sym_identifier_token3 = 28,
  aux_sym_identifier_token4 = 29,
  aux_sym_identifier_token5 = 30,
  anon_sym_LBRACK = 31,
  anon_sym_RBRACK = 32,
  sym_string = 33,
  sym_number = 34,
  sym_char = 35,
  sym_char_escape = 36,
  sym_relative = 37,
  sym_memory = 38,
  sym_port = 39,
  sym_source_file = 40,
  sym_comment = 41,
  sym__header = 42,
  sym_header_BITS = 43,
  sym_header_MINREG = 44,
  sym_header_MINHEAP = 45,
  sym_header_MINSTACK = 46,
  sym_header_RUN = 47,
  sym_define_word = 48,
  sym_label_def = 49,
  sym_label = 50,
  sym__operand = 51,
  sym_placeholder = 52,
  sym_identifier = 53,
  sym__dw_literal = 54,
  sym_array = 55,
  sym__immediate_literal = 56,
  sym__line = 57,
  sym_instruction = 58,
  aux_sym_source_file_repeat1 = 59,
  aux_sym_source_file_repeat2 = 60,
  aux_sym_array_repeat1 = 61,
  aux_sym_instruction_repeat1 = 62,
  aux_sym_instruction_repeat2 = 63,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_macro] = "macro",
  [sym__whitespace] = "_whitespace",
  [sym__newline] = "_newline",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_SLASH_STAR] = "/*",
  [aux_sym_comment_token2] = "comment_token2",
  [anon_sym_SLASH] = "/",
  [anon_sym_BITS] = "BITS",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_MINREG] = "MINREG",
  [anon_sym_MINHEAP] = "MINHEAP",
  [anon_sym_MINSTACK] = "MINSTACK",
  [anon_sym_RUN] = "RUN",
  [anon_sym_RAM] = "RAM",
  [anon_sym_ROM] = "ROM",
  [anon_sym_DW] = "DW",
  [anon_sym_DOT] = ".",
  [sym_register] = "register",
  [sym_program_counter] = "program_counter",
  [sym_stack_pointer] = "stack_pointer",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [aux_sym_identifier_token1] = "identifier_token1",
  [aux_sym_identifier_token2] = "identifier_token2",
  [aux_sym_identifier_token3] = "identifier_token3",
  [aux_sym_identifier_token4] = "identifier_token4",
  [aux_sym_identifier_token5] = "identifier_token5",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_string] = "string",
  [sym_number] = "number",
  [sym_char] = "char",
  [sym_char_escape] = "char_escape",
  [sym_relative] = "relative",
  [sym_memory] = "memory",
  [sym_port] = "port",
  [sym_source_file] = "source_file",
  [sym_comment] = "comment",
  [sym__header] = "_header",
  [sym_header_BITS] = "header_BITS",
  [sym_header_MINREG] = "header_MINREG",
  [sym_header_MINHEAP] = "header_MINHEAP",
  [sym_header_MINSTACK] = "header_MINSTACK",
  [sym_header_RUN] = "header_RUN",
  [sym_define_word] = "define_word",
  [sym_label_def] = "label_def",
  [sym_label] = "label",
  [sym__operand] = "_operand",
  [sym_placeholder] = "placeholder",
  [sym_identifier] = "identifier",
  [sym__dw_literal] = "_dw_literal",
  [sym_array] = "array",
  [sym__immediate_literal] = "_immediate_literal",
  [sym__line] = "_line",
  [sym_instruction] = "instruction",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
  [aux_sym_array_repeat1] = "array_repeat1",
  [aux_sym_instruction_repeat1] = "instruction_repeat1",
  [aux_sym_instruction_repeat2] = "instruction_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_macro] = sym_macro,
  [sym__whitespace] = sym__whitespace,
  [sym__newline] = sym__newline,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [aux_sym_comment_token2] = aux_sym_comment_token2,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_BITS] = anon_sym_BITS,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_MINREG] = anon_sym_MINREG,
  [anon_sym_MINHEAP] = anon_sym_MINHEAP,
  [anon_sym_MINSTACK] = anon_sym_MINSTACK,
  [anon_sym_RUN] = anon_sym_RUN,
  [anon_sym_RAM] = anon_sym_RAM,
  [anon_sym_ROM] = anon_sym_ROM,
  [anon_sym_DW] = anon_sym_DW,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_register] = sym_register,
  [sym_program_counter] = sym_program_counter,
  [sym_stack_pointer] = sym_stack_pointer,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [aux_sym_identifier_token1] = aux_sym_identifier_token1,
  [aux_sym_identifier_token2] = aux_sym_identifier_token2,
  [aux_sym_identifier_token3] = aux_sym_identifier_token3,
  [aux_sym_identifier_token4] = aux_sym_identifier_token4,
  [aux_sym_identifier_token5] = aux_sym_identifier_token5,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_string] = sym_string,
  [sym_number] = sym_number,
  [sym_char] = sym_char,
  [sym_char_escape] = sym_char_escape,
  [sym_relative] = sym_relative,
  [sym_memory] = sym_memory,
  [sym_port] = sym_port,
  [sym_source_file] = sym_source_file,
  [sym_comment] = sym_comment,
  [sym__header] = sym__header,
  [sym_header_BITS] = sym_header_BITS,
  [sym_header_MINREG] = sym_header_MINREG,
  [sym_header_MINHEAP] = sym_header_MINHEAP,
  [sym_header_MINSTACK] = sym_header_MINSTACK,
  [sym_header_RUN] = sym_header_RUN,
  [sym_define_word] = sym_define_word,
  [sym_label_def] = sym_label_def,
  [sym_label] = sym_label,
  [sym__operand] = sym__operand,
  [sym_placeholder] = sym_placeholder,
  [sym_identifier] = sym_identifier,
  [sym__dw_literal] = sym__dw_literal,
  [sym_array] = sym_array,
  [sym__immediate_literal] = sym__immediate_literal,
  [sym__line] = sym__line,
  [sym_instruction] = sym_instruction,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_source_file_repeat2] = aux_sym_source_file_repeat2,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
  [aux_sym_instruction_repeat1] = aux_sym_instruction_repeat1,
  [aux_sym_instruction_repeat2] = aux_sym_instruction_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_macro] = {
    .visible = true,
    .named = true,
  },
  [sym__whitespace] = {
    .visible = false,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BITS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MINREG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MINHEAP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MINSTACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RUN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RAM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ROM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DW] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_register] = {
    .visible = true,
    .named = true,
  },
  [sym_program_counter] = {
    .visible = true,
    .named = true,
  },
  [sym_stack_pointer] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_identifier_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_identifier_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_identifier_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_identifier_token5] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_char] = {
    .visible = true,
    .named = true,
  },
  [sym_char_escape] = {
    .visible = true,
    .named = true,
  },
  [sym_relative] = {
    .visible = true,
    .named = true,
  },
  [sym_memory] = {
    .visible = true,
    .named = true,
  },
  [sym_port] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__header] = {
    .visible = false,
    .named = true,
  },
  [sym_header_BITS] = {
    .visible = true,
    .named = true,
  },
  [sym_header_MINREG] = {
    .visible = true,
    .named = true,
  },
  [sym_header_MINHEAP] = {
    .visible = true,
    .named = true,
  },
  [sym_header_MINSTACK] = {
    .visible = true,
    .named = true,
  },
  [sym_header_RUN] = {
    .visible = true,
    .named = true,
  },
  [sym_define_word] = {
    .visible = true,
    .named = true,
  },
  [sym_label_def] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym__operand] = {
    .visible = false,
    .named = true,
  },
  [sym_placeholder] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__dw_literal] = {
    .visible = false,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym__immediate_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__line] = {
    .visible = false,
    .named = true,
  },
  [sym_instruction] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_file_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_instruction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_instruction_repeat2] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_comparison = 1,
  field_header_type = 2,
  field_label = 3,
  field_name = 4,
  field_operand = 5,
  field_value = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_comparison] = "comparison",
  [field_header_type] = "header_type",
  [field_label] = "label",
  [field_name] = "name",
  [field_operand] = "operand",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 1},
  [6] = {.index = 7, .length = 2},
  [7] = {.index = 9, .length = 1},
  [8] = {.index = 10, .length = 2},
  [9] = {.index = 12, .length = 2},
  [10] = {.index = 14, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_name, 0},
    {field_operand, 1, .inherited = true},
  [3] =
    {field_value, 1},
  [4] =
    {field_header_type, 0},
    {field_value, 1},
  [6] =
    {field_name, 1},
  [7] =
    {field_label, 0},
    {field_name, 1},
  [9] =
    {field_operand, 1},
  [10] =
    {field_operand, 0, .inherited = true},
    {field_operand, 1, .inherited = true},
  [12] =
    {field_comparison, 1},
    {field_value, 2},
  [14] =
    {field_label, 0},
    {field_name, 1},
    {field_operand, 2, .inherited = true},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool sym__whitespace_character_set_1(int32_t c) {
  return (c < 8232
    ? (c < 160
      ? (c < ' '
        ? (c >= '\t' && c <= '\f')
        : c <= ' ')
      : (c <= 160 || (c < 8192
        ? c == 5760
        : c <= 8202)))
    : (c <= 8233 || (c < 12288
      ? (c < 8287
        ? c == 8239
        : c <= 8287)
      : (c <= 12288 || c == 65279))));
}

static inline bool sym__whitespace_character_set_2(int32_t c) {
  return (c < 8192
    ? (c < ' '
      ? (c < 11
        ? c == '\t'
        : c <= '\f')
      : (c <= ' ' || (c < 5760
        ? c == 160
        : c <= 5760)))
    : (c <= 8202 || (c < 8287
      ? (c < 8239
        ? (c >= 8232 && c <= 8233)
        : c <= 8239)
      : (c <= 8287 || (c < 65279
        ? c == 12288
        : c <= 65279)))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(42);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(11);
      if (lookahead == '$') ADVANCE(12);
      if (lookahead == '%') ADVANCE(37);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == '/') ADVANCE(58);
      if (lookahead == '0') ADVANCE(110);
      if (lookahead == '<') ADVANCE(80);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '>') ADVANCE(82);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == 'B') ADVANCE(85);
      if (lookahead == 'D') ADVANCE(87);
      if (lookahead == 'M') ADVANCE(13);
      if (lookahead == 'P') ADVANCE(21);
      if (lookahead == 'R') ADVANCE(15);
      if (lookahead == 'S') ADVANCE(26);
      if (lookahead == '[') ADVANCE(107);
      if (lookahead == ']') ADVANCE(108);
      if (lookahead == 'm') ADVANCE(14);
      if (lookahead == 'r') ADVANCE(16);
      if (lookahead == '~') ADVANCE(30);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(10);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(113);
      if (sym__whitespace_character_set_1(lookahead)) ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\'') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(11);
      if (lookahead == '$') ADVANCE(12);
      if (lookahead == '%') ADVANCE(37);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '0') ADVANCE(110);
      if (lookahead == '<') ADVANCE(79);
      if (lookahead == '>') ADVANCE(81);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == 'P') ADVANCE(22);
      if (lookahead == 'S') ADVANCE(27);
      if (lookahead == '~') ADVANCE(30);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(10);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(14);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(16);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(113);
      if (sym__whitespace_character_set_1(lookahead)) ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(115);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(116);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(54);
      if (lookahead == '/') ADVANCE(48);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(57);
      if (lookahead == '/') ADVANCE(8);
      if (sym__whitespace_character_set_2(lookahead)) ADVANCE(45);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(57);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(55);
      if (lookahead == '/') ADVANCE(49);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == 'R') ADVANCE(20);
      if (sym__whitespace_character_set_2(lookahead)) ADVANCE(44);
      END_STATE();
    case 10:
      if (lookahead == '0') ADVANCE(110);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(113);
      END_STATE();
    case 11:
      if (lookahead == '0') ADVANCE(118);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 12:
      if (lookahead == '0') ADVANCE(73);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 13:
      if (lookahead == '0') ADVANCE(121);
      if (lookahead == 'I') ADVANCE(100);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 14:
      if (lookahead == '0') ADVANCE(121);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 15:
      if (lookahead == '0') ADVANCE(76);
      if (lookahead == 'A') ADVANCE(98);
      if (lookahead == 'O') ADVANCE(99);
      if (lookahead == 'U') ADVANCE(101);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(75);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 16:
      if (lookahead == '0') ADVANCE(76);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 17:
      if (lookahead == '=') ADVANCE(60);
      END_STATE();
    case 18:
      if (lookahead == '=') ADVANCE(61);
      END_STATE();
    case 19:
      if (lookahead == '=') ADVANCE(62);
      END_STATE();
    case 20:
      if (lookahead == 'A') ADVANCE(24);
      if (lookahead == 'O') ADVANCE(25);
      END_STATE();
    case 21:
      if (lookahead == 'C') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 22:
      if (lookahead == 'C') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 23:
      if (lookahead == 'I') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 24:
      if (lookahead == 'M') ADVANCE(67);
      END_STATE();
    case 25:
      if (lookahead == 'M') ADVANCE(69);
      END_STATE();
    case 26:
      if (lookahead == 'P') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 27:
      if (lookahead == 'P') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 28:
      if (lookahead == 'U') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 29:
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\'') ADVANCE(3);
      END_STATE();
    case 30:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(34);
      END_STATE();
    case 31:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(111);
      END_STATE();
    case 32:
      if (lookahead == '\'' ||
          lookahead == '0' ||
          lookahead == '\\' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(4);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(112);
      END_STATE();
    case 34:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(117);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(114);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 40:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1);
      END_STATE();
    case 41:
      if (eof) ADVANCE(42);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '0') ADVANCE(110);
      if (lookahead == '<') ADVANCE(17);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '>') ADVANCE(19);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == 'B') ADVANCE(85);
      if (lookahead == 'D') ADVANCE(87);
      if (lookahead == 'M') ADVANCE(23);
      if (lookahead == 'P') ADVANCE(22);
      if (lookahead == 'R') ADVANCE(28);
      if (lookahead == 'S') ADVANCE(27);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(10);
      if (lookahead == 'm' ||
          lookahead == 'r') ADVANCE(35);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(113);
      if (sym__whitespace_character_set_1(lookahead)) ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_macro);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym__whitespace);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '*') ADVANCE(57);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(53);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '*') ADVANCE(57);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(53);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '*') ADVANCE(56);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(53);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '/') ADVANCE(51);
      if (sym__whitespace_character_set_2(lookahead)) ADVANCE(46);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '*') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(7);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(53);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '*') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(7);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(54);
      if (lookahead == '/') ADVANCE(48);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_BITS);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_MINREG);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_MINHEAP);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_MINSTACK);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_RUN);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_RAM);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_RAM);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_ROM);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_ROM);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_DW);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_register);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '0') ADVANCE(74);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '0') ADVANCE(75);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_register);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_program_counter);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_stack_pointer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(60);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(62);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'S') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'I') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'T') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'W') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_identifier_token3);
      if (lookahead == 'A') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_identifier_token3);
      if (lookahead == 'A') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_identifier_token3);
      if (lookahead == 'C') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_identifier_token3);
      if (lookahead == 'E') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_identifier_token3);
      if (lookahead == 'E') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_identifier_token3);
      if (lookahead == 'G') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_identifier_token3);
      if (lookahead == 'H') ADVANCE(93);
      if (lookahead == 'R') ADVANCE(94);
      if (lookahead == 'S') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_identifier_token3);
      if (lookahead == 'K') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_identifier_token3);
      if (lookahead == 'M') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_identifier_token3);
      if (lookahead == 'M') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_identifier_token3);
      if (lookahead == 'N') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_identifier_token3);
      if (lookahead == 'N') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_identifier_token3);
      if (lookahead == 'P') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_identifier_token3);
      if (lookahead == 'T') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_identifier_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_identifier_token4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_identifier_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'b') ADVANCE(31);
      if (lookahead == 'o') ADVANCE(33);
      if (lookahead == 'x') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_char);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_char_escape);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_relative);
      if (lookahead == '0') ADVANCE(117);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_memory);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_memory);
      if (lookahead == '0') ADVANCE(119);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_memory);
      if (lookahead == '0') ADVANCE(120);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_memory);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_port);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 41},
  [2] = {.lex_state = 41},
  [3] = {.lex_state = 41},
  [4] = {.lex_state = 41},
  [5] = {.lex_state = 41},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 41},
  [8] = {.lex_state = 41},
  [9] = {.lex_state = 41},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 41},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 9},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 52},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 6},
  [68] = {(TSStateId)(-1)},
  [69] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_macro] = ACTIONS(1),
    [sym__whitespace] = ACTIONS(3),
    [sym__newline] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(5),
    [anon_sym_SLASH_STAR] = ACTIONS(7),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_BITS] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_MINREG] = ACTIONS(1),
    [anon_sym_MINHEAP] = ACTIONS(1),
    [anon_sym_MINSTACK] = ACTIONS(1),
    [anon_sym_RUN] = ACTIONS(1),
    [anon_sym_RAM] = ACTIONS(1),
    [anon_sym_ROM] = ACTIONS(1),
    [anon_sym_DW] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_register] = ACTIONS(1),
    [sym_program_counter] = ACTIONS(1),
    [sym_stack_pointer] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [aux_sym_identifier_token1] = ACTIONS(1),
    [aux_sym_identifier_token2] = ACTIONS(1),
    [aux_sym_identifier_token3] = ACTIONS(1),
    [aux_sym_identifier_token4] = ACTIONS(1),
    [aux_sym_identifier_token5] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_char] = ACTIONS(1),
    [sym_char_escape] = ACTIONS(1),
    [sym_relative] = ACTIONS(1),
    [sym_memory] = ACTIONS(1),
    [sym_port] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(64),
    [sym_comment] = STATE(1),
    [sym__header] = STATE(58),
    [sym_header_BITS] = STATE(56),
    [sym_header_MINREG] = STATE(56),
    [sym_header_MINHEAP] = STATE(56),
    [sym_header_MINSTACK] = STATE(56),
    [sym_header_RUN] = STATE(56),
    [sym_define_word] = STATE(58),
    [sym_label_def] = STATE(17),
    [sym_label] = STATE(55),
    [sym_identifier] = STATE(32),
    [sym__line] = STATE(34),
    [sym_instruction] = STATE(58),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_source_file_repeat2] = STATE(3),
    [aux_sym_instruction_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(9),
    [sym_macro] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(3),
    [sym__newline] = ACTIONS(13),
    [anon_sym_SLASH_SLASH] = ACTIONS(5),
    [anon_sym_SLASH_STAR] = ACTIONS(7),
    [anon_sym_BITS] = ACTIONS(15),
    [anon_sym_MINREG] = ACTIONS(17),
    [anon_sym_MINHEAP] = ACTIONS(19),
    [anon_sym_MINSTACK] = ACTIONS(21),
    [anon_sym_RUN] = ACTIONS(23),
    [anon_sym_DW] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(27),
    [aux_sym_identifier_token1] = ACTIONS(29),
    [aux_sym_identifier_token2] = ACTIONS(29),
    [aux_sym_identifier_token3] = ACTIONS(29),
    [aux_sym_identifier_token4] = ACTIONS(29),
    [aux_sym_identifier_token5] = ACTIONS(29),
  },
  [2] = {
    [sym_comment] = STATE(2),
    [sym__header] = STATE(58),
    [sym_header_BITS] = STATE(56),
    [sym_header_MINREG] = STATE(56),
    [sym_header_MINHEAP] = STATE(56),
    [sym_header_MINSTACK] = STATE(56),
    [sym_header_RUN] = STATE(56),
    [sym_define_word] = STATE(58),
    [sym_label_def] = STATE(17),
    [sym_label] = STATE(55),
    [sym_identifier] = STATE(32),
    [sym__line] = STATE(35),
    [sym_instruction] = STATE(58),
    [aux_sym_source_file_repeat1] = STATE(8),
    [aux_sym_source_file_repeat2] = STATE(4),
    [aux_sym_instruction_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(31),
    [sym_macro] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(3),
    [sym__newline] = ACTIONS(13),
    [anon_sym_SLASH_SLASH] = ACTIONS(5),
    [anon_sym_SLASH_STAR] = ACTIONS(7),
    [anon_sym_BITS] = ACTIONS(15),
    [anon_sym_MINREG] = ACTIONS(17),
    [anon_sym_MINHEAP] = ACTIONS(19),
    [anon_sym_MINSTACK] = ACTIONS(21),
    [anon_sym_RUN] = ACTIONS(23),
    [anon_sym_DW] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(27),
    [aux_sym_identifier_token1] = ACTIONS(29),
    [aux_sym_identifier_token2] = ACTIONS(29),
    [aux_sym_identifier_token3] = ACTIONS(29),
    [aux_sym_identifier_token4] = ACTIONS(29),
    [aux_sym_identifier_token5] = ACTIONS(29),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 22,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(11), 1,
      sym_macro,
    ACTIONS(15), 1,
      anon_sym_BITS,
    ACTIONS(17), 1,
      anon_sym_MINREG,
    ACTIONS(19), 1,
      anon_sym_MINHEAP,
    ACTIONS(21), 1,
      anon_sym_MINSTACK,
    ACTIONS(23), 1,
      anon_sym_RUN,
    ACTIONS(25), 1,
      anon_sym_DW,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_comment,
    STATE(5), 1,
      aux_sym_source_file_repeat2,
    STATE(10), 1,
      aux_sym_instruction_repeat1,
    STATE(17), 1,
      sym_label_def,
    STATE(32), 1,
      sym_identifier,
    STATE(35), 1,
      sym__line,
    STATE(55), 1,
      sym_label,
    STATE(58), 3,
      sym__header,
      sym_define_word,
      sym_instruction,
    ACTIONS(29), 5,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
      aux_sym_identifier_token3,
      aux_sym_identifier_token4,
      aux_sym_identifier_token5,
    STATE(56), 5,
      sym_header_BITS,
      sym_header_MINREG,
      sym_header_MINHEAP,
      sym_header_MINSTACK,
      sym_header_RUN,
  [77] = 22,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(11), 1,
      sym_macro,
    ACTIONS(15), 1,
      anon_sym_BITS,
    ACTIONS(17), 1,
      anon_sym_MINREG,
    ACTIONS(19), 1,
      anon_sym_MINHEAP,
    ACTIONS(21), 1,
      anon_sym_MINSTACK,
    ACTIONS(23), 1,
      anon_sym_RUN,
    ACTIONS(25), 1,
      anon_sym_DW,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_comment,
    STATE(5), 1,
      aux_sym_source_file_repeat2,
    STATE(10), 1,
      aux_sym_instruction_repeat1,
    STATE(17), 1,
      sym_label_def,
    STATE(32), 1,
      sym_identifier,
    STATE(36), 1,
      sym__line,
    STATE(55), 1,
      sym_label,
    STATE(58), 3,
      sym__header,
      sym_define_word,
      sym_instruction,
    ACTIONS(29), 5,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
      aux_sym_identifier_token3,
      aux_sym_identifier_token4,
      aux_sym_identifier_token5,
    STATE(56), 5,
      sym_header_BITS,
      sym_header_MINREG,
      sym_header_MINHEAP,
      sym_header_MINSTACK,
      sym_header_RUN,
  [154] = 21,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 1,
      sym_macro,
    ACTIONS(40), 1,
      anon_sym_BITS,
    ACTIONS(43), 1,
      anon_sym_MINREG,
    ACTIONS(46), 1,
      anon_sym_MINHEAP,
    ACTIONS(49), 1,
      anon_sym_MINSTACK,
    ACTIONS(52), 1,
      anon_sym_RUN,
    ACTIONS(55), 1,
      anon_sym_DW,
    ACTIONS(58), 1,
      anon_sym_DOT,
    STATE(10), 1,
      aux_sym_instruction_repeat1,
    STATE(17), 1,
      sym_label_def,
    STATE(32), 1,
      sym_identifier,
    STATE(55), 1,
      sym_label,
    STATE(57), 1,
      sym__line,
    STATE(5), 2,
      sym_comment,
      aux_sym_source_file_repeat2,
    STATE(58), 3,
      sym__header,
      sym_define_word,
      sym_instruction,
    ACTIONS(61), 5,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
      aux_sym_identifier_token3,
      aux_sym_identifier_token4,
      aux_sym_identifier_token5,
    STATE(56), 5,
      sym_header_BITS,
      sym_header_MINREG,
      sym_header_MINHEAP,
      sym_header_MINSTACK,
      sym_header_RUN,
  [229] = 14,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(66), 1,
      anon_sym_DOT,
    ACTIONS(70), 1,
      anon_sym_LT,
    STATE(6), 1,
      sym_comment,
    STATE(50), 1,
      sym__operand,
    STATE(51), 1,
      sym_identifier,
    ACTIONS(68), 2,
      sym_register,
      sym_memory,
    ACTIONS(72), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token3,
    ACTIONS(29), 3,
      aux_sym_identifier_token2,
      aux_sym_identifier_token4,
      aux_sym_identifier_token5,
    ACTIONS(64), 3,
      sym_macro,
      sym_relative,
      sym_port,
    ACTIONS(74), 3,
      sym_number,
      sym_char,
      sym_char_escape,
    STATE(47), 3,
      sym_label,
      sym_placeholder,
      sym__immediate_literal,
  [282] = 8,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(13), 1,
      sym__newline,
    STATE(7), 1,
      sym_comment,
    STATE(8), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(35), 3,
      ts_builtin_sym_end,
      sym_macro,
      anon_sym_DOT,
    ACTIONS(76), 11,
      anon_sym_BITS,
      anon_sym_MINREG,
      anon_sym_MINHEAP,
      anon_sym_MINSTACK,
      anon_sym_RUN,
      anon_sym_DW,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
      aux_sym_identifier_token3,
      aux_sym_identifier_token4,
      aux_sym_identifier_token5,
  [319] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(80), 1,
      sym__newline,
    STATE(8), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    ACTIONS(78), 3,
      ts_builtin_sym_end,
      sym_macro,
      anon_sym_DOT,
    ACTIONS(83), 11,
      anon_sym_BITS,
      anon_sym_MINREG,
      anon_sym_MINHEAP,
      anon_sym_MINSTACK,
      anon_sym_RUN,
      anon_sym_DW,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
      aux_sym_identifier_token3,
      aux_sym_identifier_token4,
      aux_sym_identifier_token5,
  [354] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(9), 1,
      sym_comment,
    ACTIONS(85), 4,
      ts_builtin_sym_end,
      sym_macro,
      sym__newline,
      anon_sym_DOT,
    ACTIONS(87), 11,
      anon_sym_BITS,
      anon_sym_MINREG,
      anon_sym_MINHEAP,
      anon_sym_MINSTACK,
      anon_sym_RUN,
      anon_sym_DW,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
      aux_sym_identifier_token3,
      aux_sym_identifier_token4,
      aux_sym_identifier_token5,
  [386] = 12,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(89), 1,
      sym_macro,
    STATE(10), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym_instruction_repeat1,
    STATE(17), 1,
      sym_label_def,
    STATE(33), 1,
      sym_identifier,
    STATE(55), 1,
      sym_label,
    ACTIONS(72), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token3,
    ACTIONS(29), 3,
      aux_sym_identifier_token2,
      aux_sym_identifier_token4,
      aux_sym_identifier_token5,
  [426] = 9,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(93), 1,
      anon_sym_DOT,
    STATE(17), 1,
      sym_label_def,
    STATE(55), 1,
      sym_label,
    STATE(11), 2,
      sym_comment,
      aux_sym_instruction_repeat1,
    ACTIONS(91), 3,
      sym_macro,
      aux_sym_identifier_token1,
      aux_sym_identifier_token3,
    ACTIONS(96), 3,
      aux_sym_identifier_token2,
      aux_sym_identifier_token4,
      aux_sym_identifier_token5,
  [459] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(98), 1,
      sym__newline,
    STATE(12), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    ACTIONS(83), 3,
      aux_sym_identifier_token2,
      aux_sym_identifier_token4,
      aux_sym_identifier_token5,
    ACTIONS(78), 4,
      sym_macro,
      anon_sym_DOT,
      aux_sym_identifier_token1,
      aux_sym_identifier_token3,
  [487] = 8,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(103), 1,
      sym__newline,
    STATE(12), 1,
      aux_sym_source_file_repeat1,
    STATE(13), 1,
      sym_comment,
    ACTIONS(105), 3,
      aux_sym_identifier_token2,
      aux_sym_identifier_token4,
      aux_sym_identifier_token5,
    ACTIONS(101), 4,
      sym_macro,
      anon_sym_DOT,
      aux_sym_identifier_token1,
      aux_sym_identifier_token3,
  [517] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(14), 1,
      sym_comment,
    ACTIONS(87), 3,
      aux_sym_identifier_token2,
      aux_sym_identifier_token4,
      aux_sym_identifier_token5,
    ACTIONS(85), 5,
      sym_macro,
      sym__newline,
      anon_sym_DOT,
      aux_sym_identifier_token1,
      aux_sym_identifier_token3,
  [542] = 9,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(107), 1,
      anon_sym_LBRACK,
    ACTIONS(109), 1,
      sym_string,
    STATE(15), 1,
      sym_comment,
    STATE(40), 1,
      sym__dw_literal,
    STATE(42), 2,
      sym_array,
      sym__immediate_literal,
    ACTIONS(111), 3,
      sym_number,
      sym_char,
      sym_char_escape,
  [573] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(16), 1,
      sym_comment,
    STATE(39), 1,
      sym__immediate_literal,
    ACTIONS(111), 3,
      sym_number,
      sym_char,
      sym_char_escape,
    ACTIONS(113), 3,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
  [599] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(17), 1,
      sym_comment,
    ACTIONS(117), 3,
      aux_sym_identifier_token2,
      aux_sym_identifier_token4,
      aux_sym_identifier_token5,
    ACTIONS(115), 4,
      sym_macro,
      anon_sym_DOT,
      aux_sym_identifier_token1,
      aux_sym_identifier_token3,
  [623] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(119), 1,
      anon_sym_RBRACK,
    STATE(25), 1,
      sym__immediate_literal,
    STATE(18), 2,
      sym_comment,
      aux_sym_array_repeat1,
    ACTIONS(121), 3,
      sym_number,
      sym_char,
      sym_char_escape,
  [648] = 8,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(124), 1,
      anon_sym_RBRACK,
    STATE(18), 1,
      aux_sym_array_repeat1,
    STATE(19), 1,
      sym_comment,
    STATE(25), 1,
      sym__immediate_literal,
    ACTIONS(111), 3,
      sym_number,
      sym_char,
      sym_char_escape,
  [675] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(20), 1,
      sym_comment,
    STATE(46), 1,
      sym_identifier,
    ACTIONS(72), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token3,
    ACTIONS(29), 3,
      aux_sym_identifier_token2,
      aux_sym_identifier_token4,
      aux_sym_identifier_token5,
  [700] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(21), 1,
      sym_comment,
    STATE(63), 1,
      sym_identifier,
    ACTIONS(126), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token3,
    ACTIONS(128), 3,
      aux_sym_identifier_token2,
      aux_sym_identifier_token4,
      aux_sym_identifier_token5,
  [725] = 8,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(130), 1,
      anon_sym_RBRACK,
    STATE(19), 1,
      aux_sym_array_repeat1,
    STATE(22), 1,
      sym_comment,
    STATE(25), 1,
      sym__immediate_literal,
    ACTIONS(111), 3,
      sym_number,
      sym_char,
      sym_char_escape,
  [752] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(23), 1,
      sym_comment,
    STATE(62), 1,
      sym_identifier,
    ACTIONS(126), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token3,
    ACTIONS(128), 3,
      aux_sym_identifier_token2,
      aux_sym_identifier_token4,
      aux_sym_identifier_token5,
  [777] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(24), 1,
      sym_comment,
    ACTIONS(132), 6,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_RBRACK,
      sym_number,
      sym_char,
      sym_char_escape,
  [798] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(25), 1,
      sym_comment,
    ACTIONS(134), 4,
      anon_sym_RBRACK,
      sym_number,
      sym_char,
      sym_char_escape,
  [817] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(26), 1,
      sym_comment,
    STATE(53), 1,
      sym__immediate_literal,
    ACTIONS(111), 3,
      sym_number,
      sym_char,
      sym_char_escape,
  [838] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(27), 1,
      sym_comment,
    STATE(43), 1,
      sym__immediate_literal,
    ACTIONS(111), 3,
      sym_number,
      sym_char,
      sym_char_escape,
  [859] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(28), 1,
      sym_comment,
    STATE(44), 1,
      sym__immediate_literal,
    ACTIONS(111), 3,
      sym_number,
      sym_char,
      sym_char_escape,
  [880] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(29), 1,
      sym_comment,
    STATE(45), 1,
      sym__immediate_literal,
    ACTIONS(111), 3,
      sym_number,
      sym_char,
      sym_char_escape,
  [901] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(138), 1,
      sym__whitespace,
    STATE(30), 1,
      sym_comment,
    STATE(31), 1,
      aux_sym_instruction_repeat2,
    ACTIONS(136), 2,
      ts_builtin_sym_end,
      sym__newline,
  [921] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(142), 1,
      sym__whitespace,
    ACTIONS(140), 2,
      ts_builtin_sym_end,
      sym__newline,
    STATE(31), 2,
      sym_comment,
      aux_sym_instruction_repeat2,
  [939] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(138), 1,
      sym__whitespace,
    STATE(30), 1,
      aux_sym_instruction_repeat2,
    STATE(32), 1,
      sym_comment,
    ACTIONS(145), 2,
      ts_builtin_sym_end,
      sym__newline,
  [959] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(138), 1,
      sym__whitespace,
    STATE(33), 1,
      sym_comment,
    STATE(37), 1,
      aux_sym_instruction_repeat2,
    ACTIONS(147), 2,
      ts_builtin_sym_end,
      sym__newline,
  [979] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(13), 1,
      sym__newline,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      aux_sym_source_file_repeat1,
    STATE(34), 1,
      sym_comment,
  [1001] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(13), 1,
      sym__newline,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      aux_sym_source_file_repeat1,
    STATE(35), 1,
      sym_comment,
  [1023] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(13), 1,
      sym__newline,
    ACTIONS(149), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      aux_sym_source_file_repeat1,
    STATE(36), 1,
      sym_comment,
  [1045] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(138), 1,
      sym__whitespace,
    STATE(31), 1,
      aux_sym_instruction_repeat2,
    STATE(37), 1,
      sym_comment,
    ACTIONS(151), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1065] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(38), 1,
      sym_comment,
    ACTIONS(153), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1082] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(39), 1,
      sym_comment,
    ACTIONS(155), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1099] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(40), 1,
      sym_comment,
    ACTIONS(157), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1116] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(41), 1,
      sym_comment,
    ACTIONS(159), 2,
      anon_sym_RAM,
      anon_sym_ROM,
  [1133] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(42), 1,
      sym_comment,
    ACTIONS(161), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1150] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(43), 1,
      sym_comment,
    ACTIONS(163), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1167] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(44), 1,
      sym_comment,
    ACTIONS(165), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1184] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(45), 1,
      sym_comment,
    ACTIONS(167), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1201] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(46), 1,
      sym_comment,
    ACTIONS(169), 3,
      ts_builtin_sym_end,
      sym__whitespace,
      sym__newline,
  [1216] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(47), 1,
      sym_comment,
    ACTIONS(171), 3,
      ts_builtin_sym_end,
      sym__whitespace,
      sym__newline,
  [1231] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(48), 1,
      sym_comment,
    ACTIONS(171), 3,
      ts_builtin_sym_end,
      sym__whitespace,
      sym__newline,
  [1246] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(49), 1,
      sym_comment,
    ACTIONS(173), 2,
      sym__newline,
      anon_sym_GT,
  [1263] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(50), 1,
      sym_comment,
    ACTIONS(175), 3,
      ts_builtin_sym_end,
      sym__whitespace,
      sym__newline,
  [1278] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(51), 1,
      sym_comment,
    ACTIONS(171), 3,
      ts_builtin_sym_end,
      sym__whitespace,
      sym__newline,
  [1293] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(52), 1,
      sym_comment,
    ACTIONS(132), 3,
      ts_builtin_sym_end,
      sym__whitespace,
      sym__newline,
  [1308] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(53), 1,
      sym_comment,
    ACTIONS(177), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1325] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(54), 1,
      sym_comment,
    ACTIONS(179), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1342] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(103), 1,
      sym__newline,
    STATE(13), 1,
      aux_sym_source_file_repeat1,
    STATE(55), 1,
      sym_comment,
  [1361] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(56), 1,
      sym_comment,
    ACTIONS(181), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1378] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(13), 1,
      sym__newline,
    STATE(7), 1,
      aux_sym_source_file_repeat1,
    STATE(57), 1,
      sym_comment,
  [1397] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(58), 1,
      sym_comment,
    ACTIONS(183), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1414] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(59), 1,
      sym_comment,
    ACTIONS(185), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1431] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(60), 1,
      sym_comment,
    ACTIONS(187), 3,
      ts_builtin_sym_end,
      sym__whitespace,
      sym__newline,
  [1446] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(61), 1,
      sym_comment,
    ACTIONS(173), 3,
      ts_builtin_sym_end,
      sym__whitespace,
      sym__newline,
  [1461] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(189), 1,
      anon_sym_GT,
    STATE(62), 1,
      sym_comment,
  [1477] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(169), 1,
      sym__newline,
    STATE(63), 1,
      sym_comment,
  [1493] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(191), 1,
      ts_builtin_sym_end,
    STATE(64), 1,
      sym_comment,
  [1509] = 5,
    ACTIONS(193), 1,
      sym__whitespace,
    ACTIONS(195), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(197), 1,
      aux_sym_comment_token1,
    ACTIONS(199), 1,
      anon_sym_SLASH_STAR,
    STATE(65), 1,
      sym_comment,
  [1525] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(201), 1,
      anon_sym_SLASH,
    STATE(66), 1,
      sym_comment,
  [1541] = 5,
    ACTIONS(193), 1,
      sym__whitespace,
    ACTIONS(195), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(199), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(203), 1,
      aux_sym_comment_token2,
    STATE(67), 1,
      sym_comment,
  [1557] = 1,
    ACTIONS(205), 1,
      ts_builtin_sym_end,
  [1561] = 1,
    ACTIONS(207), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 77,
  [SMALL_STATE(5)] = 154,
  [SMALL_STATE(6)] = 229,
  [SMALL_STATE(7)] = 282,
  [SMALL_STATE(8)] = 319,
  [SMALL_STATE(9)] = 354,
  [SMALL_STATE(10)] = 386,
  [SMALL_STATE(11)] = 426,
  [SMALL_STATE(12)] = 459,
  [SMALL_STATE(13)] = 487,
  [SMALL_STATE(14)] = 517,
  [SMALL_STATE(15)] = 542,
  [SMALL_STATE(16)] = 573,
  [SMALL_STATE(17)] = 599,
  [SMALL_STATE(18)] = 623,
  [SMALL_STATE(19)] = 648,
  [SMALL_STATE(20)] = 675,
  [SMALL_STATE(21)] = 700,
  [SMALL_STATE(22)] = 725,
  [SMALL_STATE(23)] = 752,
  [SMALL_STATE(24)] = 777,
  [SMALL_STATE(25)] = 798,
  [SMALL_STATE(26)] = 817,
  [SMALL_STATE(27)] = 838,
  [SMALL_STATE(28)] = 859,
  [SMALL_STATE(29)] = 880,
  [SMALL_STATE(30)] = 901,
  [SMALL_STATE(31)] = 921,
  [SMALL_STATE(32)] = 939,
  [SMALL_STATE(33)] = 959,
  [SMALL_STATE(34)] = 979,
  [SMALL_STATE(35)] = 1001,
  [SMALL_STATE(36)] = 1023,
  [SMALL_STATE(37)] = 1045,
  [SMALL_STATE(38)] = 1065,
  [SMALL_STATE(39)] = 1082,
  [SMALL_STATE(40)] = 1099,
  [SMALL_STATE(41)] = 1116,
  [SMALL_STATE(42)] = 1133,
  [SMALL_STATE(43)] = 1150,
  [SMALL_STATE(44)] = 1167,
  [SMALL_STATE(45)] = 1184,
  [SMALL_STATE(46)] = 1201,
  [SMALL_STATE(47)] = 1216,
  [SMALL_STATE(48)] = 1231,
  [SMALL_STATE(49)] = 1246,
  [SMALL_STATE(50)] = 1263,
  [SMALL_STATE(51)] = 1278,
  [SMALL_STATE(52)] = 1293,
  [SMALL_STATE(53)] = 1308,
  [SMALL_STATE(54)] = 1325,
  [SMALL_STATE(55)] = 1342,
  [SMALL_STATE(56)] = 1361,
  [SMALL_STATE(57)] = 1378,
  [SMALL_STATE(58)] = 1397,
  [SMALL_STATE(59)] = 1414,
  [SMALL_STATE(60)] = 1431,
  [SMALL_STATE(61)] = 1446,
  [SMALL_STATE(62)] = 1461,
  [SMALL_STATE(63)] = 1477,
  [SMALL_STATE(64)] = 1493,
  [SMALL_STATE(65)] = 1509,
  [SMALL_STATE(66)] = 1525,
  [SMALL_STATE(67)] = 1541,
  [SMALL_STATE(68)] = 1557,
  [SMALL_STATE(69)] = 1561,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(32),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(16),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(29),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(28),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(27),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(41),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(15),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(21),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(61),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(21),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(14),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_def, 2),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_def, 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 1),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(24),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__immediate_literal, 1),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 1),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, .production_id = 2),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat2, 2, .production_id = 8),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat2, 2, .production_id = 8), SHIFT_REPEAT(6),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, .production_id = 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, .production_id = 6),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, .production_id = 10),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_RUN, 2, .production_id = 4),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_BITS, 2, .production_id = 3),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_word, 2),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dw_literal, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_MINSTACK, 2, .production_id = 3),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_MINHEAP, 2, .production_id = 3),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_MINREG, 2, .production_id = 3),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2, .production_id = 5),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__operand, 1),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat2, 2, .production_id = 7),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_BITS, 3, .production_id = 9),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__header, 1),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_placeholder, 3),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [191] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_URCL(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
