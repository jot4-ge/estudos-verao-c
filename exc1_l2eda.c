#include <stdio.h>

void troca(char *s) {
    
    if (*s == '\0') {
        return;
    }

    if (*s == 'x') {

        printf("y");
    }

    else {

        printf("%c", *s);

    }

    troca(s + 1);
}

int main() {
    char texto[81]; 

    scanf("%s", texto);

    troca(texto);
    
    printf("\n");

    return 0;
}