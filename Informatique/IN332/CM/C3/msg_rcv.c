#include <stdio.h>
#include <stdlib.h>


struct message{
    long type;
    char content[256];
} typedef msg;

int main(int argc, char const *argv[])
{
    int key = ftok("file_msg", 0);
    if (key == -1){
        perror("Impossible de créer la clé");
        exit(-1);
    }
    msg message;
    message.type = 1;
    message.content = "Message test";



    return 0;
}
