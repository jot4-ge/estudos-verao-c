#include <stdio.h>

void reverso(char *s) {

    if (*s == '\0') {
        return;
    }

    reverso(s + 1);

    printf("%c", *s);
}

int main() {
    char texto[501]; 

    scanf("%s", texto);

    reverso(texto);
    
    printf("\n");

    return 0;
}