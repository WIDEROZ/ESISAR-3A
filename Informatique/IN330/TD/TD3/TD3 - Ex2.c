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


int main(){
    char* mot = "azertyuioppoiuytreza";
    printf("Palindrome ? : %d \n", estPalindrome(mot, 20));

    

    return 0;
}