#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "prev.h"


void asignarPrev(Nodo *t, Nodo **pprev) {
  if(t == NULL){
    return;
  }
  else if(t->izq == NULL && *pprev == NULL){
    t->prev = *pprev;
    t->prox = NULL;
    *pprev = t;
    printf("primer nodo=%d\n",t->x);
    asignarPrev(t->der, &*pprev);
  }
  else if(t->izq == NULL && *pprev != NULL){
    t->prev = *pprev;
    (t->prev)->prox = t;
    t->prox = NULL;
    *pprev = t;
    printf("segundo nodo=%d\n",t->x);
    printf("segundo prev=%d\n",(t->prev)->x);
    asignarPrev(t->der,&*pprev);
  }
  else{
  asignarPrev(t->izq, &*pprev);
  (t->izq)->prox = t;
  *pprev = t->izq;
  t->prev = *pprev;
  t->prox = NULL;
  *pprev = t;
  printf("Ultimo nodo= %d\n",(t->prev)->x);
  asignarPrev(t->der,&*pprev);
  }
}
