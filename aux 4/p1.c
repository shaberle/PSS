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

void append ( Nodo ** pa , Nodo * b ){
    if(*pa == NULL){
        *pa = b;
    }else{
        pa = &(*pa)->sgte;
        append(pa,b);
    }
    return;
}

int main(){
  printf("ejemplo 1\n");
  int array_a[] =  {3, 1};
  Nodo *a = createNodeList(array_a, 2);
  printf("a = ");
  printList(a);
  int array_b[] = {7, 8, 4};
  Nodo *b = createNodeList(array_b, 3);
  printf("b = ");
  printList(b);
  append(&a, b);
  printf("a = ");
  printList(a);
  printf("ejemplo 2\n");
  Nodo *a2 = NULL;
  printf("a = ");
  printList(a2);
  int array_b2[] = {7, 8, 4};
  Nodo *b2 = createNodeList(array_b2, 3);
  printf("b = ");
  printList(b2);
  append(&a2, b2);
  printf("a = ");
  printList(a2);
  return 0;
}
