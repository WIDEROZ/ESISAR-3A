#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

// TP 1 de IN330 -- exercices préparatoires
// LG et SM pour IN330, 2024


int parse_arg(const char *arg){
  if (('0' <= *arg && *arg <= '9') || *arg == '+' || *arg == '-'){
    return atoi(arg);
  }
  else if(*arg == 'x'){ // x0 - x31
    return atoi(arg+1);
  }
  else if(*arg == 'z'){ // 0
    return 0;
  }
  else if(*arg == 'r'){ // ra
    return 1;
  }
  else if(*arg == 'g'){ // gp
    return 3;
  }
  else if(arg[0] == 't'){
    if('0' <= arg[1] && arg[1] <= '2'){ // t0-t2
      return 5 + atoi(arg + 1);
    }
    else if ('3' <= arg[1] && arg[1] <= '6'){ // t3 - t6
      return 28 + atoi(arg + 1) - 3;
    }
    else{ // tp
      return 4;
    }
  }
  else if(*arg == 'a'){ //a0-a7
      return 10 + atoi(arg + 1);
  }
  else if(*arg == 's'){
    if(('2' <= arg[1] && arg[1] <= '9') || arg[2] != '\0'){ // s2-s11
      return 18 + atoi(arg + 1) - 2;
    }
    else if('0' <= arg[1] && arg[1] <= '1'){ // s0-s1
      return 8 + atoi(arg + 1);
    }
    else{ // sp
      return 2;
    }
  }

  return -1;
}