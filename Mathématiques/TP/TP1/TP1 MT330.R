bern <- function(N, p){
  v <- runif(N,0,1);
  v <- replace(v, v <= p, 1);
  return (replace(v, (v > p) & (v != 1), 0))
}

bin <- function(N, n, p){
  v <- bern(N, p)
  for(i in 1:(n-1)){
    v <- v + bern(N, p)
  }
  return (v)
}

geo <- function(N, p){
  if (p == 1) {return ()}
  else {
  v <- runif(N,0,1) 
  return (round(abs(1+(log(v/p)/(log(1-p))))))
  }
}

exp1 <- function(N, lba){
  v <- runif(N, 0, 1)
  return ((-log(v))/lba)
}


exp1 <- function(N, lba){
  v <- runif(N, 0, 1)
  return ((-log(v))/lba)
}


exp1_dens = function(x, lba){
  return (lba * exp(-x*lba))
}

exp5000 <- exp1(5000, 2);

hist(exp5000, col = rgb(0, 0, 1), freq = FALSE)
curve(exp1_dens(x, 2), from = 0, to = max(exp5000), add = TRUE, col = rgb(1, 0, 0))


# Exercice 2

pi_approx = function(N){
  x <- runif(N, 0, 0.5)
  y <- runif(N, 0, 0.5)
  return ((sum(x^2 + y^2 <= 0.25)/N)*4)
}

pi_approx(103599)


# Exercice 3

lba = 1/10;
mu = 1/6;
n = 1000000;


A = exp1(n, lba);
B = exp1(n, mu);

B = replace(B, A <= 2*B, 1);
B = replace(B, B != 1, 0);

sum(B)/n



# Exercice 4


temps <- c(478,482,489,495,497,499,500,502,503,504,505,506,508,509,510,512,513,520,527,548)
temps2 <- temps + 60*(30 + c(2.13, 0.63, 0.70, 8.14, 0.12, 3.75, 0.20, 0.64, 0.22, 2.36, 0.10, 2.14, 4.59, 8.54, 0.36, 3.14, 15.07, 1.33, 1.60, 0.22));

esperance <- sum(temps)/20;
ecart_type <- sqrt(sum((temps - esperance)^2)/20);

esperance2 <- sum(temps2)/20;


loi_normale_dens <- function(x, mu, sigma){
  return (1/(sqrt(2*pi)*sigma) * exp(-0.5 * ((x-mu)/sigma)^2))
}

hist(temps, col = rgb(0, 0, 1), freq = FALSE)
curve(loi_normale_dens(x, esperance, ecart_type), from = 0, to = max(temps), add = TRUE, col = rgb(1, 0, 0))

hist(temps2, col = rgb(0, 0, 1), freq = FALSE)
curve(exp1_dens(x-6000, 1/esperance2), from = 0, to = max(temps2), add = TRUE, col = rgb(1, 0, 0))


t <- qnorm(0.99, mean = esperance, sd = ecart_type)





