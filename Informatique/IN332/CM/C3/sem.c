#include <stdio.h>
#include <stdlib.h>
#include <sys/sem.h>
#include <sys/types.h>

#define SEM_NUM 2

void P(int sem_id, int i){

    tab_sem[i].sem_op -= 1;
    if(semop(sem_id, tab_sem, 1) == -1){
        perror("semop issue\n");
        exit(-1);
    }
}

void V(int sem_id, int i){
    tab_sem[i].sem_op += 1;
    if(semop(sem_id, tab_sem, 1) == -1){
        perror("semop issue\n");
        exit(-1);
    }
}

int main(int argc, char const *argv[])
{
    int *p1;
    int *p2;
    struct sembuf tab_sem[SEM_NUM];
    
    *p1 = 69;
    *p2 = 169;

    int key = ftok("sem", 0);
    int sem_id = semget(key, SEM_NUM, 0666 | IPC_CREAT);
    if(sem_id == -1){
        perror("Impossible de créer l'ens de sem\n");
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

        




    }
    else{
        printf("Process père : %d\n", pid);
    }
    

    return 0;
}
