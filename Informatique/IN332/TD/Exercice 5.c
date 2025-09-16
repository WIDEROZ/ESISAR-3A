#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>


int main(){
    pid_t proc;
    proc = fork();


    if (proc == -1){
        printf("Erreur dans la création du processus \n");
        exit(-1);
    }
    else if(proc == 0){
        int pid_fils = getpid();
        printf("Fils créé : %d \n", pid_fils);
        if(kill(pid_fils, 0) == 0){
            printf("Le processus n'existe pas");
            exit(-1);
        }
        else{
            if(kill(p))
        }
    }
    else{
        wait(NULL);
    }





}