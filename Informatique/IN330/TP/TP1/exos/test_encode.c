
/* Fichier test du fichier encode */

#include "fonctions.h"

int main(void)
{
  // Encodons l'instruction : sd x12, -8(x3)
  // source = 12, imm = -8, dest = 3
  // On doit trouver fec1bc23
  
  // D'abord avec la fonction spécifique aux instructions de type S.
  uint32_t enc1 = encode_S_type(0b0100011, 0b011, 12, -8, 3);
  printf("encodage = %08x\n", enc1);

  
  // Ensuite avec une fonction qui sélectionne le bon type et fournit opcode,
  // funct3 selon le nom de l'instruction.
  enc1 = encode_instruction("sd", 12, -8, 3);
  printf("encodage = %08x\n\n", enc1);

  // Autres petits exemples:
  //   jal ra, 4          -> 004000ef
  //   addi x6, x2, 42    -> 02a10313
  //   sub x2, x1, x3     -> 40308133
  //   bne x5, x17, -4    -> ff129ee3

  enc1 = encode_instruction("jal", 1, 4, 0);
  printf("encodage = %08x\n", enc1);
  printf("Résultat attendu : 004000ef\n\n");
  enc1 = encode_instruction("addi", 6, 2, 42);
  printf("encodage = %08x\n", enc1);
  printf("Résultat attendu : 02a10313\n\n");
  enc1 = encode_instruction("sub", 2, 1, 3);
  printf("encodage = %08x\n", enc1);
  printf("Résultat attendu : 40308133\n\n");
  enc1 = encode_instruction("bne", 5, 17, -4);
  printf("encodage = %08x\n", enc1);
  printf("Résultat attendu : ff129ee3\n\n");

  return 0;
}