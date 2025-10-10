#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int estPalindrome(char* mot, int n){
    if(n < 0){
        return 1;
    }
    else{
        if(mot[0] == mot[n-1]){
            mot++;
            return estPalindrome(mot, n-2);
        }
        return 0;
    }

}


int main(){
    char* mot = "azertyuiopoiuytreza";
    printf("Palindrome ? : %d \n", estPalindrome(mot, 18));

    

    return 0;
}