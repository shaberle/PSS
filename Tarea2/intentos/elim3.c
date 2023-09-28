#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "elim.h"

void eliminar(char *str, char *pat){
  char *puntstr = str;
  char *puntfin = str + strlen(str);
  char *puntpat = pat;
  char *puntsig = str + strlen(pat);
  int cnt = 0;
  while (puntstr<=puntfin){
    if (strcmp()){
      puntstr++;
      puntsig++;
    }
    while(*puntstr == *puntpat && *puntstr!=0){
      puntstr++;
      puntpat++;
      cnt++;
    }
    if (0<cnt && cnt<strlen(pat)){
      puntstr = puntstr-cnt+1;
    }
    if (cnt == strlen(pat)){
      puntstr = puntstr - cnt;
      memmove(puntstr,puntstr+strlen(pat),strlen(str)-(puntstr-str)-strlen(pat)+1);
    }
    cnt = 0;
    puntpat = pat;
  }
}

char *eliminados(char *str, char *pat) {
  return "hola";
}