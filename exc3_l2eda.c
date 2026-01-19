#include <stdio.h>

// Função auxiliar RECURSIVA para imprimir os traços
// Substitui o laço 'for' para atender estritamente ao requisito de recursão
void imprimeTracos(int qtd) {
    if (qtd == 0) {
        return;
    }
    printf("-");
    imprimeTracos(qtd - 1);
}

// Função principal da régua
void regua(int n) {
    // Caso Base: Se n=0, não desenha nada
    if (n == 0) {
        return;
    }

    // 1. Desenha a régua menor (n-1)
    regua(n - 1);

    // 2. Desenha o centro da ordem atual
    // O padrão identificado é: Um ponto seguido de (n-1) traços
    printf(".");
    imprimeTracos(n - 1);

    // 3. Desenha a régua menor (n-1) novamente
    regua(n - 1);
}

int main() {
    int n;
    
    // Lê a entrada conforme especificado 
    if (scanf("%d", &n) == 1) {
        // Gera a régua
        regua(n);
        // A saída geralmente espera uma quebra de linha ao final
        printf("\n");
    }

    return 0;
}