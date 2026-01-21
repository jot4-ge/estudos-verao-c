#include <stdio.h>
#include <string.h>

void moveX(char *s) {
    if (*s == '\0') return;
    
    if (*s == 'x') {
        moveX(s + 1);
        printf("x");
    } else {
        printf("%c", *s);
        moveX(s + 1);
    }
}

int main() {
    char texto[101];
    
    // Remove o \n do final se existir
    fgets(texto, sizeof(texto), stdin);
    texto[strcspn(texto, "\n")] = '\0';
    
    moveX(texto);
    printf("\n");
    
    return 0;
}
