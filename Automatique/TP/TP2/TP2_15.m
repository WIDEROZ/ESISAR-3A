% EXERCICE 1.3
close all;

fe1 = 1000;
t1 = (0 : 1/fe1 : 79*(1/fe1));
f1 = (0 : fe1/80 : fe1-(fe1/80));

fe2 = 250;
t2 = (0 : 1/fe2 : 19*(1/fe2));
f2 = (0 : fe2/20 : fe2-(fe2/20));

xq1 = (0 : 1/(5*fe1) : ((80*5)-1)/(fe1*5));
xq2 = (0 : 1/(5*fe2) : ((20*5)-1)/(fe2*5));

f = 200;

y1 = sin(2*pi*f*t1);
y2 = sin(2*pi*f*t2);


% Tracer la courbe
figure;
subplot(2,1,1);
grid on;
hold on;

z1 = interp(ifft(abs(fft(y1))),5);
z2 = interp(ifft(abs(fft(y2))),5);

plot(xq1, z1);

subplot(2,1,2);
hold on;
grid on;


plot(xq2, z2);