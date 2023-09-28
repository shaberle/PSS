#include "stdio.h"
#include "stdlib.h"
#include "string.h"

typedef struct nodo {
    int info ;
    struct nodo * sgte ;
} Nodo ;

typedef struct pila {
    Nodo *ultimo;
}Pila;

Pila creaPila(){
    Pila *p = malloc(sizeof(Nodo));
    p->ultimo = NULL;
    return p;
}

void push(Pila *s, int x){
    Nodo *n = malloc(sizeof(Nodo));
    n->info = x
    n->sgte = NULL
    if (s->ultimo == NULL){
        s->ultimo = n;
    }
    else{
        n->sgte = s->ultimo;
        s->ultimo = n;
    } 
}

