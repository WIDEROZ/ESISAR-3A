
/* Fichier test du fichier split_line */

#include "fonctions.h"


int main(void)
{
    // Note: pas de \n parce qu'on les a enlevés dans l'exo 1.
    char examples[6][32] = {
        "addi x1,  x0, 8",   // instruction addi classique
        "   li   a0,5",      // deux arguments seulement
        " ",                 // ligne vide
        "nop  ",             // aucun argument
        "lw  ra,8(a4 )  ",   // load word avec parenthèses
        "#   commentaire",   // ligne de commentaire
    };

    // TODO : Simplifier la ponctuation de toutes les chaînes

    for(int i = 0; i <= 5; i++){
        simplify_punct(examples[i]);
    }

    // TODO : Pour chaque chaîne d'exemple... essayer "%s", "%s%s", split_line
    char ins[16] = {0};
    char arg1[16] = {0};
    char arg2[16] = {0};
    char arg3[16] = {0};

    for(int i = 0; i <= 5; i++){
        //if (!is_comment(examples[i])){
        // int res = sscanf(examples[i], "%s%s", ins, arg1);
        printf("Chaine %d : %s \n", i, examples[i]);
        if(!split_line(examples[i], ins, arg1, arg2, arg3)){
            printf("Erreur : ligne %d impossible a split\n\n", i);
        } else {
            printf("INS : %s, ARG1 : %s, ARG2 : %s, ARG3 : %s\n\n", ins, arg1, arg2, arg3);
        //printf("res Sc : %d\n", res);
        }
  }

  return 0;
}