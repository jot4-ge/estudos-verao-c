#include <stdio.h>

void moveX(char *s) {
    if (*s == '\0') return;

    if (*s == 'x') {
        moveX(s + 1);
        printf("%c", *s);
    } else {
        printf("%c", *s);
        moveX(s + 1);
    }
}

int main() {
    char texto[101];
    
    scanf("%[^\n]", texto);

    moveX(texto);
    printf("\n");

    return 0;
}

//Essa deu wrong answer 90p, ou seja, por pouco não está certa, tirar duvida com profesor!!