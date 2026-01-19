#include <stdio.h>

int faz_conta_direito(int parcelas, char op) {
    int resultado;
    int numero_atual;

    scanf("%d", &resultado);

    for (int i = 1; i < parcelas; i++) {
        scanf("%d", &numero_atual);

        if (op == '+') {
            resultado = resultado + numero_atual;
        } else {
            resultado = resultado - numero_atual;
        }
    }

    return resultado;
}