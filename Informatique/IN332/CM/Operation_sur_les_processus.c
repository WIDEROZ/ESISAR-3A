#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>

int main(){
    pid_t res_fork;

    while (1){
        res_fork = fork();

        if (res_fork == 0){
            printf("C'est moi le gosse\n");
            exit(0);
        }
        else if(res_fork == -1){
            perror("Création de processus");
            exit(2);
        }
        else{
            printf("Je suis ton père, mais mon fils tu t'appelles : %d \n", res_fork);
            exit(0);
        }
    }

    return 0;
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

    return bin;
}
