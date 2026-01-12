close all;


fe = 8000;
Ns = 80;
t = (0 : 1/fe : (Ns-1)/fe);
f = (0 : fe/Ns : fe-(fe/Ns));

f0 = 1000;

y = cos(2*pi*f0*t);

% Tracer la courbe
figure;
subplot(2,1,1);
grid on;
hold on;

Y1 = abs(fft(y));

plot(f, Y1);

subplot(2,1,2);
hold on;
grid on;

Nfft = 2000;
Y2 = abs(fft(y,Nfft));

f2000 = (0 : fe/2000 : fe-(fe/2000));

plot(f2000, Y2);