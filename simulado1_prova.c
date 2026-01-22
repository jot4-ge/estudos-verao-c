#include <stdio.h>

struct Arma {

    char nome[50];
    int dano;
    int durabilidade;

};

void reforcar(struct Arma *p) {

    p-> dano += 10;
    p-> durabilidade = 100;

}

int main() {

    struct Arma EspadaVelha = {
        .dano = 5,
        .durabilidade = 20,
        .nome = "Matadora de Bugs",

    };

    printf("--- ANTES DO FERREIRO ---\n");
    printf("Nome: %s\n", EspadaVelha.nome);
    printf("Dano: %d\n", EspadaVelha.dano);
    printf("Durabilidade: %d\n\n", EspadaVelha.durabilidade);

    reforcar(&EspadaVelha);

    printf("--- DEPOIS DO FERREIRO ---\n");
    printf("Nome: %s\n", EspadaVelha.nome);
    printf("Dano: %d\n", EspadaVelha.dano);         // Agora vai ser 15
    printf("Durabilidade: %d\n", EspadaVelha.durabilidade); // Agora vai ser 100

    return 0;

}