#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "elim.h"

void eliminar(char *str, char *pat){
    int strlen = strlen(str);
    int patlen = strlen(pat);
    char *puntstr = str;
    char *puntpat = pat;
    char *puntaux = str + strlen;
    while (*puntstr != 0){
        *puntaux = 0;
        if (*puntstr==*puntpat){
            puntstr = puntstr + patlen    
        }



    }
}


int main(){
  char *p = "hola";
  eliminar("piolt","ol");
  printf("%s",p);
  return 0;