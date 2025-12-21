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

}*/


/*
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
    

    sigset_t *sigens;

    while(1){
        if (sigpending(sigens)==0)
        {
            for(int i = 1; i < NSIG; i++){
                int b = sigismember(sigens, i);
                if (b){
                    printf("Signal : %d présent\n", i);
                }
                
                
            }
        }
        else{
            perror("Problème sigpending\n");
            exit(-1);
        }
        
    }


    
    


    exit(0);
}*/

/*
void handler(int){
        fprintf(stderr, "Nouveau comportement\n");
    }

int main(){
    struct sigaction new_action;

    sigset_t mask_set;
    if (sigemptyset(&mask_set) == -1)
    {
        perror("Arrive pas a créer un set empty\n");
        exit(-1);
    }

    new_action.sa_handler = handler;
    new_action.sa_mask = mask_set;
    new_action.sa_flags = 0;

    if(sigaction(SIGINT, &new_action, NULL) == -1){
        perror("Impossible de changer comportement\n");
        exit(-1);
    }

    while (1)
    {
        sleep(1);
    }
    



    exit(0);
}
*/

int main(int argc, char const *argv[])
{
    struct sigaction sa;
    sa.sa_handler = ;
    return 0;
}
