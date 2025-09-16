#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>

int main(){
    pid_t proc1, proc2;
    int *stat1, *stat2;
    proc1 = fork();
    proc2 = fork();

    if (proc1 == -1){
        printf("Erreur dans la création du processus 1 \n");
    }
    else if(proc1 == 0){
        printf("Père du fils 1 \n");
    }
    else{
        printf("Le PID du fils 1 est : %d \n", proc1);
    }



    if (proc2 == -1){
        printf("Erreur dans la création du processus 2 \n");
    }
    else if(proc2 == 0){
        printf("Père du fils 2 \n");
    }
    else{
        printf("Le PID du fils 2 est : %d \n", proc2);
    }

    printf("Wait 1 : %d \n", waitpid(proc1, stat1, 0));
    printf("Wait 2 : %d \n", waitpid(proc2, stat2, 0));


    exit(0);
    exit(0);


}