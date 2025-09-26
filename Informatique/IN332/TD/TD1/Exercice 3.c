#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>

void multi_fork(int n, int i){
    pid_t proc;
    proc = fork();
    if (i > 0){
        if (proc == -1){
            printf("Erreur dans la création du processus \n");
            exit(-1);
        }
        else if (proc == 0){
            printf("Le fils %d est : %d et son père est : %d \n", (n+1)-i, getpid(), getppid());
            sleep(2);
            exit(0);
        }
        else{
            multi_fork(n, i-1);
            if(i == 1){
                int get_status;
                printf("Le père est : %d \n", getpid());
                wait(&get_status);
                printf("Le père se réveille : %d \n", get_status);
                exit(0);
            }
        }
    }
}

int main(){
    multi_fork(10, 10);


    return 0;
}