#include <stdio.h>
#include <stdlib.h>
#include <sys/sem.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/shm.h>

void P(int sem_id, short i){
    
}

int main(int argc, char const *argv[])
{
    int shm_id_1 = shmget(IPC_PRIVATE, sizeof(int), 0666 | IPC_CREAT);
    int shm_id_2 = shmget(IPC_PRIVATE, sizeof(int), 0666 | IPC_CREAT);
    int *p1 = (int*) shmat(shm_id_1, NULL, 0);
    int *p2 = (int*) shmat(shm_id_2, NULL, 0);
    *p1 = 69;
    *p2 = 169;

    pid_t id_fork = fork();
    if(id_fork == -1){
        perror("Fork 1 issue\n");
        exit(-1);
    }
    else if(id_fork == 0){
        printf("Fils 1 : %d", getpid());
        (*p1)++;
    }
    else{
        printf("Père 1 : %d", getpid());
        pid_t id_fork_2 = fork();

        if(id_fork_2 == -1){
            perror("Fork 2 issue\n");
            exit(-1);
        }
        else if(id_fork_2 == 0){
            printf("Fils 2 : %d", getpid());

        }
        else{
            printf("Père 2 : %d", getpid());

        }

        // Gestion des semaphores


    }

    return 0;
}
