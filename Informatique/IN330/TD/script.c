#include <stdio.h>
#include <stdlib.h>
#include <math.h>




float valeurPolynome(float P[], int taille, float val){
    float tot = P[taille];
    for(int i = taille-1; i >= 0; i--){
        tot = tot * val +  P[i];
    }
    return tot;
}

float valeurPolynome2(float c[], float d[], float val){
    int i = 0;
    float tot = 0;
    while(d[0] != -1){
        tot += c[i] * pow(val, d[i]);
        i++;
    }
    return tot;
}

float addPolynomes(float c1[], float d1[], float c2[], float d2[], float cres[], float desc[]){
    


}


int main(){
    float P[4] = {2, 1, 0, 4};
    float x0;
    scanf("%f", &x0);

    printf("La valeur du polynome est : %f", valeurPolynome(P, 4, x0));


    return 0;
}