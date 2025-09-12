#include <stdio.h>
#include <stdlib.h>

int myStrlen(char* str){
    int i = 0;
    while(str[i] != '\0'){
        i++;
    }
    return i;
}

void myStrcpy(char* dest, char* src){
    int i = 0;
    while(src[i] != '\0'){
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

int main(){


    return 0;
}