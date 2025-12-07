pi0 <- c(0, 1, 0, 0, 0, 0);

P <- matrix(0, 6, 6);
P[,1] <- c(0.5, 0.5, 0.25, 0, 0, 0);
P[,2] <- c(0.5,   0, 0.25, 0, 0, 0);
P[,3] <- c(  0,   0,    0, 1, 0, 0);
P[,4] <- c(  0, 0.5,    0, 0, 0, 0);
P[,5] <- c(  0,   5, 0.25, 0, 1, 0);
P[,6] <- c(  0,   0, 0.25, 0, 0, 1);


P2 = P %*% P;  
t(pi0) %*% P2 %*% P2  

liste_etat = 1:6;  
N <- 1000;  
count = 0;  

for (i in 1:N){  
  Etat <- 2  
  for (j in 1:4){  
    Etat <- sample(liste_etat, 1, prob = P[Etat, ]);  
  }  
  if(Etat == 2){  
    count = count + 1;  
  }  
}  

count/N  
count