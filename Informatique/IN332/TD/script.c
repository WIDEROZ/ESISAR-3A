#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>

int main(){
    int *status;
    pid_t proc1;
    proc1 = fork();

    if (proc1 == -1){
        printf("Erreur dans la création du processus 1 \n");
        exit(2);
    }
    else if(proc1 == 0){
        printf("Père du fils 1 PID : %d \n", getppid());
        waitpid(getpid(), status, 0);
        printf("Reveil du père \n");
        exit(0);
    }
    else{
        printf("Le PID du fils 1 est : %d \n", proc1);
        sleep(2);
        exit(0);
    }



}