#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>

int main(){
    pid_t proc1;
    proc1 = fork();

    if (proc1 == -1){
        printf("Erreur dans la création du processus \n");
        exit(-1);
    }
    else if(proc1 == 0){
        printf("Le PID du fils 1 est : %d, et celui du père est : %d \n", getpid(), getppid());
        sleep(2);
        exit(0);
    }
    else{
        if(fork() == 0){
            printf("Le PID du fils 2 est : %d, et celui du père est : %d \n", getpid(), getppid());
            sleep(5);
            exit(0);
        }
        else{
            printf("Père du fils 2 PID : %d \n", getpid());
            wait(NULL);
            printf("Reveil du père \n");
            exit(0);
        }
        
    }



}
