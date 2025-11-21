```C
typedef struct {
	int valeur;
	int suivant;
} element ;
typedef element* liste;
```


```C
int elementLibre(liste l){
	int i = 0;
	for(; l[i].suivant == -1; i++);
	return i;
}
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

Ma version : 
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

Version au tableau : 
```C
void insererElement(int x, liste l){
	int pre = 0;
	int suiv = l[pre].suivant;
	while(suiv != 0 && x > l[suiv].valeur){
		pre = suiv;
		suiv = l[suiv].suivant;
	}
	int new = elementLibre(l);
	l[new].suivant = suiv;
	l[new].valeur = x;
	l[prec].suivant = new;
}
```

```C
void supprimerElement(int x, liste l){
	int pre = 0;
	int suiv = l[pre].suivant;
	while(suiv != 0 && x != l[suiv].valeur){
		pre = suiv;
		suiv = l[suiv].suivant;
	}
	l[pre].suivant = l[suiv].suivant;
	l[suiv].suivant = -1;
}
```













```C

```

