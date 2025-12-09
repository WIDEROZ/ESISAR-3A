pi0 = t(c(1, 0, 0, 0));
P <- matrix(0, 4, 4);
P[,1] <- c(0.65, 0,   0, 0);
P[,2] <- c( 0.2, 1, 0.3, 0);
P[,3] <- c(0.15, 0, 0.6, 0);
P[,4] <- c(   0, 0, 0.1, 1);


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