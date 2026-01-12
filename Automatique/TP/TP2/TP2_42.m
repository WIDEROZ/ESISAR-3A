close all;


Ns = 2000;
n = (0 : 1 : Ns-1);
f = (0 : 1/Ns : 1-1/Ns);

f0 = 0.2;

x = exp(2*pi*1i*f0*n);


% Tracer la courbe
figure;
grid on;
hold on;

plot(f, abs(fft(x)));
