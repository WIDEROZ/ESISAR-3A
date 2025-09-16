#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>


int main(){
    int status;
    pid_t proc;
    proc = fork();


    if (proc == -1){
        printf("Erreur dans la création du processus \n");
        exit(-1);
    }
    else if(proc == 0){
        pid_t pid_fils = getpid();
        printf("PID fils : %d \n", pid_fils);


    }
    else{
        printf("Le père a été créé : %d \n", getpid());

        if(kill(proc, 0) == -1){
            printf("Le processus n'existe pas \n");
            exit(-1);
        }
        else{
            
            if(kill(proc, SIGUSR1) == -1){
                printf("Echec de l'envoi du signal SIGUSR1 \n");
            }
            else{
                printf("Envoi du signal SIGUSR1 \n");
            }
            
        }
        
        wait(&status);

        printf("Status : %d \n", status);
        exit(0);
    }





}