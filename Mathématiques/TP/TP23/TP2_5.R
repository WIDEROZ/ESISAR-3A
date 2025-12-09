
p <- 0.15;
q <- 1-p;
a <- p/5;

A <- matrix(rep(a, 25), nrow=5, ncol=5);
B <- matrix(0, 5, 5);

B[,1] <- c(0, q/2, q/3, q, 0);
B[,2] <- c(q/2, 0, q/3, 0, 0);
B[,3] <- c(q/2, q/2, 0, 0, 0);
B[,4] <- c(0, 0, 0, 0, 0);
B[,5] <- c(0, 0, q/3, 0, q);

P = A+B;

# 3.
Q = eigen(t(P));
Q

pi <- Q$vectors[,1]/(sum(Q$vectors[,1]));
pi

# 4.

liste_pages = 1:5;
N <- 10000;
count = 1;
pi <- t(c(0, 0, 0, 0, 0));
Page <- sample(liste_pages, 1, prob=t(c(1/5, 1/5, 1/5, 1/5, 1/5)));

for(i in 1:N){
  Page <- sample(liste_pages, 1, prob = P[Page, ]);
  pi[Page] = pi[Page] + 1;
}

pi/N



