#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdint.h>

// TP 1 de IN330 -- exercices préparatoires
// LG et SM pour IN330, 2024

/* Code fourni : types S, B, J */
uint32_t encode_S_type(int opcode, int funct3, int rsrc, int imm, int rdst)
{
    printf(":: S type (opcode=%d funct3=%d args=[%d,%d,%d])\n",
           opcode, funct3, rsrc, rdst, imm);
    int imm_4_0  = (imm & 0b000000011111);
    int imm_11_5 = (imm & 0b111111100000) >> 5;
    return opcode | (imm_4_0 << 7) | (funct3 << 12) | (rdst << 15)
           | (rsrc << 20) | (imm_11_5 << 25);
}

uint32_t encode_B_type(int opcode, int funct3, int rsrc1, int rsrc2, int imm)
{
    printf(":: B type (opcode=%d funct3=%d args=[%d,%d,%d])\n",
           opcode, funct3, rsrc1, rsrc2, imm);
    int imm_4_1  = (imm & 0b0000000011110) >> 1;
    int imm_10_5 = (imm & 0b0011111100000) >> 5;
    int imm_11   = (imm & 0b0100000000000) >> 11;
    int imm_12   = (imm & 0b1000000000000) >> 12;
    return opcode | (imm_11 << 7) | (imm_4_1 << 8) | (funct3 << 12)
           | (rsrc1 << 15) | (rsrc2 << 20) | (imm_10_5 << 25)
           | (imm_12 << 31);
}

uint32_t encode_J_type(int opcode, int rdest, int imm)
{
    printf(":: J type (opcode=%d args=[%d,%d])\n",
        opcode, rdest, imm);
    int imm_10_1  = (imm & 0b000000000011111111110) >> 1;
    int imm_11    = (imm & 0b000000000100000000000) >> 11;
    int imm_19_12 = (imm & 0b011111111000000000000) >> 12;
    int imm_20    = (imm & 0b100000000000000000000) >> 20;
    return opcode | (rdest << 7) | (imm_19_12 << 12) | (imm_11 << 20)
           | (imm_10_1 << 21) | (imm_20 << 31);
}


//TODO : réaliser les fonctions pour les types I, et R

uint32_t encode_I_type(int opcode, int funct3, int rsrc, int imm, int rdst)
{
       printf(":: I type (opcode=%d funct3=%d args=[%d,%d,%d])\n",
           opcode, funct3, rsrc, rdst, imm);
       return opcode | (rdst << 7) | (funct3 << 12) | (rsrc << 15)
              | (imm << 20);
}

uint32_t encode_R_type(int opcode, int funct3 , int funct7 , int rsrc1 , int rsrc2, int rdst)
{
       printf(":: R type (opcode=%d funct3=%d funct7=%d args=[%d,%d,%d])\n",
           opcode, funct3, funct7, rsrc1, rsrc2, rdst);
       return opcode | (rdst << 7) | (funct3 << 12) | (rsrc1 << 15) 
       | (rsrc2 << 20) | (funct7 << 25);
}

uint32_t encode_instruction(char* name, int arg1, int arg2, int arg3)
{
  // Cette fonction dispatche les instructions en regardant leur nom.

  // Exemple :
  if(!strcmp(name, "sd"))
    return encode_S_type(0b0100011, 0b011, arg1, arg2, arg3);

  //TODO : ajouter les autres instructions.
  // Attention à l'ordre des arguments.
  // Evidemment, on teste au fur et à mesure !
  if(!strcmp(name, "add"))
    return encode_R_type(0b0110011, 0x0, 0x0, arg2, arg3, arg1);

  if(!strcmp(name, "sub"))
    return encode_R_type(0b0110011, 0x0, 0x20, arg2, arg3, arg1);

  if(!strcmp(name, "addi"))
    return encode_I_type(0b0010011, 0x0, arg2, arg3, arg1);

  if(!strcmp(name, "ld"))
    return encode_I_type(0b0000011, 0x3, arg3, arg2, arg1);

  if(!strcmp(name, "sd"))
    return encode_S_type(0b0100011, 0x3, arg1, arg2, arg3);

  if(!strcmp(name, "beq"))
    return encode_B_type(0b1100011, 0x0, arg1, arg2, arg3);

  if(!strcmp(name, "bne"))
    return encode_B_type(0b1100011, 0x1, arg1, arg2, arg3);

  if(!strcmp(name, "blt"))
    return encode_B_type(0b1100011, 0x4, arg1, arg2, arg3);

  if(!strcmp(name, "bge"))
    return encode_B_type(0b1100011, 0x5, arg1, arg2, arg3);

  if(!strcmp(name, "jal"))
    return encode_J_type(0b1101111, arg1, arg2);

  if(!strcmp(name, "j"))
    return encode_J_type(0b1101111, 0, arg1);

  if(!strcmp(name, "li"))
    return encode_I_type(0b0010011, 0x0, 0, arg2, arg1);

  if(!strcmp(name, "mv"))
    return encode_I_type(0b0010011, 0x0, arg2, 0, arg1);
  
  
  printf(":: UNKNOWN INSTRUCTION\n");
  return 0;
}