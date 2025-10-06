/* Fichier de test du fichier parse_arg */

#include "fonctions.h"

int main(void)
{
  // TODO : declarer un tableau d'exemples "representatifs"
  // AIDE : s'inspirer de l'exo précédent.

  char exemples[6][4] = {
    "zero",
    "10",
    "x10",
    "gp",
    "s0",
    "s10"
  };

  //TODO : tester votre fonction parse_arg

  for(int i = 0; i <= 5; i++){
    printf("Test %d  : %d \n", i, parse_arg(exemples[i]));
  }

  return 0;
}