#include <stdlib.h>
#include <stdio.h>


typedef struct {
	int valeur;
	int suivant;
} element ;
typedef element* liste;

void afficherListe(liste l){
	int next = l[0].suivant;
	while(next != 0){
		printf("Élément : %d \n", l[next].valeur);
		next = l[next].suivant;
	}
}

void creerListeVide(liste l, int MAX){
    l[0].suivant = 0;
    for (int i = 1; i < MAX; i++) l[i].suivant = -1;
}

void insererElement(int x, liste l){
	int next = l[0].suivant;
	int indexMax = 0;
	int tmp;
	
	while(next != 0){
		if (x < l[next].valeur){
			tmp = l[next].valeur;
			l[next].valeur = x;
			x = tmp;
		}
		if (next > indexMax){
			indexMax = next;
		}
		next = l[next].suivant;
	}
	l[next].suivant = indexMax;
	l[indexMax].valeur = x;
	l[indexMax].suivant = 0;
}

int main(int argc, char const *argv[])
{
    liste l;
    creerListeVide(l, 10);
    l[0].suivant = 10;
    l[10].valeur = 12;
    l[10].suivant = 5;
    l[5].valeur = 65;
    l[5].suivant = 2;
    l[2].valeur = 100;
    l[2].suivant = 0;


    afficherListe(l);
    insererElement(10, l);
    printf("\n");
    afficherListe(l);

    return 0;
}
