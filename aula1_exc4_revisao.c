#include <stdio.h>

int main() {
    int op;      // Guarda a opção (1, 2, 3, 4 ou 5)
    float n1, n2; // Guarda os números para a conta

    while (1) {
        printf("\n1(+) 2(-) 3(*) 4(/) 5(Sair): ");
        scanf("%d", &op);

        if (op == 5) {
            break; // Sai do while imediatamente
        }

        printf("Digite dois numeros: ");
        scanf("%f %f", &n1, &n2);

        if (op == 1) {
            printf("Resultado: %f\n", n1 + n2);
        }

        if (op == 2) {
            printf("Resultado: %f\n", n1 - n2);
        }

        if (op == 3) {
            printf("Resultado: %f\n", n1 * n2);
        }

        if (op == 4) {
            printf("Resultado: %f\n", n1 / n2);
        }
        
    }

    return 0;
}