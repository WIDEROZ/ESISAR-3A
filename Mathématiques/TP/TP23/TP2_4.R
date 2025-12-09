pi <- c(0, 0, 1);
pi <- t(pi);

P <- matrix(0, 3, 3);

P[,1] <- c(0.6, 0.2, 0);
P[,2] <- c(0.4, 0.6, 0.4);
P[,3] <- c(0, 0.2, 0.6);





#3.

N <- 20;

for (i in 1:N){
  pi <- (pi %*% P);
  cat("Itération numéro : ", i, "\n")
  cat("pi : ", pi, "\n")
  
}



