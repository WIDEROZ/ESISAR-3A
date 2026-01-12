% Exercice 4
close all;

% Copie exo 3

fe = 8000; % Il faut choisir la fréquence d'échantillonage par rapport au critère de shanon (ici même que la partie précédente)
pas = 1/fe;

t1 = (0 : pas : 0.3);
t2 = (0.3 : pas : 0.8);
t3 = (0.8 : pas : 1.2);
t4 = (1.2 : pas : 1.7);
t5 = (1.7 : pas : 2);

t = [t1 t2 t3 t4 t5];

f1 = 500;
f2 = 800;
f3 = 1200;
f4 = 400;
f5 = 1500;

y1 = 3 * sin(2 * pi * t1 * f1);
y2 = sin(2 * pi * t2 * f2);
y3 = 2 * sin(2 * pi * t3 * f3);
y4 = 2 * sin(2 * pi * t4 * f4);
y5 = 3 * sin(2 * pi * t5 * f5);

y = [y1 y2 y3 y4 y5];


% Copie filtre de l'exo 1

fe = 8000;
N = 35;

n = (0:1:N-1);
h = 1/4 * sinc((n-17)/4);


% Debut exo

Nfft = 32000; %On réutilise le signal de l'exo 3, attention au critère de shanon

sF = filter(h,1,y);   % Le filtre au numérateur, 1 au dénominateur

figure;
subplot(2,1,1);
grid on;
hold on;

plot(t,y);
plot(t,sF);

subplot(2,1,2);
grid on;
hold on;

Y = abs(fft(y, Nfft));
SF = abs(fft(sF, Nfft));

plot(f, Y);
plot(f, SF);