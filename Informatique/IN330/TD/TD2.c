#include <stdio.h>


void affichagerEnHexadecimal(char mot[]){
    char l = mot[0];
    for(;l != '\0'; l = *(&l+1)){
        printf("La valeure de la lettre %c est : %x \n", l, *(&l+1));
    }
    printf("test %c et %c", l, *(&l+1));
}


int main(){
    char * str = "TEST";

    affichagerEnHexadecimal(str);
    return 0;
}