#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// TP 1 de IN330 -- exercices préparatoires
// LG et SM pour IN330, 2024

void simplify_punct(char *str) {
  while(*str != 0){
    if(*str == '(' || *str == ')' || *str == ','){
      *str = ' ';
    }

    str++;
  }
}

bool is_comment(const char *str) {
  if (*str == '#'){
    return true;
  }  
  return false;
}

bool split_line(const char *l, char *ins, char *arg1, char *arg2, char *arg3) {
  // TODO : Initialiser ins, arg1, arg2, arg3 avec strcpy()
  // TODO : Tester si la ligne est utile
  // TODO : Utiliser sscanf()
  char chaine_init[16] = {0};
  strcpy(ins, chaine_init);
  strcpy(arg1, chaine_init);
  strcpy(arg2, chaine_init);
  strcpy(arg3, chaine_init);

  int res = sscanf(l, "%s%s%s%s", ins, arg1, arg2, arg3);
  
  if(res != -1 && (!is_comment(l))){
    return true;
  }
  
  return false;
}