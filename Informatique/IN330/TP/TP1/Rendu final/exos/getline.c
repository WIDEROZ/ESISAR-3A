// Code fourni Projet RISCV 2024-25
// Partie Assembleur

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void read_line_by_line(FILE *fp)
{
    char *line = NULL;
    size_t n = 0;
    int lineno = 0;
    /* Lecture du fichier ligne-par-ligne */
    while(getline(&line, &n, fp) != -1) {
        int len_line = strlen(line);
        line[len_line-1] = 0;
        printf("Line #%d: [%s] (length %ld)\n", lineno, line, len_line);
        lineno++;
    }

    free(line);
}

int main(int argc, char **argv)
{
    if(argc != 2) {
        printf("usage: ./getline <FICHIER>\n");
        return 1;
    }

    /* "fp" signifie "file pointer", nom classique donné à un FILE * (qui
       permet de manipuler un fichier). Donc "fp_in" = "file pointer, input" */
    FILE *fp_in = fopen(argv[1], "r");
    if(fp_in == NULL) {
        perror("error: cannot read input file");
        return 1;
    }

    read_line_by_line(fp_in);
    fclose(fp_in);

    return 0;
}
