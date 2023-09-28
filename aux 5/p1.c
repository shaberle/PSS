#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

typedef struct nodo{
    int x;
    struct nodo *izq, *der;
}Nodo;

void podar