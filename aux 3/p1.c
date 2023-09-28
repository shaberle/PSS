#include <stdio.h>

void to_lower(char* s);
void to_upper(char* s);

void to_lower(char* s) {
    char *p = s;
    while(*p != '\0'){
        if (*p >= 'A' && *p<='Z'){
            *p = *p + 'a' - 'A';
        }
    p++;
    }
    return;
}

void to_upper(char* s) {
    char *p = s;
    while(*p != '\0'){
        if (*p >= 'a' && *p <='z'){
            *p = *p + 'A' - 'a';
        }
    p++;
    }
    return;
}

int main(int argc, char *argv[]) {
    char test[] = "cHanCHo";
    char test2[] = "cHanCHo";

    to_lower(test);
    printf("%s\n", test);

    to_upper(test2);
    printf("%s\n", test2);
}