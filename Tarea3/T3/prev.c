#include <stddef.h>

#include "prev.h"

void asignarPrev(Nodo *t, Nodo **pprev) {
  if(*t->izq == NULL && *t->prev == NULL){
    *t->prev = *pprev;
    *t->prox = NULL;
    *pprev = *t;
    asignarPrev(*t-)
  }
  else if(*t->izq == NULL && *t->prev != NULL){
    *t->prox = NULL;
    *t->prev = *pprev;
    *t->prox = NULL;
    *pprev = *t;
    asignarPrev(*t-)
  }
  else{
  asignarPrev(*t->izq, &*pprev);
  }

}
