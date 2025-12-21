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

void handler(int i){
    if (i <= 0 || i > NSIG){
        fprintf(stderr, "Le signal %d n'est pas un signal\n", i);
        return;
    }
    else{
        if(i == SIGUSR1){
            printf("PID : %d, Sig : %d, kill process père\n", getppid(), i);
            kill(getppid(), SIGKILL);
        }
        else if(i == SIGINT){
            sigset_t set;
            if (sigemptyset(&set) == -1){
                perror("Impossible de créer un ensemble vide\n");
                exit(-1);
            }
            if (sigaddset(&set, SIGINT) == -1){
                perror("Impossible d'ajouter SIGINT'\n");
                exit(-1);
            }
            if(sigpending(&set) == 1){
                printf("SIGPENDING SIGINT 1\n");
            }
            sleep(1);
            if(sigpending(&set) == 1){
                printf("SIGPENDING SIGINT 2\n");
            }
        }
        else{
            printf("PID : %d, Sig : %d\n", getpid(), i);
            raise(i);
        }
    }
}

int main(int argc, char const *argv[])
{
    sigset_t set_mask;
    if (sigemptyset(&set_mask) == -1){
        perror("Impossible de créer un ensemble vide\n");
        exit(-1);
    }
    if (sigaddset(&set_mask, SIGINT) == -1){
        perror("Impossible d'ajouter SIGINT'\n");
        exit(-1);
    }
    
    

    struct sigaction sa;
    sa.sa_handler = handler;
    sa.sa_mask = set_mask;
    sa.sa_flags = 0;

    for (int i = 1; i <= NSIG; i++)
    {
        if (i != SIGSTOP && i != SIGKILL){
            sigaction(i, &sa, NULL);
        }
    }


    while (1){
        /* code */
    }
    




    return 0;
}
