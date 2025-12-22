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
    message.type = 0;

    // Création de la file de messages
    int id_file = msgget(key, 0666 | IPC_CREAT);
    if(id_file == -1){
        perror("Impossible de créer la file");
        exit(-1);
    }

    // Recevoir un message
    if(msgrcv(id_file, &message, sizeof(message.content), message.type, 0) == -1){
        perror("Impossible de recevoir un message");
        exit(-1);
    }
    printf("MESSAGE : %s\n", message.content);

    return 0;
}
