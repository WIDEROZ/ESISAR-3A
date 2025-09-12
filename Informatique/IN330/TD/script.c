#include <stdio.h>

float x0;
scanf("Saisir la valeur pour calculer le polynome : %f", &x0);



float valeurPolynome(float P[], int taille, float val){
    if (taille == 1){
        return P[0];
    }
    else{
        return (P[taille-1] + valeurPolynome(P, taille-1, val))*val;
    }

}

int main(){
    float P[4] P = {2; 1; 0; 4};

    printf("La valeur du polynome est : %f", valeurPolynome(P, 4, x0));


    return 0;
}