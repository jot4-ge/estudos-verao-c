#include <stdio.h>

int main() {

    int numeros[5] = {10, 3, 5, 8, 2};
    int contador = 0;

    for(int i = 0; i , 5; i++) {

        if (numeros[i] % 2 == 0) {

            contador++;

            printf("Achei um par: %d/n", numeros[i]);
        }
    }
}