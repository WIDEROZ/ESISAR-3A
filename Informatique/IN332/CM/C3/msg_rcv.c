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
    char content[256] = "Message test";
    strcpy(content, message.content);

    int id_file = msgget(key, IPC_CREAT | IPC_EXCL);
    if(id_file == -1){
        perror("Impossible de créer la file");
        exit(-1);
    }



    if (msgctl(id_file, IPC_RMID, NULL) == -1) {
        perror("msgctl issue");
        return 1;
    }

    return 0;
}
