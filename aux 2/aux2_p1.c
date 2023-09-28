#include <stdio.h>

int bits1(unsigned int n){
    unsigned int m = 1;
    int k = 0;
    for(int i = 0; i<sizeof(int)*8; i++){
        k = k + ((n>>i) & m);
    }
    return k;
} 

int main(){
    printf("para 0b00110 el numero de bits es 2 y obtenemos %d\n",bits1(0b00110));
    printf("para 0b01111 el numero de bits es 4 y obtenemos %d",bits1(0b01111));
}
