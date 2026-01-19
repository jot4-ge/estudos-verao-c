#include <stdio.h>

int contaVogais(char *s) {

    if (*s == '\0') {
        return 0;
    }

    if (*s == 'A' || *s == 'E' || *s == 'I' || *s == 'O' || *s == 'U') {

        return 1 + contaVogais(s + 1);
    } else {

        return contaVogais(s + 1);
    }
}

int main() {
    char palavra[101]; 

    scanf("%s", palavra);

    int total = contaVogais(palavra);
    
    printf("%d\n", total);

    return 0;
}