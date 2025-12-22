#include <stdio.h>
#include <stdlib.h>
#include <sys/ipc.h>
#include <string.h>
#include <sys/msg.h>
#include <sys/types.h>

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
    int id_file = msgget(key, 0500 | IPC_CREAT);
    if(id_file == -1){
        perror("Impossible de créer la file");
        exit(-1);
    }

    struct msqid_ds p_msqid;

    if(msgctl(id_file, IPC_STAT, &p_msqid) == -1){
        perror("Récupération des infos impossible\n");
    }
    else{
        printf("UID : %d\n", (uid_t)(p_msqid.msg_perm.uid));
        printf("GID : %d\n", (gid_t)(p_msqid.msg_perm.gid));
        printf("Perm mode : %o\n", (unsigned short)(p_msqid.msg_perm.mode));
    }

    // Recevoir un message
    if(msgrcv(id_file, &message, sizeof(message.content), message.type, 0) == -1){
        perror("Impossible de recevoir un message");
        exit(-1);
    }
    printf("MESSAGE : %s\n", message.content);

    return 0;
}
