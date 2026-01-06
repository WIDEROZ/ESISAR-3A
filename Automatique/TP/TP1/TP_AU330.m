t1 = linspace(0, 1, 1000);

N = 1000;
delta_t = 10e-3;
t2 = (0 :  delta_t : N*delta_t);

t3 = [1+j , 2+j , 3+j];
t4 = t3';
t5 = t3.';
B = [t1 t2];

