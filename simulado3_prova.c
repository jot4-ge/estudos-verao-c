#include <stdio.h>

int main() {

char nome[50];

printf("Digite seu nome: ");

fgets(nome, 50, stdin);

for(int i =0; i < 50; i++) {

    if (nome[i] == '\n') {
        nome[i] = '\0';
        break;
    }
}

if (nome[0] >= 'a' && nome[0] <= 'z') {

    nome[0] -= 32;
}

printf("Nome formado: [%s]\n", nome);

return 0;

}