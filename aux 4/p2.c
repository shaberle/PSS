#include "stdio.h"
#include "stdlib.h"
#include "string.h"

typedef struct nodo {
    int info ;
    struct nodo * sgte ;
} Nodo ;

// Función que imprime una lista enlazada
void printList ( Nodo *n ) {
  if ( n == NULL ) { // Si el nodo es nulo, se termina la función
    printf ( "\n" );
    return;
  }
  printf ( "%d " , n->info ); // Se imprime la información del nodo
  printList ( n->sgte ); // Se llama a la función con el siguiente nodo
}

// Función que crea una lista enlazada a partir de un arreglo y el tamaño del arreglo
Nodo *createNodeList(int *list, int size) {
  Nodo *n = malloc(sizeof(Nodo)); // Se reserva memoria para el nodo
  n->info = *list; // Se asigna la información del nodo
  if (size > 1) { // Si el tamaño es mayor a 1, se crea el siguiente nodo
    n->sgte = createNodeList(list + 1, size - 1);
  }
  else { // Si el tamaño es 1, se asigna NULL al siguiente nodo
    n->sgte = NULL;
  }
  return n; // Se retorna el nodo
}

typedef struct cola{
    Nodo *primero;
    Nodo *ultimo;
}Cola;

Cola *creaCola(){
    Cola * c = malloc(sizeof(Cola));
    c->primero = NULL;
    c->ultimo = NULL;
    return c;
}

void put(Cola *q, int x){
    Nodo *n = malloc(sizeof(Nodo));
    n->info = x;
    n->sgte = NULL;
    if (q->primero == NULL){
        q->primero = n;
        q->ultimo = n;
        return;
    }
    else{
        Nodo *pu = q->ultimo;  // Se obtiene el último nodo de la cola
        pu->sgte = n; // Se asigna el nodo como el siguiente nodo del último nodo
        q->ultimo = n; // Se asigna el nodo como el último nodo de la cola
        return;
    }
}

int get(Cola *q){
    if (q->primero == NULL){
        return -1;
    }
    Nodo *res = q->primero;
    int res1 = res->info;
    q->primero = res->sgte;
    if (res->sgte = NULL){
        q->ultimo == NULL;
    }
    free(res);
    return res1;
}

void freeCola(Cola *q){

}

void printCola(Cola *q){
  printf("Cola: ");
  if (q->primero == NULL){
    printf("Vacio\n");
    return;
  }
  Nodo *p = q->primero;
  printf("%d ", p->info);
  printList(p->sgte);
}


int main(){
  Cola *q = creaCola();
  printCola(q);
  int n =1;
  put(q, n);
  printCola(q);
  put(q, 2);
  put(q, 3);
  printCola(q);
}
