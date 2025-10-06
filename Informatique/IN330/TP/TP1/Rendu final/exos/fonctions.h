#include "encode.c"
#include "split_line.c"
#include "parse_arg.c"

uint32_t encode_S_type(int opcode, int funct3, int rsrc, int imm, int rdst);
uint32_t encode_B_type(int opcode, int funct3, int rsrc1, int rsrc2, int imm);
uint32_t encode_J_type(int opcode, int rdest, int imm);
uint32_t encode_I_type(int opcode, int funct3, int rsrc, int imm, int rdst);
uint32_t encode_R_type(int opcode, int funct3 , int funct7 , int rsrc1 , int rsrc2, int rdst);
uint32_t encode_instruction(char* name, int arg1, int arg2, int arg3);

void simplify_punct(char *str);
bool is_comment(const char *str);
bool split_line(const char *l, char *ins, char *arg1, char *arg2, char *arg3);

int parse_arg(const char *arg);