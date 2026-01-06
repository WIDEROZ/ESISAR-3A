N = 100;
t = (0 : 1/8000 : (N-1)/8000);

x1 = square(50*t*2*pi);
plot(t, x1)

X1f = fft(x1);

f = (0 : 8000/N : 8000 - 8000/N);
plot(f, abs(X1f));
