#include <stdio.h>
#include <stdlib.h>
#include <sys/ipc.h>
#include <string.h>
#include <sys/msg.h>
#include <errno.h>


struct message{
    long type;
    char content[256];
} typedef msg;

/* --------------- Envoie le nombre de messages qu'il faut pour bloquer la file --------------- */

/*
int main(int argc, char const *argv[])
{
    int key = ftok("msg_rcv", 0);
    if (key == -1){
        perror("Impossible de créer la clé");
        exit(-1);
    }
    msg message;
    message.type = 1;
    char content[256] = "Message test";
    strcpy(message.content, content);

    // Récupération de la file de messages
    int id_file = msgget(key, 0666 | IPC_CREAT);
    if(id_file == -1){
        perror("Impossible de récuérer la file");
        exit(-1);
    }

    int count = 0;
    while(1){
        if(msgsnd(id_file, &message, sizeof(message.content), IPC_NOWAIT) == -1){
            if(errno == EAGAIN){
                printf("La file est pleine : %d\n", count);
                break;
            }
            else{
                perror("Problème lors de l'envoi du message");
                exit(-1);
            }
            
        }
        count ++;
    }

    return 0;
}
*/


int main(int argc, char const *argv[]){
    int key = ftok("msg_rcv", 0);
    if (key == -1){
        perror("Impossible de créer la clé");
        exit(-1);
    }
    msg message;
    message.type = 1;
    char content[256] = "Message test";
    strcpy(message.content, content);

    // Récupération de la file de messages
    int id_file = msgget(key, 0666 | IPC_CREAT);
    if(id_file == -1){
        perror("Impossible de récuérer la file");
        exit(-1);
    }

    if(msgsnd(id_file, &message, sizeof(message.content), 0) == -1){
        perror("Problème lors de l'envoi du message");
    }
    // Supression de la file de messages
    if (msgctl(id_file, IPC_RMID, NULL) == -1) {
        perror("msgctl issue");
        exit(-1);
    }

    return 0;
}