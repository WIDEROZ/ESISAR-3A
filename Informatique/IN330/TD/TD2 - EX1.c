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

/*
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
        if('0' <= *mot && *mot <= '9'){
            n = n*16 + (*mot - '0');
        }
        else if('A' <= *mot && *mot <= 'F'){
            n = n*16 + (*mot - 'A') + 10
        }
    }
    return n;
}*/

char* bin_to_hex(char mot[], char hex[]){
    int n = 0;
    while (*mot != '\0'){
        n++;
        mot++;
    }

    mot -= 4;
    int k = n/4 +1;
    hex[k] = '\0';

    while(k > 0){
        if (n < 4 || !(mot[0] == '1' && (mot[1] == '1' || mot[2] == '1'))){
            hex[k] = bin_to_dec(mot) - '0';
        }
        else{
            if(mot[1] == '1'){
                if(mot[2] == '1'){
                    if(mot[3] == '1'){
                        hex[k] = 'F';
                    }
                    else{
                        hex[k] = 'E';
                    }
                }
                else{
                    if(mot[3] == '1'){
                        hex[k] = 'D';
                    }
                    else{
                        hex[k] = 'C';
                    }
                }
            }
            else{
                if(mot[3] == '1'){
                    hex[k] = 'B';
                }
                else{
                    hex[k] = 'A';
                }
            }
        }

        k--;
        printf("MOT : %s, %d", mot, k);
        mot = mot-4;
        

    }

    return hex;
}


int main(){
    char * str = "LAMOFKJIDF";
    char * bin = "01101";
    char *hex;
    affichagerEnHexadecimal(str);
    affichagerEnDecimal(str);
    printf("AIE : %d \n", bin_to_dec(bin));
    printf("BIN : %c \n", *bin);
    printf("HEX : %s \n", bin_to_hex(bin, hex));


    return 0;
}