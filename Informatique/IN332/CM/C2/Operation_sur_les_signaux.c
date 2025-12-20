#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <signal.h>



/*
int main(){
    if (signal(SIGINT, SIG_IGN) == SIG_ERR){
        printf("Echec de l'installation \n");
        exit(-1);
    }
    while(1){
        printf("Hehe ça boucle un max ici ;-) \n");
    }
    exit(0);

}

*/

int main(){
    sigset_t *set;
    if (sigemptyset(set) == -1){
        perror("Impossible de créer set\n");
        exit(-1);
    }
    if (sigaddset(set, SIGINT) == -1){
        perror("Impossible de add SIGINT\n");
        exit(-1);
    }
    if (sigprocmask(SIG_SETMASK, set, NULL) == -1){
        perror("Impossible de créer le mask\n");
        exit(-1);
    }
    while (1)
    {
        printf("%d", sigpending(set));
    }
    


    exit(0);
}