#include <stdio.h>


void affichagerEnHexadecimal(char mot[]){
    char *l = mot;
    for(;*l != '\0'; l++){
        printf("La valeure de la lettre %c est : %x \n", *l, *l);
    }
}

void affichagerEnDecimal(char mot[]){
    char *l = mot;
    for(;*l != '\0'; l++){
        printf("La valeure de la lettre %c est : %d \n", *l, *l);
    }
}

int bin_to_dec(char bin[]){
    char *str = bin;
    int dec = 0;
    for(; *str != '\0'; str++){
        if(*str == '0'){
            dec = dec*2;
        }
        else{
            dec = dec*2+1;
        }
    }
    return dec;
}

/* Meilleur code */

int bin_to_dec(char bin[]){
    int dec = 0;
    for(; *bin != '\0'; bin++){
        if(*bin == '0'){
            dec = dec*2;
        }
        else{
            dec = dec*2+1;
        }
    }
    return dec;
}

char* dec_to_bin(int dec){
    char* bin;
    while(dec != 0){
        if(dec%2 == 0){
            dec = dec/2;
            bin = '1'
        }
        else{
            
        }
    }

    return str;
}

int main(){
    char * str = "LMAFO";
    char * bin = "0110";
    affichagerEnHexadecimal(str);
    affichagerEnDecimal(str);
    printf("AIE : %d \n", bin_to_dec(bin));


    return 0;
}