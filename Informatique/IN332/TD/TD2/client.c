#include <stdio.h>
#include <sys/ipc.h>
#include <sys/types.h>
#include <sys/msg.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>

struct msg_content {
    pid_t PID;
    char text[100];
};

struct Msg{
    long type;
    struct msg_content content;
} typedef msg;




int main(){
    key_t cle_client;
    cle_client = ftok("client.c", 1);


    if (cle_client == -1){
        perror("erreur ftok");
        exit(-1);
    }

    int id_file = msgget(cle_client, IPC_CREAT | 0666);
    if (id_file == -1){
        // if(errno == EEXIST) si l'id_file existe déjà
        perror("Erreur msgget");
        exit(-1);
    }
    

    

        // Ecriture du message
    struct msg_content cont_msg;
    cont_msg.PID = getpid();
    strcpy(cont_msg.text, "Message envoyé par le client");

    msg send_msg;
    send_msg.type = 1;
    send_msg.content = cont_msg;
        // Fin de l'exriture du message

    int res = msgsnd(id_file, &send_msg, sizeof(struct msg_content), 0);
    if (res == -1){
        perror("Erreur msgsnd");
        exit(-1);
    }
    


    
    
    


    return 0;
}