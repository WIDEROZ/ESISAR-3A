close all;

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

figure;
subplot(3,1,1);
grid on;
hold on;

plot(t, y);

subplot(3,1,2);
grid on;
hold on;

Nfft = 32000; % On a 16000 points sur le vecteur T. Pour bien respecter le critère de shanon, on prend le double de fe
f = (0 : fe/Nfft : fe - fe/Nfft);
Y = abs(fft(y, Nfft));

plot(f, Y);

figure;
grid on;
hold on;
s = spectrogram(y);
spectrogram(y, 'yaxis');
