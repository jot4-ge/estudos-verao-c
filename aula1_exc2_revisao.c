#include <stdio.h>

int main() {

    int numero, auxiliar, invertido, digito;

    scanf("%d", &numero);

    auxiliar = numero;
    invertido = 0;

    while (auxiliar > 0) {
        digito = auxiliar % 10;          // Pega o último (Ex: 123 -> pega 3)
        invertido = (invertido * 10) + digito;  // Empurra pra esquerda e soma (0 -> 3)
        auxiliar = auxiliar / 10;   // Corta o último (Ex: 123 -> vira 12)
    }

    if (numero == invertido) {
        printf("eh capicua\n");
    } else {
        printf("nao eh capicua\n");
    }

    return 0;
}