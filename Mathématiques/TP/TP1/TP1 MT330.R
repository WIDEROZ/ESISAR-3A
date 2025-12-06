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
  (-log(v))/lba
}

#4*sum(bern(10^8,pi/4))/10^8.0

vect <- c(478,482,489,495,497,499,500,502,503,504,505,506,508,509,510,512,513,520,527,548)
hist(vect)
print(sum(vect)/20)
print(sqrt(var(vect)))



