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

