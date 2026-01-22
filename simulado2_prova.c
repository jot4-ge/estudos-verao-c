#include <stdio.h>

struct Conta {

    char titular[50];
    float saldo;

};

void depositar(struct Conta *p, float valor ) {

    p-> saldo += valor;

}

int main() {

    struct Conta c1 = {
        .saldo = 100,
        .titular = "Lucas",

    };

    printf("--- SALDO ANTES ---\n");
    printf("Titular: %s\n", c1.titular);
    printf("Saldo: R$ %.2f\n", c1.saldo);

    depositar(&c1, 50.50);

    printf("--- SALDO APÓS DEPOSITO ---\n");
    printf("Titular: %s\n", c1.titular);
    printf("Saldo: R$ %.2f\n", c1.saldo);

    return 0;


}