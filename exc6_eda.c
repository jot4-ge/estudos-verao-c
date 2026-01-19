#include <stdio.h>

int main() {
    char nome[101];
    
    scanf("%[^\n]", nome);

    int i = 0;

    while (nome[i] != ' ' && nome[i] != '\0') {
        char letra = nome[i];
        // Na tabela ASCII, 'a' é 97 e 'A' é 65. A diferença é 32.
        // Se a letra for maiúscula, somamos 32 para virar minúscula.
        if (letra >= 'A' && letra <= 'Z') {
            letra = letra + 32;
        }
        
        printf("%c", letra);
        i++;
    }

    printf(".");

    int tamanho = 0;
    while (nome[tamanho] != '\0') {
        tamanho++;
    }
    // último espaço de trás para frente
    int inicio_sobrenome = 0;
    for (int j = tamanho - 1; j >= 0; j--) {
        if (nome[j] == ' ') {
            inicio_sobrenome = j + 1; // O sobrenome começa logo depois do espaço
            break;
        }
    }

    int k = inicio_sobrenome;
    while (nome[k] != '\0') {
        char letra = nome[k];
        
        // Conversão para minúsculo novamente
        if (letra >= 'A' && letra <= 'Z') {
            letra = letra + 32;
        }
        
        printf("%c", letra);
        k++;
    }

    // Finaliza com o domínio
    printf("@unb.br\n");

    return 0;
}