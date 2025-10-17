# Fractions
#### 1.
$$\left( \frac{3}{4}, -\frac{4}{4} \right), \left( \frac{1}{3}, \frac{1}{6} \right), \left( \frac{1}{2}, 0 \right), \left( 0, \frac{1}{2} \right), \left( \frac{1}{0}, 1 \right)$$
#### 2.
```C
void addFraction(Fraction f1, Fraction f2, Fraction *fres){
	
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