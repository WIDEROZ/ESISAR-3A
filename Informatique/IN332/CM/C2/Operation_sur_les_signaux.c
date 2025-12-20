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
    if (sigprocmask(SIG_UNBLOCK, set, NULL) == -1){
        perror("Impossible de créer le mask\n");
        exit(-1);
    }

    for(int i = 1; i < NSIG; i++){
                int b = sigismember(set, i);
                if (b){
                    printf("Signal : %d présent\n", i);
                }
                
    }


    
    


    exit(0);
}