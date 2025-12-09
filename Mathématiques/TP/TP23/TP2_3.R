pi0 = t(c(1, 0, 0, 0));
P <- matrix(0, 4, 4);
P[,1] <- c(0.65, 0,   0, 0);
P[,2] <- c( 0.2, 1, 0.3, 0);
P[,3] <- c(0.15, 0, 0.6, 0);
P[,4] <- c(   0, 0, 0.1, 1);

# 2

liste_etat = 0:3;
N <- 100000;
pi_0_5 = pi0;

for(i in 1:N){
  Etat <- 0;
  for(j in 1:5){
    Etat <- sample(liste_etat, 1, prob = P[Etat+1, ]);
  }
  pi_0_5[Etat+1] = pi_0_5[Etat+1]+1;

}

pi_0_5/N

# 3

liste_etat = 0:3;
N <- 100000;
temps_mort_ou_vacciné = rep(0, N);
count = 1;

for(i in 1:N){
  Etat <- 0;
  Etat <- sample(liste_etat, 1, prob = P[Etat+1, ]);
  
  while((Etat != 1) & (Etat != 3)){
    Etat <- sample(liste_etat, 1, prob = P[Etat+1, ]);
    count = count + 1;
  }
  temps_mort_ou_vacciné[i] = count;
  count = 1;
}

sum(temps_mort_ou_vacciné)/N

# 4

liste_etat = 0:3;
N <- 100000;
temps_mort = rep(0, N);
count = 1;

for(i in 1:N){
  Etat <- 0;
  Etat <- sample(liste_etat, 1, prob = P[Etat+1, ]);
  
  while((Etat != 1) & (Etat != 3)){
    Etat <- sample(liste_etat, 1, prob = P[Etat+1, ]);
    count = count + 1;
  }
  temps_mort[i] = count*(Etat == 3);
  count = 1;
}

sum(temps_mort)/N
