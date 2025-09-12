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
    dest[i] = src[i];
}

int comparerChaine(char* cg, char* cd){
    int i = 0;
    while(cg[i] == cd[i]){
        if(cg[i] == '\0'){
            return 0;
        }
        i++;
    }
    
    if(cg[i] == '\0'){
        return -1;
    }
    else if(cd[i] == '\0'){
        return 1;
    }
    else if(cg[i] < cd[i]){
        return -1;
    }
    else{
        return 1;
    }
}


int main(){


    return 0;
}