#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 62
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 60
#define ALIAS_COUNT 0
#define TOKEN_COUNT 37
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 7

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
  sym_zero_register = 21,
  sym_register = 22,
  sym_program_counter = 23,
  sym_stack_pointer = 24,
  anon_sym_LT = 25,
  anon_sym_GT = 26,
  sym_identifier = 27,
  anon_sym_LBRACK = 28,
  anon_sym_RBRACK = 29,
  sym_string = 30,
  sym_number = 31,
  sym_char = 32,
  sym_char_escape = 33,
  sym_relative = 34,
  sym_memory = 35,
  sym_port = 36,
  sym_source_file = 37,
  sym_comment = 38,
  sym__header = 39,
  sym_header_BITS = 40,
  sym_header_MINREG = 41,
  sym_header_MINHEAP = 42,
  sym_header_MINSTACK = 43,
  sym_header_RUN = 44,
  sym_define_word = 45,
  sym_label_def = 46,
  sym_label = 47,
  sym__operand = 48,
  sym_placeholder = 49,
  sym__dw_literal = 50,
  sym_array = 51,
  sym__immediate_literal = 52,
  sym__line = 53,
  sym_instruction = 54,
  aux_sym_source_file_repeat1 = 55,
  aux_sym_source_file_repeat2 = 56,
  aux_sym_array_repeat1 = 57,
  aux_sym_instruction_repeat1 = 58,
  aux_sym_instruction_repeat2 = 59,
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
  [sym_zero_register] = "zero_register",
  [sym_register] = "register",
  [sym_program_counter] = "program_counter",
  [sym_stack_pointer] = "stack_pointer",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [sym_identifier] = "identifier",
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
  [sym_zero_register] = sym_zero_register,
  [sym_register] = sym_register,
  [sym_program_counter] = sym_program_counter,
  [sym_stack_pointer] = sym_stack_pointer,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [sym_identifier] = sym_identifier,
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
  [sym_zero_register] = {
    .visible = true,
    .named = true,
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
  [sym_identifier] = {
    .visible = true,
    .named = true,
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
  field_value = 5,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_comparison] = "comparison",
  [field_header_type] = "header_type",
  [field_label] = "label",
  [field_name] = "name",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_value, 1},
  [2] =
    {field_header_type, 0},
    {field_value, 1},
  [4] =
    {field_name, 1},
  [5] =
    {field_label, 0},
    {field_name, 1},
  [7] =
    {field_comparison, 1},
    {field_value, 2},
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
      if (eof) ADVANCE(32);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == '$') ADVANCE(11);
      if (lookahead == '%') ADVANCE(27);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == '/') ADVANCE(48);
      if (lookahead == '0') ADVANCE(105);
      if (lookahead == '<') ADVANCE(70);
      if (lookahead == '=') ADVANCE(13);
      if (lookahead == '>') ADVANCE(72);
      if (lookahead == '@') ADVANCE(28);
      if (lookahead == 'B') ADVANCE(87);
      if (lookahead == 'D') ADVANCE(100);
      if (lookahead == 'M') ADVANCE(73);
      if (lookahead == 'P') ADVANCE(81);
      if (lookahead == 'R') ADVANCE(76);
      if (lookahead == 'S') ADVANCE(94);
      if (lookahead == '[') ADVANCE(102);
      if (lookahead == ']') ADVANCE(103);
      if (lookahead == 'm') ADVANCE(75);
      if (lookahead == 'r') ADVANCE(77);
      if (lookahead == '~') ADVANCE(19);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(37);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(10);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(108);
      if (sym__whitespace_character_set_1(lookahead)) ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(104);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\'') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(110);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(111);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(44);
      if (lookahead == '/') ADVANCE(38);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(47);
      if (lookahead == '/') ADVANCE(7);
      if (sym__whitespace_character_set_2(lookahead)) ADVANCE(35);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(47);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(45);
      if (lookahead == '/') ADVANCE(39);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '@') ADVANCE(28);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(37);
      if (sym__whitespace_character_set_1(lookahead)) ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == 'R') ADVANCE(15);
      if (sym__whitespace_character_set_2(lookahead)) ADVANCE(34);
      END_STATE();
    case 10:
      if (lookahead == '0') ADVANCE(105);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 11:
      if (lookahead == '0') ADVANCE(63);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(50);
      END_STATE();
    case 13:
      if (lookahead == '=') ADVANCE(51);
      END_STATE();
    case 14:
      if (lookahead == '=') ADVANCE(52);
      END_STATE();
    case 15:
      if (lookahead == 'A') ADVANCE(16);
      if (lookahead == 'O') ADVANCE(17);
      END_STATE();
    case 16:
      if (lookahead == 'M') ADVANCE(57);
      END_STATE();
    case 17:
      if (lookahead == 'M') ADVANCE(59);
      END_STATE();
    case 18:
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\'') ADVANCE(2);
      END_STATE();
    case 19:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(25);
      END_STATE();
    case 20:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(106);
      END_STATE();
    case 21:
      if (lookahead == '\'' ||
          lookahead == '0' ||
          lookahead == '\\' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(3);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(107);
      END_STATE();
    case 23:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(113);
      END_STATE();
    case 24:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 25:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 29:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1);
      END_STATE();
    case 30:
      if (eof) ADVANCE(32);
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == '$') ADVANCE(24);
      if (lookahead == '%') ADVANCE(27);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '0') ADVANCE(105);
      if (lookahead == '<') ADVANCE(69);
      if (lookahead == '>') ADVANCE(71);
      if (lookahead == '@') ADVANCE(28);
      if (lookahead == ']') ADVANCE(103);
      if (lookahead == '~') ADVANCE(19);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(37);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(10);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(75);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(74);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(108);
      if (sym__whitespace_character_set_1(lookahead)) ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 31:
      if (eof) ADVANCE(32);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '0') ADVANCE(105);
      if (lookahead == '<') ADVANCE(12);
      if (lookahead == '=') ADVANCE(13);
      if (lookahead == '>') ADVANCE(14);
      if (lookahead == '@') ADVANCE(28);
      if (lookahead == 'B') ADVANCE(87);
      if (lookahead == 'D') ADVANCE(100);
      if (lookahead == 'M') ADVANCE(88);
      if (lookahead == 'R') ADVANCE(99);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(37);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(10);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(108);
      if (sym__whitespace_character_set_1(lookahead)) ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_macro);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym__whitespace);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '*') ADVANCE(47);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(43);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '*') ADVANCE(47);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(43);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '*') ADVANCE(46);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(43);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '/') ADVANCE(41);
      if (sym__whitespace_character_set_2(lookahead)) ADVANCE(36);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '*') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(6);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(43);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '*') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(6);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(44);
      if (lookahead == '/') ADVANCE(38);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_BITS);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_MINREG);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_MINHEAP);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_MINSTACK);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_RUN);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_RAM);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_RAM);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_ROM);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_ROM);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_DW);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_zero_register);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_zero_register);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '0') ADVANCE(65);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '0') ADVANCE(66);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_program_counter);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_stack_pointer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(50);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(52);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '0') ADVANCE(101);
      if (lookahead == 'I') ADVANCE(92);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '0') ADVANCE(101);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '0') ADVANCE(101);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '0') ADVANCE(64);
      if (lookahead == 'A') ADVANCE(90);
      if (lookahead == 'O') ADVANCE(91);
      if (lookahead == 'U') ADVANCE(93);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '0') ADVANCE(64);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '0') ADVANCE(78);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H') ADVANCE(83);
      if (lookahead == 'R') ADVANCE(84);
      if (lookahead == 'S') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'K') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'W') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'b') ADVANCE(20);
      if (lookahead == 'o') ADVANCE(22);
      if (lookahead == 'x') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_char);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_char_escape);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_relative);
      if (lookahead == '0') ADVANCE(112);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_memory);
      if (lookahead == '0') ADVANCE(113);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_port);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 31},
  [2] = {.lex_state = 31},
  [3] = {.lex_state = 31},
  [4] = {.lex_state = 31},
  [5] = {.lex_state = 31},
  [6] = {.lex_state = 30},
  [7] = {.lex_state = 30},
  [8] = {.lex_state = 30},
  [9] = {.lex_state = 30},
  [10] = {.lex_state = 30},
  [11] = {.lex_state = 30},
  [12] = {.lex_state = 30},
  [13] = {.lex_state = 30},
  [14] = {.lex_state = 30},
  [15] = {.lex_state = 30},
  [16] = {.lex_state = 31},
  [17] = {.lex_state = 31},
  [18] = {.lex_state = 31},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 31},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 8},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 8},
  [26] = {.lex_state = 8},
  [27] = {.lex_state = 8},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 8},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 8},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 9},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 42},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 8},
  [57] = {.lex_state = 8},
  [58] = {.lex_state = 30},
  [59] = {.lex_state = 5},
  [60] = {(TSStateId)(-1)},
  [61] = {(TSStateId)(-1)},
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
    [sym_zero_register] = ACTIONS(1),
    [sym_register] = ACTIONS(1),
    [sym_program_counter] = ACTIONS(1),
    [sym_stack_pointer] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
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
    [sym_source_file] = STATE(55),
    [sym_comment] = STATE(1),
    [sym__header] = STATE(38),
    [sym_header_BITS] = STATE(49),
    [sym_header_MINREG] = STATE(49),
    [sym_header_MINHEAP] = STATE(49),
    [sym_header_MINSTACK] = STATE(49),
    [sym_header_RUN] = STATE(49),
    [sym_define_word] = STATE(38),
    [sym_label_def] = STATE(35),
    [sym_label] = STATE(39),
    [sym__line] = STATE(34),
    [sym_instruction] = STATE(38),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_source_file_repeat2] = STATE(5),
    [aux_sym_instruction_repeat1] = STATE(23),
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
    [sym_identifier] = ACTIONS(29),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 23,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(11), 1,
      sym_macro,
    ACTIONS(13), 1,
      sym__newline,
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
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_comment,
    STATE(4), 1,
      aux_sym_source_file_repeat2,
    STATE(17), 1,
      aux_sym_source_file_repeat1,
    STATE(23), 1,
      aux_sym_instruction_repeat1,
    STATE(35), 1,
      sym_label_def,
    STATE(37), 1,
      sym__line,
    STATE(39), 1,
      sym_label,
    STATE(38), 3,
      sym__header,
      sym_define_word,
      sym_instruction,
    STATE(49), 5,
      sym_header_BITS,
      sym_header_MINREG,
      sym_header_MINHEAP,
      sym_header_MINSTACK,
      sym_header_RUN,
  [76] = 20,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 1,
      sym_macro,
    ACTIONS(38), 1,
      anon_sym_BITS,
    ACTIONS(41), 1,
      anon_sym_MINREG,
    ACTIONS(44), 1,
      anon_sym_MINHEAP,
    ACTIONS(47), 1,
      anon_sym_MINSTACK,
    ACTIONS(50), 1,
      anon_sym_RUN,
    ACTIONS(53), 1,
      anon_sym_DW,
    ACTIONS(56), 1,
      anon_sym_DOT,
    ACTIONS(59), 1,
      sym_identifier,
    STATE(23), 1,
      aux_sym_instruction_repeat1,
    STATE(35), 1,
      sym_label_def,
    STATE(39), 1,
      sym_label,
    STATE(52), 1,
      sym__line,
    STATE(3), 2,
      sym_comment,
      aux_sym_source_file_repeat2,
    STATE(38), 3,
      sym__header,
      sym_define_word,
      sym_instruction,
    STATE(49), 5,
      sym_header_BITS,
      sym_header_MINREG,
      sym_header_MINHEAP,
      sym_header_MINSTACK,
      sym_header_RUN,
  [144] = 21,
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
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      aux_sym_source_file_repeat2,
    STATE(4), 1,
      sym_comment,
    STATE(23), 1,
      aux_sym_instruction_repeat1,
    STATE(35), 1,
      sym_label_def,
    STATE(36), 1,
      sym__line,
    STATE(39), 1,
      sym_label,
    STATE(38), 3,
      sym__header,
      sym_define_word,
      sym_instruction,
    STATE(49), 5,
      sym_header_BITS,
      sym_header_MINREG,
      sym_header_MINHEAP,
      sym_header_MINSTACK,
      sym_header_RUN,
  [214] = 21,
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
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      aux_sym_source_file_repeat2,
    STATE(5), 1,
      sym_comment,
    STATE(23), 1,
      aux_sym_instruction_repeat1,
    STATE(35), 1,
      sym_label_def,
    STATE(37), 1,
      sym__line,
    STATE(39), 1,
      sym_label,
    STATE(38), 3,
      sym__header,
      sym_define_word,
      sym_instruction,
    STATE(49), 5,
      sym_header_BITS,
      sym_header_MINREG,
      sym_header_MINHEAP,
      sym_header_MINSTACK,
      sym_header_RUN,
  [284] = 13,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(70), 1,
      anon_sym_LT,
    STATE(6), 1,
      sym_comment,
    STATE(9), 1,
      aux_sym_instruction_repeat2,
    STATE(12), 1,
      sym__operand,
    ACTIONS(64), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(66), 3,
      sym_macro,
      sym_relative,
      sym_port,
    ACTIONS(68), 3,
      sym_register,
      sym_identifier,
      sym_memory,
    ACTIONS(72), 3,
      sym_number,
      sym_char,
      sym_char_escape,
    STATE(13), 3,
      sym_label,
      sym_placeholder,
      sym__immediate_literal,
  [333] = 13,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(70), 1,
      anon_sym_LT,
    STATE(6), 1,
      aux_sym_instruction_repeat2,
    STATE(7), 1,
      sym_comment,
    STATE(12), 1,
      sym__operand,
    ACTIONS(74), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(66), 3,
      sym_macro,
      sym_relative,
      sym_port,
    ACTIONS(68), 3,
      sym_register,
      sym_identifier,
      sym_memory,
    ACTIONS(72), 3,
      sym_number,
      sym_char,
      sym_char_escape,
    STATE(13), 3,
      sym_label,
      sym_placeholder,
      sym__immediate_literal,
  [382] = 13,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(70), 1,
      anon_sym_LT,
    STATE(8), 1,
      sym_comment,
    STATE(10), 1,
      aux_sym_instruction_repeat2,
    STATE(12), 1,
      sym__operand,
    ACTIONS(76), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(66), 3,
      sym_macro,
      sym_relative,
      sym_port,
    ACTIONS(68), 3,
      sym_register,
      sym_identifier,
      sym_memory,
    ACTIONS(72), 3,
      sym_number,
      sym_char,
      sym_char_escape,
    STATE(13), 3,
      sym_label,
      sym_placeholder,
      sym__immediate_literal,
  [431] = 12,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(83), 1,
      anon_sym_DOT,
    ACTIONS(89), 1,
      anon_sym_LT,
    STATE(12), 1,
      sym__operand,
    ACTIONS(78), 2,
      ts_builtin_sym_end,
      sym__newline,
    STATE(9), 2,
      sym_comment,
      aux_sym_instruction_repeat2,
    ACTIONS(80), 3,
      sym_macro,
      sym_relative,
      sym_port,
    ACTIONS(86), 3,
      sym_register,
      sym_identifier,
      sym_memory,
    ACTIONS(92), 3,
      sym_number,
      sym_char,
      sym_char_escape,
    STATE(13), 3,
      sym_label,
      sym_placeholder,
      sym__immediate_literal,
  [478] = 13,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(70), 1,
      anon_sym_LT,
    STATE(9), 1,
      aux_sym_instruction_repeat2,
    STATE(10), 1,
      sym_comment,
    STATE(12), 1,
      sym__operand,
    ACTIONS(95), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(66), 3,
      sym_macro,
      sym_relative,
      sym_port,
    ACTIONS(68), 3,
      sym_register,
      sym_identifier,
      sym_memory,
    ACTIONS(72), 3,
      sym_number,
      sym_char,
      sym_char_escape,
    STATE(13), 3,
      sym_label,
      sym_placeholder,
      sym__immediate_literal,
  [527] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(11), 1,
      sym_comment,
    ACTIONS(99), 3,
      sym_register,
      sym_identifier,
      sym_memory,
    ACTIONS(97), 11,
      ts_builtin_sym_end,
      sym_macro,
      sym__newline,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_RBRACK,
      sym_number,
      sym_char,
      sym_char_escape,
      sym_relative,
      sym_port,
  [558] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(12), 1,
      sym_comment,
    ACTIONS(103), 3,
      sym_register,
      sym_identifier,
      sym_memory,
    ACTIONS(101), 10,
      ts_builtin_sym_end,
      sym_macro,
      sym__newline,
      anon_sym_DOT,
      anon_sym_LT,
      sym_number,
      sym_char,
      sym_char_escape,
      sym_relative,
      sym_port,
  [588] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(13), 1,
      sym_comment,
    ACTIONS(107), 3,
      sym_register,
      sym_identifier,
      sym_memory,
    ACTIONS(105), 10,
      ts_builtin_sym_end,
      sym_macro,
      sym__newline,
      anon_sym_DOT,
      anon_sym_LT,
      sym_number,
      sym_char,
      sym_char_escape,
      sym_relative,
      sym_port,
  [618] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(14), 1,
      sym_comment,
    ACTIONS(111), 3,
      sym_register,
      sym_identifier,
      sym_memory,
    ACTIONS(109), 10,
      ts_builtin_sym_end,
      sym_macro,
      sym__newline,
      anon_sym_DOT,
      anon_sym_LT,
      sym_number,
      sym_char,
      sym_char_escape,
      sym_relative,
      sym_port,
  [648] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(15), 1,
      sym_comment,
    ACTIONS(115), 3,
      sym_register,
      sym_identifier,
      sym_memory,
    ACTIONS(113), 10,
      ts_builtin_sym_end,
      sym_macro,
      sym__newline,
      anon_sym_DOT,
      anon_sym_LT,
      sym_number,
      sym_char,
      sym_char_escape,
      sym_relative,
      sym_port,
  [678] = 8,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(13), 1,
      sym__newline,
    STATE(16), 1,
      sym_comment,
    STATE(17), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(33), 3,
      ts_builtin_sym_end,
      sym_macro,
      anon_sym_DOT,
    ACTIONS(117), 7,
      anon_sym_BITS,
      anon_sym_MINREG,
      anon_sym_MINHEAP,
      anon_sym_MINSTACK,
      anon_sym_RUN,
      anon_sym_DW,
      sym_identifier,
  [711] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(121), 1,
      sym__newline,
    STATE(17), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    ACTIONS(119), 3,
      ts_builtin_sym_end,
      sym_macro,
      anon_sym_DOT,
    ACTIONS(124), 7,
      anon_sym_BITS,
      anon_sym_MINREG,
      anon_sym_MINHEAP,
      anon_sym_MINSTACK,
      anon_sym_RUN,
      anon_sym_DW,
      sym_identifier,
  [742] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(18), 1,
      sym_comment,
    ACTIONS(126), 4,
      ts_builtin_sym_end,
      sym_macro,
      sym__newline,
      anon_sym_DOT,
    ACTIONS(128), 7,
      anon_sym_BITS,
      anon_sym_MINREG,
      anon_sym_MINHEAP,
      anon_sym_MINSTACK,
      anon_sym_RUN,
      anon_sym_DW,
      sym_identifier,
  [770] = 9,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(132), 1,
      sym_string,
    STATE(19), 1,
      sym_comment,
    STATE(42), 1,
      sym__dw_literal,
    STATE(41), 2,
      sym_array,
      sym__immediate_literal,
    ACTIONS(72), 3,
      sym_number,
      sym_char,
      sym_char_escape,
  [801] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(20), 1,
      sym_comment,
    STATE(46), 1,
      sym__immediate_literal,
    ACTIONS(72), 3,
      sym_number,
      sym_char,
      sym_char_escape,
    ACTIONS(134), 3,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
  [827] = 8,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(136), 1,
      anon_sym_RBRACK,
    STATE(21), 1,
      sym_comment,
    STATE(24), 1,
      aux_sym_array_repeat1,
    STATE(30), 1,
      sym__immediate_literal,
    ACTIONS(72), 3,
      sym_number,
      sym_char,
      sym_char_escape,
  [854] = 8,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(138), 1,
      anon_sym_RBRACK,
    STATE(21), 1,
      aux_sym_array_repeat1,
    STATE(22), 1,
      sym_comment,
    STATE(30), 1,
      sym__immediate_literal,
    ACTIONS(72), 3,
      sym_number,
      sym_char,
      sym_char_escape,
  [881] = 9,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(27), 1,
      anon_sym_DOT,
    STATE(23), 1,
      sym_comment,
    STATE(25), 1,
      aux_sym_instruction_repeat1,
    STATE(35), 1,
      sym_label_def,
    STATE(39), 1,
      sym_label,
    ACTIONS(140), 2,
      sym_macro,
      sym_identifier,
  [910] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(142), 1,
      anon_sym_RBRACK,
    STATE(30), 1,
      sym__immediate_literal,
    STATE(24), 2,
      sym_comment,
      aux_sym_array_repeat1,
    ACTIONS(144), 3,
      sym_number,
      sym_char,
      sym_char_escape,
  [935] = 8,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(149), 1,
      anon_sym_DOT,
    STATE(35), 1,
      sym_label_def,
    STATE(39), 1,
      sym_label,
    ACTIONS(147), 2,
      sym_macro,
      sym_identifier,
    STATE(25), 2,
      sym_comment,
      aux_sym_instruction_repeat1,
  [962] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(152), 1,
      sym__newline,
    STATE(26), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    ACTIONS(119), 3,
      sym_macro,
      anon_sym_DOT,
      sym_identifier,
  [984] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(157), 1,
      sym__newline,
    STATE(26), 1,
      aux_sym_source_file_repeat1,
    STATE(27), 1,
      sym_comment,
    ACTIONS(155), 3,
      sym_macro,
      anon_sym_DOT,
      sym_identifier,
  [1008] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(28), 1,
      sym_comment,
    STATE(43), 1,
      sym__immediate_literal,
    ACTIONS(72), 3,
      sym_number,
      sym_char,
      sym_char_escape,
  [1029] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(29), 1,
      sym_comment,
    STATE(50), 1,
      sym__immediate_literal,
    ACTIONS(72), 3,
      sym_number,
      sym_char,
      sym_char_escape,
  [1050] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(30), 1,
      sym_comment,
    ACTIONS(159), 4,
      anon_sym_RBRACK,
      sym_number,
      sym_char,
      sym_char_escape,
  [1069] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(31), 1,
      sym_comment,
    ACTIONS(126), 4,
      sym_macro,
      sym__newline,
      anon_sym_DOT,
      sym_identifier,
  [1088] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(32), 1,
      sym_comment,
    STATE(40), 1,
      sym__immediate_literal,
    ACTIONS(72), 3,
      sym_number,
      sym_char,
      sym_char_escape,
  [1109] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(33), 1,
      sym_comment,
    STATE(45), 1,
      sym__immediate_literal,
    ACTIONS(72), 3,
      sym_number,
      sym_char,
      sym_char_escape,
  [1130] = 7,
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
    STATE(16), 1,
      aux_sym_source_file_repeat1,
    STATE(34), 1,
      sym_comment,
  [1152] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(35), 1,
      sym_comment,
    ACTIONS(161), 3,
      sym_macro,
      anon_sym_DOT,
      sym_identifier,
  [1170] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(13), 1,
      sym__newline,
    ACTIONS(163), 1,
      ts_builtin_sym_end,
    STATE(16), 1,
      aux_sym_source_file_repeat1,
    STATE(36), 1,
      sym_comment,
  [1192] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(13), 1,
      sym__newline,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
    STATE(16), 1,
      aux_sym_source_file_repeat1,
    STATE(37), 1,
      sym_comment,
  [1214] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(38), 1,
      sym_comment,
    ACTIONS(165), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1231] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(157), 1,
      sym__newline,
    STATE(27), 1,
      aux_sym_source_file_repeat1,
    STATE(39), 1,
      sym_comment,
  [1250] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(40), 1,
      sym_comment,
    ACTIONS(167), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1267] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(41), 1,
      sym_comment,
    ACTIONS(169), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1284] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(42), 1,
      sym_comment,
    ACTIONS(171), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1301] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(43), 1,
      sym_comment,
    ACTIONS(173), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1318] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(44), 1,
      sym_comment,
    ACTIONS(175), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1335] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(45), 1,
      sym_comment,
    ACTIONS(177), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1352] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(46), 1,
      sym_comment,
    ACTIONS(179), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1369] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(47), 1,
      sym_comment,
    ACTIONS(181), 2,
      anon_sym_RAM,
      anon_sym_ROM,
  [1386] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(48), 1,
      sym_comment,
    ACTIONS(183), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1403] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(49), 1,
      sym_comment,
    ACTIONS(185), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1420] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(50), 1,
      sym_comment,
    ACTIONS(187), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1437] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(51), 1,
      sym_comment,
    ACTIONS(189), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1454] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(13), 1,
      sym__newline,
    STATE(16), 1,
      aux_sym_source_file_repeat1,
    STATE(52), 1,
      sym_comment,
  [1473] = 5,
    ACTIONS(191), 1,
      sym__whitespace,
    ACTIONS(193), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(195), 1,
      aux_sym_comment_token1,
    ACTIONS(197), 1,
      anon_sym_SLASH_STAR,
    STATE(53), 1,
      sym_comment,
  [1489] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(199), 1,
      anon_sym_SLASH,
    STATE(54), 1,
      sym_comment,
  [1505] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(201), 1,
      ts_builtin_sym_end,
    STATE(55), 1,
      sym_comment,
  [1521] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(203), 1,
      sym_identifier,
    STATE(56), 1,
      sym_comment,
  [1537] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(205), 1,
      sym_identifier,
    STATE(57), 1,
      sym_comment,
  [1553] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(207), 1,
      anon_sym_GT,
    STATE(58), 1,
      sym_comment,
  [1569] = 5,
    ACTIONS(191), 1,
      sym__whitespace,
    ACTIONS(193), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(197), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(209), 1,
      aux_sym_comment_token2,
    STATE(59), 1,
      sym_comment,
  [1585] = 1,
    ACTIONS(211), 1,
      ts_builtin_sym_end,
  [1589] = 1,
    ACTIONS(213), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 76,
  [SMALL_STATE(4)] = 144,
  [SMALL_STATE(5)] = 214,
  [SMALL_STATE(6)] = 284,
  [SMALL_STATE(7)] = 333,
  [SMALL_STATE(8)] = 382,
  [SMALL_STATE(9)] = 431,
  [SMALL_STATE(10)] = 478,
  [SMALL_STATE(11)] = 527,
  [SMALL_STATE(12)] = 558,
  [SMALL_STATE(13)] = 588,
  [SMALL_STATE(14)] = 618,
  [SMALL_STATE(15)] = 648,
  [SMALL_STATE(16)] = 678,
  [SMALL_STATE(17)] = 711,
  [SMALL_STATE(18)] = 742,
  [SMALL_STATE(19)] = 770,
  [SMALL_STATE(20)] = 801,
  [SMALL_STATE(21)] = 827,
  [SMALL_STATE(22)] = 854,
  [SMALL_STATE(23)] = 881,
  [SMALL_STATE(24)] = 910,
  [SMALL_STATE(25)] = 935,
  [SMALL_STATE(26)] = 962,
  [SMALL_STATE(27)] = 984,
  [SMALL_STATE(28)] = 1008,
  [SMALL_STATE(29)] = 1029,
  [SMALL_STATE(30)] = 1050,
  [SMALL_STATE(31)] = 1069,
  [SMALL_STATE(32)] = 1088,
  [SMALL_STATE(33)] = 1109,
  [SMALL_STATE(34)] = 1130,
  [SMALL_STATE(35)] = 1152,
  [SMALL_STATE(36)] = 1170,
  [SMALL_STATE(37)] = 1192,
  [SMALL_STATE(38)] = 1214,
  [SMALL_STATE(39)] = 1231,
  [SMALL_STATE(40)] = 1250,
  [SMALL_STATE(41)] = 1267,
  [SMALL_STATE(42)] = 1284,
  [SMALL_STATE(43)] = 1301,
  [SMALL_STATE(44)] = 1318,
  [SMALL_STATE(45)] = 1335,
  [SMALL_STATE(46)] = 1352,
  [SMALL_STATE(47)] = 1369,
  [SMALL_STATE(48)] = 1386,
  [SMALL_STATE(49)] = 1403,
  [SMALL_STATE(50)] = 1420,
  [SMALL_STATE(51)] = 1437,
  [SMALL_STATE(52)] = 1454,
  [SMALL_STATE(53)] = 1473,
  [SMALL_STATE(54)] = 1489,
  [SMALL_STATE(55)] = 1505,
  [SMALL_STATE(56)] = 1521,
  [SMALL_STATE(57)] = 1537,
  [SMALL_STATE(58)] = 1553,
  [SMALL_STATE(59)] = 1569,
  [SMALL_STATE(60)] = 1585,
  [SMALL_STATE(61)] = 1589,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(7),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(20),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(33),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(32),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(28),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(47),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(19),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(57),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(7),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, .production_id = 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, .production_id = 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, .production_id = 5),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat2, 2),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat2, 2), SHIFT_REPEAT(13),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat2, 2), SHIFT_REPEAT(57),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat2, 2), SHIFT_REPEAT(13),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat2, 2), SHIFT_REPEAT(56),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat2, 2), SHIFT_REPEAT(11),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, .production_id = 5),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__immediate_literal, 1),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__immediate_literal, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat2, 1),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_instruction_repeat2, 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__operand, 1),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__operand, 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_placeholder, 3),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_placeholder, 3),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2, .production_id = 4),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 2, .production_id = 4),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(11),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(57),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(31),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_def, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_MINHEAP, 2, .production_id = 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dw_literal, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_word, 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_MINSTACK, 2, .production_id = 2),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_RUN, 2, .production_id = 3),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_MINREG, 2, .production_id = 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_BITS, 2, .production_id = 2),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__header, 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_BITS, 3, .production_id = 6),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [201] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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
