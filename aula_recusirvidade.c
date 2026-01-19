#include <stdio.h>

int fatorial(int n) {
    // 1. CASO BASE: Se n for 0 ou 1, a resposta é 1. Paramos aqui.
    if (n <= 1) {
        return 1;
    }
    // 2. PASSO RECURSIVO: n vezes o fatorial do antecessor
    else {
        return n * fatorial(n - 1);
    }
}

int main() {
    int resultado = fatorial(3);
    printf("Resultado: %d", resultado); // Imprime 6
    return 0;
}