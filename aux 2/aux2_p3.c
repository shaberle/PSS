#include <stdio.h>

unsigned repBits(unsigned x, int i, int k, unsigned val){
    unsigned m1 = ~(-1<<k);
    unsigned m2 = m1 << i;
    val = val << i;
    x = x & ~m2;
    x = x | val;
    return x;
}

int main() {
    unsigned x = 0b1110;
    printf("Llamando repBits(0b1110, 0, 4, 0b1010) deberia de dar 0b1010 = 10 y el valor que da es %d\n", repBits(x,0,4,0b1010));
    printf("Llamando repBits(0b1110, 0, 4, 0b1111) deberia de dar 0b1111 = 15 y el valor que da es %d\n", repBits(x,0,4,0b1111));
    printf("Llamando repBits(0b1110, 4, 4, 0b1111) deberia de dar 0b11111110 = 254 y el valor que da es %d\n", repBits(x,4,4,0b1111));
    printf("Llamando repBits(0b1110, 1, 3, 0b0) deberia de dar 0b0 = 0 y el valor que da es %d\n", repBits(x,1,3,0b0));
}