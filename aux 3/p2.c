#include "string.h"
#include <stdio.h>

int palindromo(char* s);

int palindromo(char* s) {
    char *aux = s + strlen(s) - 1;
    while(*s){
        if(*s != *aux){
            return 0;
        }
        s++;
        aux--;
    }
    return 1;  
}

int main(int argc, char *argv[]) {
    char test[] = "somos";
    char test2[] = "hola";

    int res1 = palindromo(test);
    printf("%s es un palindromo?: %d\n", test, res1);

    int res2 = palindromo(test2);
    printf("%s es un palindromo?: %d\n", test2, res2);
}