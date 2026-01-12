% EXERCICE 1.3
close all;

fe1 = 1000;
t1 = (0 : 1/fe1 : 79*(1/fe1));
f1 = (0 : fe1/80 : fe1-(fe1/80));

fe2 = 250;
t2 = (0 : 1/fe2 : 19*(1/fe2));
f2 = (0 : fe2/20 : fe2-(fe2/20));

f = 200;

y21 = sin(2*pi*f*t1);
y22 = sin(2*pi*f*t2);

% Tracer la courbe
figure;
subplot(2,1,1);
grid on;
hold on;


plot(f1, abs(fft(y21)), 'x');

subplot(2,1,2);
hold on;
grid on;


plot(f2, abs(fft(y22)), 'x');