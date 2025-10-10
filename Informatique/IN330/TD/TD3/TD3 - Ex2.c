#include <stdio.h>

int estPalindrome(char* mot, int n){
    if(n < 0){
        return 1;
    }
    else if(mot[0] == mot[n-1]){
        return estPalindrome(mot+1, n-2);
    }
    return 0;   

}

int estPalindrome_v2(char* mot, int n){
    return ((mot[0] == mot[n-1]) ? estPalindrome_v2(mot+1, n-2) : ((n < 0) ? 1 : 0));
}


int main(){
    char* mot = "azertyuioppoiuytreza";
    printf("Palindrome ? : %d \n", estPalindrome_v2(mot, 20));

    

    return 0;
}