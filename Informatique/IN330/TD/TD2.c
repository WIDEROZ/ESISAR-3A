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
    int dec = 0;
    for(; *bin != '\0'; bin++){
        dec = 2*dec + (*bin - '0');
    }
    return dec;
}


char* dec_to_bin(int dec, char res[]){
    int i = 0;
    while(d > 0){
        res[i] = (d % 2) + '0';
        dec = dec /2;
        i++;
    }
    res[i] = '\0';
    retournerMot(res, res);
    return res;
}


int hex_to_int(char* mot){
    int n = 0;
    for(; mot != '\0'; mot++){
        
    }
}


int main(){
    char * str = "LMAFO";
    char * bin = "01101";
    affichagerEnHexadecimal(str);
    affichagerEnDecimal(str);
    printf("AIE : %d \n", bin_to_dec(bin));
    printf("BIN : %c \n", *bin);
    


    return 0;
}