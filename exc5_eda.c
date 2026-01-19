#include <stdio.h>

int main() {
    int F, L; // F = Quantidade de Fileiras, L = Lugares por fileira
    // A matriz representa a sala. O enunciado diz que o máximo é 20x25.
    // Vamos usar 0 para vazio e 1 para ocupado.
    int sala[20][25]; 

    // 1. Ler o tamanho da sala
    scanf("%d %d", &F, &L);

    for (int i = 0; i < F; i++) {
        for(int j = 0; j < L; j++) {
            sala[i][j] = 0;
        }

    }
    // --- TAREFA 2: LER OS INGRESSOS ---
    char letra_lida;
    int numero_lido;

    // O espaço antes do %c (" %c") é vital para ignorar o 'Enter' da linha anterior
    while (scanf(" %c%d", &letra_lida, &numero_lido) != EOF) {
        
        int indice_linha = letra_lida - 'A'; 
        int indice_coluna = numero_lido - 1; 
        sala[indice_linha][indice_coluna] = 1;     
    }

    printf("  "); 
    for (int j = 1; j <= L; j++) {
        printf("%02d ", j);
    }
    printf("\n");

    for (int i = F - 1; i >= 0; i--) {
        
        // 1. Imprime a Letra da fileira (ex: 'E ')
        printf("%c ", 'A' + i);

        // 2. Loop dos LUGARES (Corre da esquerda para direita)
        for (int j = 0; j < L; j++) {
            
            // Verifica se está vazio (0) ou ocupado (1)
            if (sala[i][j] == 0) {
                printf("-- "); // Vazio
            } else {
                printf("XX "); // Ocupado
            }
        }
        
        // Quebra a linha ao terminar de desenhar a fileira atual
        printf("\n");
    }

    return 0;
}