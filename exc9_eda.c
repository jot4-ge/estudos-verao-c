#include <stdio.h>

int main() {
    int N;
    int maior_tamanho = 0; 
    char texto[101];       

    scanf("%d", &N); 

    for (int k = 0; k < N; k++) {
        scanf("%s", texto);

        int i = 0;
        while (texto[i] != '\0') {
            i++; 
        }

        if (i > maior_tamanho) {
            maior_tamanho = i;
        }
    }
    
    printf("%d\n", maior_tamanho);
    
    return 0;
}