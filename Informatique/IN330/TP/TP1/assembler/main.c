#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "./../exos/fonctions.h"

int main(int argc, char **argv)
{
    /* ./riscv-assembler <ASSEMBLER INPUT> <HEX OUTPUT> */
    if(argc != 3) {
        printf("usage: ./riscv-assembler <ASSEMBLER INPUT> <HEX OUTPUT>\n");
        return 1;
    }

    FILE *fp_in = fopen(argv[1], "r");
    if(fp_in == NULL) {
        perror("error: cannot read input file");
        return 1;
    }

    FILE *fp_out = fopen(argv[2], "w");
    if(fp_out == NULL) {
        perror("error: cannot open output file");
        return 1;
    }

    // TODO : Lire depuis fp_in, écrire les instructions assemblées dans fp_out
    // ...

    char *line = NULL;
    size_t n = 0;
    int lineno = 0;
    /* Lecture du fichier ligne-par-ligne */
    while(getline(&line, &n, fp_in) != -1) {
        int len_line = strlen(line);
        line[len_line-1] = 0;
        printf("Line #%d: [%s] (length %d)  ", lineno, line, len_line);

        /* Séparation des instruction en mnémmonique et arguments */
        simplify_punct(line);

        char ins[16] = {0};
        char arg1[16] = {0};
        char arg2[16] = {0};
        char arg3[16] = {0};
        if(!split_line(line, ins, arg1, arg2, arg3)){
            printf("Erreur : cette ligne ne contient pas une instruction.\n");
        } else {
            printf("\nINS : %s\nARG1 : %s\nARG2 : %s\nARG3 : %s\n", ins, arg1, arg2, arg3);

            /*Encodage des arguments d'instruction sous forme entiere*/
            uint32_t code = encode_instruction(ins,parse_arg(arg1),parse_arg(arg2),parse_arg(arg3));

            /*Ecriture dans le fichier de sortie*/
            fprintf(fp_out, "%08x\n", code);
            }
        lineno++;
    }
    free(line);

    fclose(fp_in);
    fclose(fp_out);
    return 0;
}
