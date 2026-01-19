#include <stdio.h>

int main() {

    int numero, parte1, parte2, soma, quadrado;

    scanf("%d", &numero);

    parte1 = numero / 100;
    parte2 = numero % 100;

    return 0;

    soma = parte1 + parte2;
    quadrado = soma * soma;

    if(quadrado == numero) {

        printf("tem a propriedade\n");
    }
    else {

        printf("nao tem a propriedade\n");
    }
    
    return 0;

}