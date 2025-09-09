#include <stdio.h>
#include <unistd.h>

int main(){
    pid_t res_fork;
    while (1){
        res_fork = fork();

        if (res_fork == 0){
            printf("C'est moi le gosse\n");
            
        }
        else if(res_fork == -1){
            perror("Création de processus");
        }
        else{
            printf("Je suis ton père, mais mon fils tu t'appelles : %d \n", res_fork);
        }
    }

    return 0;
}

