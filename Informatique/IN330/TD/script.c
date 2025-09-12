#include <stdio.h>

float x0;
scanf("Saisir la valeur pour calculer le polynome : %f", &x0);



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
        tot += pow(c[i], d[i]);
        i++;
    }
    return tot;
}


int main(){
    float P[4] P = {2; 1; 0; 4};

    printf("La valeur du polynome est : %f", valeurPolynome(P, 4, x0));


    return 0;
}