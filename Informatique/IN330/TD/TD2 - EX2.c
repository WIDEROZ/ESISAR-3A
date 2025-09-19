#include <stdio.h>
#include <types.h>

int64_t codage_num(int s, int y, int m, int d, int c, int o){
    int64_t num_secu = 0;
    
    num_secu = s-1;
    num_secu = num_secu << 7;

    num_secu += y;
    
    
    num_secu += m;
    num_secu >> 4;
    
    num_secu += d;
    num_secu >> 7;
    
    num_secu += c;
    num_secu >> 10;
    
    num_secu += o;
    num_secu >> 10;
    
    return num_secu;
}

int* decodage_num(int64_t ss){
    

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