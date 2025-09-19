#include <stdio.h>
#include <types.h>

int64_t codage_num(int s, int y, int m, int d, int c, int o){
    int64_t num_secu = 0;
    
    num_secu = s-1;
    num_secu = num_secu << 7;

    num_secu += y; // Utiliser un '|' a la place du '+' si ça ne marche pas 
    num_secu = num_secu << 4;
    
    num_secu += m;
    num_secu = num_secu << 7;
    
    num_secu += d;
    num_secu = num_secu << 10
    
    num_secu += c;
    num_secu = num_secu << 10;
    
    num_secu += o;
    
    return num_secu;
}

int* decodage_num(int64_t ss){
    int tab[6];
    int s = 1;
    int y = 127;
    int m = 15;
    int d = 127;
    int c = 1023;
    int o = 1023;

    tab[5] = ss & o;
    ss = ss >> 10;

    tab[4] = ss & c;
    ss = ss >> 10;

    tab[3] = ss & d;
    ss = ss >> 7;

    tab[2] = ss & m;
    ss = ss >> 4;

    tab[1] = ss & y;
    ss = ss >> 7;

    tab[0] = ss + 1;


    return tab;
}



int main(){
    int64_t num_secu;



    return 0;
}



/*
1
7
4
7
10
10
*/