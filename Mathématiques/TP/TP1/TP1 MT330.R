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

#vect <- c(478,482,489,495,497,499,500,502,503,504,505,506,508,509,510,512,513,520,527,548)
#hist(vect)
#print(sum(vect)/20)
#print(sqrt(var(vect)))


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




