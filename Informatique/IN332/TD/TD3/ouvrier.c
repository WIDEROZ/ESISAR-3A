#include <stdio.h>
#include <sys/sem.h>
#include <stdlib.h>
#include <sys/ipc.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <unistd.h>

struct msg_content {
    pid_t PID;
    char text[100];
};

struct Msg{
    long type;
    struct msg_content content;
} typedef msg;

void P(int semid){
    struct sembuf op;
    op.sem_num = semid;
    op.sem_op = -1;
    op.sem_flg = SEM_UNDO;
    semop(semid, &op, 1);
}

void V(int semid){
    struct sembuf op;
    op.sem_num = semid;
    op.sem_op = 1;
    op.sem_flg = SEM_UNDO;
    semop(semid, &op, 1);
}


int main(){
    pid_t id_fork;

    if ((id_fork = fork()) == -1)
    {
        perror("Fork issue!");
        exit(-1);
    }
    else if(id_fork == 0)
    {
        key_t key_ouvrier = ftok("ouvrier1.c", 1);
        key_t key_ascenceur = ftok("ascenceur.c", 1);
        if (key_ouvrier == -1 || key_ascenceur == -1)
        {
            perror("Ftok issue");
            exit(-1);
        }

        /* ----- Reception de la sémaphore ----- */
        int sem_id = semget(key_ascenceur, 1, 0);
        if (sem_id < 0){
            perror("semget issue");
            exit(-1);
        }

        /* ----- Écriture du message ----- */
        struct msg_content cont_msg;
        cont_msg.PID = getpid();
        strcpy(cont_msg.text, "Demande pour monter dans l'ascenceur");

        
        
        printf("L'ouvrier 1 demande à rentrer dans l'assenceur\n");
        P(sem_id);

        


    }
    else{
        wait(NULL);
        exit(0);
    }


}