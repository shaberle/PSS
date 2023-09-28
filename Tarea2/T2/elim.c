#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "elim.h"

void eliminar(char *str, char *pat){
  char *puntstr = str;
  int lenpat = strlen(pat);

  if (strlen(pat)==0){
      return;
  }
  while((puntstr=strstr(str,pat))!=NULL){
    char *puntorigen = puntstr + lenpat;
    char *puntdestino = puntstr;
    while(*puntorigen != '\0'){
      *puntdestino = *puntorigen;
      puntdestino++;
      puntorigen++;
    }
    *puntdestino = '\0';
  }
}

char *eliminados(char *str, char *pat) {
  int lenpat = strlen(pat);
  int lenstr = strlen(str);
  int cnt = 0;
  char *puntstr = str;
  
  if (strlen(pat)==0){
      char *resultado = malloc(lenstr+1);
      strcpy(resultado,str);
      return resultado;
  }
  while((puntstr=strstr(puntstr,pat))!=NULL){
    cnt += 1;
    puntstr += lenpat;
  }
  char *resultado = malloc(lenstr - (cnt*lenpat) + 1);
  puntstr = str;
  char *puntres = resultado;
  while (*puntstr) {
    if (strstr(puntstr, pat) == puntstr) {
        puntstr += lenpat;
    } else {
        *puntres++ = *puntstr++;
    }
  }
  *puntstr = '\0';
  return resultado;
}