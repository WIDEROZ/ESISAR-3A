#include <stdio.h>


void affichagerEnHexadecimal(char mot[]){
    char *l = mot;
    for(;*l != '\0'; l = l+1){
        printf("La valeure de la lettre %c est : %x \n", *l, *l);
    }
}

void affichagerEnDecimal(char mot[]){
    char *l = mot;
    for(;*l != '\0'; l = l+1){
        printf("La valeure de la lettre %c est : %d \n", *l, *l);
    }
}

v

int main(){
    char * str = "LMAFO";
    affichagerEnHexadecimal(str);
    affichagerEnDecimal(str);


    return 0;
}