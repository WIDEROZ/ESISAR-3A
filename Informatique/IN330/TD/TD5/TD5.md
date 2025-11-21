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
		printf("Élément : %d \n", l[next].valeur);
		next = l[next].suivant;
	}
}
```


```C
void insererElement(int x, liste l){
	int next = l[0].suivant;
	int indexMax = 0;
	element tmp;
	
	while(next != 0){
		if (x < l[next].valeur){
			tmp = l[next];
			l[next].valeur = x;
		}
		if (next > indexMax){
			indexMax = next;
		}
		next = l[next].suivant;
	}
	
	
	
	
}
```

















```C

```

