#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>

int k = 0;

void action(int n){
    printf("Signal reçu : %d \n", n);
}

void action2(int n){
    k++;
    printf("Signal reçu : %d \n", k);
    if (k == 5){
        exit(0);
    }
}


int main(){

    /* 1 :
    if (signal(SIGINT, SIG_IGN) == SIG_ERR){
        printf("Echec de l'installation \n");
        exit(-1);
    }
    while(1){

    }
    */
    
    /* 2
    if (signal(SIGINT, action) == SIG_ERR){
        printf("Echec de l'installation \n");
        exit(-1);
    }
    while(1){
        
    }
    */
    
    /* 3
    if (signal(SIGINT, action2) == SIG_ERR){
        printf("Echec de l'installation \n");
        exit(-1);
    }
    while(1){
        
    }
    */





}