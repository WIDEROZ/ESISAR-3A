P <- matrix(0, 6, 6);
P[,1] <- c(0.5, 0.5, 0.25, 0, 0, 0);
P[,2] <- c(0.5,   0, 0.25, 0, 0, 0);
P[,3] <- c(  0,   0,    0, 1, 0, 0);
P[,4] <- c(  0, 0.5,    0, 0, 0, 0);
P[,5] <- c(  0,   0, 0.25, 0, 1, 0);
P[,6] <- c(  0,   0, 0.25, 0, 0, 1);


liste_etat = 1:6;
N <- 100000;
count = 1;
retour_2 = rep(0, N);

for(i in 1:N){
  Etat <- 2;
  Etat <- sample(liste_etat, 1, prob = P[Etat, ]);
  
  while((Etat != 6) & (Etat != 5) & (Etat != 2)){
    count = count + 1;
    Etat <- sample(liste_etat, 1, prob = P[Etat, ]);
  }
  retour_2[i] = (Etat == 2) * count;
  count = 1;
}

sum(retour_2)/sum(retour_2 != 0)

sum(retour_2 == 2)
