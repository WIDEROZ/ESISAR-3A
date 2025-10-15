#include <stdio.h>
#include <sys/sem.h>
#include <stdlib.h>
#include <sys/ipc.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/msg.h>
#include <sys/signal.h>

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
    else if (id_fork == 0){
        pid_t pid_fils = getpid();
        printf("Le processus ouvrier est devant l'assenceur : %d\n", pid_fils);




    }
    else{

        /* ----- FTOK ----- */

        printf("Le processus assenceur est en service : %d\n", id_fork);
        key_t key_ascenceur = ftok("ascenceur.c", 1);
        key_t key_ouvriers = ftok("ouvrier.c", 1);


        if (key_ascenceur == -1 || key_ouvriers == -1)
        {
            perror("Ftok issue");
            exit(-1);
        }
        
        printf("L'assenceur est en service : %d\n", key_ascenceur);
        
        /* ----- Sémaphores ----- */

        int sem_id = semget(key_ascenceur, 1, IPC_CREAT | 0666);
        

        if (sem_id < 0)
        {
            perror("semget issue");
            exit(-1);
        }
        
        

        if(semctl(sem_id, 0, SETVAL, 2) < 0){
            perror("Semctl issue");
            exit(-1);
        }
        /* ----- Messages ----- */
        
        /* ----- Récupération de la file de message ----- */
        int id_file = msgget(key_ouvriers, IPC_CREAT | 0666);
        if (id_file < 0){
            perror("Erreur msgget");
            exit(-1);
        }

        msg msg_ouvrier;

        /* ----- Reception des messages ----- */
        while(1){
            int count = 0;
            while (count <2){
                if (msgrcv(id_file, &msg_ouvrier, sizeof(msg_ouvrier.content), 1L, 0) == -1){
                    printf("Erreur dans la reception du message \n");
                }
                else{
                    printf("L'ouvrier : %d \n %s \n", msg_ouvrier.content.PID, msg_ouvrier.content.text);
                    count ++;
                }
            }
            printf("L'ascenceur monte !\n");
            signal(SIGUSR1, handler);
    }


        

    }
    


    return 0;
}

