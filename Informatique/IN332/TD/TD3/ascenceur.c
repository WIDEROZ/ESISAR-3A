#include <stdio.h>
#include <sys/sem.h>
#include <stdlib.h>
#include <sys/ipc.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <unistd.h>

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
        printf("Le processus assenceur est en service : %d\n", id_fork);
        key_t key_ascenceur = ftok("ascenceur.c", 1);
        if (key_ascenceur == -1)
        {
            perror("Ftok issue");
            exit(-1);
        }
        
        printf("L'assenceur est en service : %d\n", key_ascenceur);
        
        int sem_id = semget(key_ascenceur, 2, IPC_CREAT);

        if(semctl(sem_id, 0, SETVAL, 1) < 0){
            perror("Semctl issue");
            exit(-1);
        }
    }
    


    return 0;
}

