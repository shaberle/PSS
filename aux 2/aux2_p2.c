#include <stdio.h>

int posicionBits(int x, int p, int n){
   int m = ~((-1)<<n);
   for(int i = 0; i<sizeof(int)*8;i++){
    unsigned int aux = (x>>i) & m;
    if ( aux == p){
        return i;
    }
   }
   return -1;
}

int main(){
    printf("para 0b00110 y el patron 0b11 de largo 2 el indice es 1 y lo que obtenemos es %d\n",posicionBits(0b00110,0b11,2));
    printf("para 0b00110 y el patron 0b110 de largo 3 el indice es 0 y lo que obtenemos es %d\n",posicionBits(0b00110,0b110,3));
    printf("para 0b00110 y el patron 0b11 de largo 3 el indice es -1 y lo que obtenemos es %d\n",posicionBits(0b00110,0b111,3));
}