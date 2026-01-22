#include <stdio.h>

int main() {

    float notas[5] = {5.5, 8.0, 9.5, 4.0, 7.2};
    float maiorNota = notas[0];

    for (int i = 1; i < 5; i++) {

        if (notas[i] > maiorNota) {

            maiorNota = notas[i];
        }
    }
    printf("A maior nota da turma foi: %.1f\n", maiorNota);

    return 0;

}