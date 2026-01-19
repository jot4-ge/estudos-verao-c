#include <stdio.h>
#include <string.h>

struct tipoBanda {
    char nome[80];
    int ano;
};

struct tipoShow {
    char nome[80];
    int qtd;
    struct tipoBanda bandas[100];
};

void pesquisarNomeBanda(char pesquisa[80], struct tipoShow shows[50], int n) {
    int encontrou = 0; // Flag para saber se achamos pelo menos uma vez
    
    for (int i = 0; i < n; i++) {

        for (int j = 0; j < shows[i].qtd; j++) {
            
            // strcmp retorna 0 se as strings forem idênticas
            if (strcmp(pesquisa, shows[i].bandas[j].nome) == 0) {
                
                printf("%s : ano %d\n", shows[i].nome, shows[i].bandas[j].ano);
                
                encontrou = 1; 
            }
        }
    }
    
    if (encontrou == 0) {
        printf("Banda nao cadastrada\n");
    }
}