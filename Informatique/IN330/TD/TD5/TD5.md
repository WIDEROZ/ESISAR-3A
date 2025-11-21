```C
typedef struct {
	int valeur;
	int suivant;
} element ;
typedef element* liste;
```

```C
void afficherListe(liste l){
	int next = l[0].suivant;
	while(next != 0){
		printf("Index courant : %d, Élément : %d, index suivant : %d \n", next, l[next].valeur, l[next].suivant);
		next = l[next].suivant;
	}
}
```

```C
void creerListeVide(liste l, int MAX){
	l[0].suivant = 0;
	for (int i = 1; i < MAX; i++) l[i].suivant = -1;
}
```


```C
void insererElement(int x, liste l){
	int next = l[0].suivant;
	int indexMax = 0;
	int tmp;
	while(next != 0){
		if (x <= l[next].valeur){
			tmp = l[next].valeur;
			l[next].valeur = x;
			x = tmp;
		}
		if (next > indexMax){
			indexMax = next;
		}
		if (l[next].suivant == 0){
			indexMax ++;
			l[next].suivant = indexMax;
			l[indexMax].valeur = x;
			l[indexMax].suivant = 0;
			next = l[next].suivant;
		}
		next = l[next].suivant;
	}
}
```


















```C

```

