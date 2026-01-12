% Exercice 1
% 2)
close all;

fe = 8000;
N = 35;

n = (0:1:N-1);
h = 1/4 * sinc((n-17)/4);
%plot(n,h);

% 3)

Nfft = 2000;  %Rajoute des zero pour lisser le signal, cf cours
fc = fe/8;
freq = (0 : fe/Nfft : fe-fe/Nfft);  %Correspond au nombre de point rajouté par Nfft

hf = fft(h, Nfft);
plot(freq,abs(hf));

% 4)

% Tracer la courbe
figure;
subplot(3,1,1);
grid on;
hold on;

Db = 20*log10(hf);

plot(freq, Db)  %Module en décibels

subplot(3,1,2);
hold on;
grid on;

phase = angle(hf);

plot(freq, phase); %Angle permet d'avoir l'argument d'un complexe

subplot(3,1,3);
hold on;
grid on;

plot(freq, phase/Db);


% Exercice 2
% 1)

% Taper filterDesigner dans la console 