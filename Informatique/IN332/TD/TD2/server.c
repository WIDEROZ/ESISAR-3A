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

    if(cle_client == -1){
        perror("Erreur création de clé");
        exit(-1);
    }
    
    int id_file = msgget(cle_client, IPC_CREAT | 0666);

    if(id_file == -1){
        printf("Erreur dans msgget \n");
    }
    else{
        // Création du message
        msg message;
        // Fin de création du message


        if (msgrcv(id_file, &message, sizeof(message.content), 1L, 0) == -1){
            printf("Erreur dans la reception du message \n");
        }
        else{
            printf("MESSAGE RECU! %d, %s \n", message.content.PID, message.content.text);

            struct msg_content cont_msg;
            cont_msg.PID = message.content.PID;
            strcpy(cont_msg.text, "Message envoyé par le serveur");


            msg send_msg;
            send_msg.type = cont_msg.PID;
            send_msg.content = cont_msg;
            
            msgsnd(id_file, &send_msg, sizeof(send_msg.content), 0);
        }
    
    }


    






    return 0;
}