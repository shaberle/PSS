#include "string.h"
#include "stdio.h"

void reverse(char *s);

void reverse(char *s) {
    char q[strlen(s)+1];
    strcpy(q,s);
    char *aux = q + strlen(q) - 1;
    while(*s){
        *s = *aux;
        s++;
        aux--;
    }
    *s = '\0';
}

int main(int argc, char *argv[]) {
    char test[] = "dinosaurio";

    reverse(test);
    printf("%s\n", test);
}