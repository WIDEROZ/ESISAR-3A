# Fractions
#### 1.
$$\left( \frac{3}{4}, -\frac{4}{4} \right), \left( \frac{1}{3}, \frac{1}{6} \right), \left( \frac{1}{2}, 0 \right), \left( 0, \frac{1}{2} \right), \left( \frac{1}{0}, 1 \right)$$
#### 2.
```C
void addFraction(Fraction f1, Fraction f2, Fraction *fres){
	fres->den = f1.den*f2.den / pgcd(f1.den, f2.den);
	fres->num = f1.num*(fres.den/f1.den) + f2.num*(fres.den/f2.den);
}
```

```C
void subFraction (Fraction f1, Fraction f2, Fraction *fres){
	fres->den = f1.den*f2.den / pgcd(f1.den, f2.den);
	fres->num = f1.num*(fres.den/f1.den) - f2.num*(fres.den/f2.den);
}
```


```C
char op = 0;
printf("Entrer une opération : \n");
scanf("%c", &op);
if(op == '*'){
	mulFraction(fa, fb, &fres);
}
else if(op == '+'){
	addFraction(fa, fb, &fres);
}
else if(op == '-'){
	subFraction(fa, fb, &fres);
}
else if(op == '/'){
	divFraction(fa, fb, &fres);
}
else{
	prinf("Ce n'est pas une opération pour les fractions");
}
```


# Polynômes
```C
void addPolynomes(Polynome p1, Polynome p2, Polynome res){
	if(*p1.degre == -1 && *p2.degre == -1){
		*pres.degre = -1;
	}
	else if(*p2.degre == -1){
		*pres.coeff = *p1.coeff;
		*pres.degre = *p1.degre;
		p1++;
		pres++;
		addPolynomes(p1, p2, pres);
	}
	else if(*p1.degre == -1){
		*pres.coeff = *p2.coeff;
		*pres.degre = *p2.degre;
		p2++;
		pres++;
		addPolynomes(p1, p2, pres);
	}
	else if(*p1.degre == *p2.degre){
		*pres.degre = *p1.degre;
		*pres.coeff = *p1.coeff + *p2.coeff;
		p1++;
		p2++;
		pres++;
		addPolynomes(p1, p2, pres);
	}
	else if(*p1.degre > *p2.degre){
		*pres.degre = *p1.degre;
		*pres.coeff = *p1.coeff;
		p1++;
		addPolynomes(p1, p2, pres);
	}
	else{
		*pres.degre = *p2.degre;
		*pres.coeff = *p2.coeff;
		p2++;
		addPolynomes(p1, p2, pres);
	}
}
```

```C
int main(){
	Polynome p1 = [{15, 455}, {146, 5}, {1, 1}, {0, -1}];
	Polynome p2 = [{15, 455}, {14, 6}, {45, 0}, {0, -1}];
	Polynome pres = {0};
	
	addPolynomes(p1, p2, pres);
	// Afficher pres
	
}
```

#### Les disques d'Edouard
disques.h : 
```C
#define CD 0
#define DVD 1
#define VIDE -1


typedef struct {
	int type;
	char titre[100];
	char info[100];
} disque;

typedef disque Discotheque[nbDisques];



void addDisk(disque new_disk, Discotheque diskTab);

void rmDisk(disque disk, Discotheque diskTab);

void wInfo(disque *disk);
```


disques.c
```C
void addDisk(disque new_disk, Discotheque diskTab){
	if(*diskTab.type == VIDE){
		*diskTab = new_disk;
		diskTab++;
		*diskTab.type = VIDE;
	}
	else{
		diskTab++;
		addDisque(new_disk, diskTab);
	}
}

void rmDisk(disque disk, Discotheque diskTab){
	if(*diskTab.type == VIDE){
		printf("Le disque n'existe pas dans le tableau!\n");
	}
	else if(*diskTab == *disk){
		diskTab++;
	}
	else{
		diskTab++;
		rmDisk(disk, diskTab);
	}
}

void wInfo(disque *disk, char info[100]){
	disk->info = info;
}

```

main.c
```C
#define nbDisques 200;

Discotheque mesDisques;
```