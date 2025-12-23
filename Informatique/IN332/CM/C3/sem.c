#include <stdio.h>
#include <stdlib.h>
#include <sys/sem.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/shm.h>

#define SEM_NUM 1

void P(int sem_id){
    struct sembuf tab_sem;
    tab_sem.sem_num = 0;
    tab_sem.sem_op = -1;
    tab_sem.sem_flg = 0;
    if(semop(sem_id, &tab_sem, 1) == -1){
        perror("semop issue\n");
        exit(-1);
    }
}

void V(int sem_id){
    struct sembuf tab_sem;
    tab_sem.sem_num = 0;
    tab_sem.sem_op = 1;
    tab_sem.sem_flg = 0;
    if(semop(sem_id, &tab_sem, 1) == -1){
        perror("semop issue\n");
        exit(-1);
    }
}

int main(int argc, char const *argv[])
{
    int shm_id = shmget(IPC_PRIVATE, sizeof(int), 0666 | IPC_CREAT);
    int *p1 = (int*) shmat(shm_id, NULL, 0);
    *p1 = 69;

    int *p2;
    struct sembuf tab_sem[SEM_NUM];

    int key = ftok("sem", 0);
    int sem_id = semget(key, SEM_NUM, 0666 | IPC_CREAT);
    if(sem_id == -1){
        perror("Impossible de créer l'ens de sem\n");
        exit(-1);
    }

    if(semctl(sem_id, 0, SETVAL, 1) == -1){
        perror("Impossible d'init la sem\n");
        exit(-1);
    }

    pid_t pid = fork();
    if (pid == -1)
    {
        perror("Fork issue\n");
        exit(-1);
    }
    else if(pid == 0){
        printf("Process fils : %d\n", getpid());

        P(sem_id);
        (*p1) ++;
        printf("fils 1 : p1 : %d\n", *p1);
        sleep(5);
        V(sem_id);
        printf("fils 2 : p1 : %d\n", *p1);


    }
    else{
        printf("Process père : %d\n", getpid());

        sleep(1);
        P(sem_id);
        printf("père 0 : p1 : %d\n", *p1);
        *p1 = 0;
        V(sem_id);
        printf("père 2 : p1 : %d\n", *p1);
    }
    

    return 0;
}
