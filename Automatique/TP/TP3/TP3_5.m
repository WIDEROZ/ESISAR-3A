% Exercice 5
close all;

fe = 8000;
N = 35;

n = (0:1:N-1);
w = 0.54-0.46* cos(2*pi*n/(N-1)); % fen de hamming
% a.
figure;
subplot(2,1,1);
grid on;
hold on;

plot(n, w);


subplot(2,1,2);
grid on;
hold on;

Nfft = 2000;
f = (0 : fe/Nfft : fe - fe/Nfft);

plot(f, abs(fft(w,Nfft)));

% b.
figure;
grid on;
hold on;


