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

    
    while(1){
        if(msgsnd(id_file, &message, sizeof(message.content), IPC_NOWAIT) == -1){
            if(errno == EAGAIN){
                printf("La file est pleine");
            }
            else{
                perror("Problème lors de l'envoi du message");
                exit(-1);
            }
            
        }
    }

    return 0;
}
