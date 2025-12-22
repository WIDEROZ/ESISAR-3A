#include <stdio.h>
#include <stdlib.h>
#include <sys/ipc.h>
#include <string.h>
#include <sys/msg.h>

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

    // Création de la file de messages
    int id_file = msgget(key, 0666 | IPC_CREAT);
    if(id_file == -1){
        perror("Impossible de créer la file");
        exit(-1);
    }

    // Recevoir un message
    while (1){
        if(msgrcv(id_file, &message, sizeof(message.content), (long)1, 0) == -1){
            perror("Impossible de recevoir un message");
            exit(-1);
        }
        printf("MESSAGE : %s\n", message.content);
    }





    // Supression de la file de messages
    if (msgctl(id_file, IPC_RMID, NULL) == -1) {
        perror("msgctl issue");
        return 1;
    }

    return 0;
}
