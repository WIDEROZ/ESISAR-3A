
N = 100;
t = (0 : 1/8000 : (N-1)/8000);
x1 = cos(1000*t*2*pi);
plot(t, x1)


E = sum(abs(x1).^2)
P = E/N

X1f = fft(x1);

Es = 1/N * sum(abs(X1f).^2)

f = (0 : 8000/N : 8000 - 8000/N);

plot(f, abs(X1f))

X1fi = ifft(X1f)
plot(t, abs(X1fi))
