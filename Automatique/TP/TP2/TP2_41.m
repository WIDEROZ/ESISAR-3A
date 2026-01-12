close all;

fe = 100;
Ns = 2000;
n = (0 : 1 : Ns-1);
f0 = 0.2;

x = exp(2*pi*1i*f0*n);


% Tracer la courbe
figure;
grid on;
hold on;

plot(n, x);
