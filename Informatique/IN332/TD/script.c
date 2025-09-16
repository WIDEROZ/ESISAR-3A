#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(){
    pid_t proc1, proc2;
    proc1 = fork();
    proc2 = fork();

    if (proc1 == -1){
        printf("Erreur dans la création du processus 1 \n");
    }
    else{

    }



    return 0;
}