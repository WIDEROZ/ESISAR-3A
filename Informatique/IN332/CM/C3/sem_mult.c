#include <stdio.h>
#include <stdlib.h>
#include <sys/sem.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/shm.h>

#define SEM_NUM 2
#define MAX_PROC_NUM 1

void P(struct sembuf *tab, short i){
    tab[i].sem_op -= 1;
}

void V(struct sembuf *tab, short i){
    tab[i].sem_op += 1;
}

int main(int argc, char const *argv[])
{
    int shm_id_1 = shmget(IPC_PRIVATE, sizeof(int), 0666 | IPC_CREAT);
    int shm_id_2 = shmget(IPC_PRIVATE, sizeof(int), 0666 | IPC_CREAT);
    int shm_id_tab = shmget(IPC_PRIVATE, sizeof(struct sembuf), 0666 | IPC_CREAT);
    int *p1 = (int*) shmat(shm_id_1, NULL, 0);
    int *p2 = (int*) shmat(shm_id_2, NULL, 0);
    struct sembuf *tab = (int*) shmat(shm_id_tab, NULL, 0);
    *p1 = 69;
    *p2 = 169;

    // Get sémaphores : 
    int key = ftok("sem_mult", 0);
    int sem_id = semget(key, SEM_NUM, 0666 | IPC_CREAT);
    for(short i = 0; i < SEM_NUM; i++){
        tab[i].sem_num = sem_id;
        tab[i].sem_op = 0;
        tab[i].sem_flg = 0;
        if(semctl(sem_id, i, SETVAL, MAX_PROC_NUM) == -1){
            perror("SET_VAL issue\n");
            exit(-1);
        }
    }




    pid_t id_fork = fork();
    if(id_fork == -1){
        perror("Fork 1 issue\n");
        exit(-1);
    }
    else if(id_fork == 0){
        printf("Fils 1 : %d", getpid());
        P(tab, 0);
        (*p1)++;
        V(tab, 0);
        sleep(5);
        printf("Fils 1 : p1 : %d\n", *p1);
    }
    else{
        printf("Père 1 : %d", getpid());
        sleep(1);
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
        P(tab, 0);
        (*p1)++;
        V(tab, 0);
        


    }

    return 0;
}
