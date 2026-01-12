close all;

fe = 109930*1.1;
Ns = fe/10;
t = (0 : 1/fe : (Ns-1)/fe);
f = (0 : fe/Ns : fe-(fe/Ns));

f0 = 50000;
f1 = 2310;
f2 = 3750;
f3 = 4960;
k = 0.25;

m = cos(2*pi*f1*t) + 1.8*cos(2*pi*f2*t) + 0.9*cos(2*pi*f3*t);
s = (1+ k .* m) .*cos(2*pi*f0*t);

% Tracer la courbe
figure;
grid on;
hold on;


plot(f, abs(fft(s)));
