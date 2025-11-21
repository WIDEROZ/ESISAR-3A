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
	
}
```
















```C

```

