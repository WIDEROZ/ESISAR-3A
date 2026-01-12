close all;

fe = 8000;
Ns = 80;
t = (0 : 1/fe : (Ns-1)/fe);
f = (0 : fe/Ns : fe-(fe/Ns));

f0 = 1000;
f1 = 2000;

y   = cos(2*pi*f0*t) + 0.001 * cos(2*pi*f1*t);

% Tracer la courbe
figure;
subplot(2,1,1);
grid on;
hold on;

Y1   = abs(fft(y));
Y1Db = 20 * log10(Y1);

plot(f, Y1);

subplot(2,1,2);
hold on;
grid on;


plot(f, Y1Db);