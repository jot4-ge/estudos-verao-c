#include <stdio.h>

int main() {
    int n;
    
    scanf("%d", &n);
    
    // --- PIRÂMIDE 1 ---
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%02d ", i);
        }
        printf("\n");
    }

    // Linha em branco para separar as pirâmides
    printf("\n");

    // --- PIRÂMIDE 2 ---
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%02d ", j);
        }
        printf("\n");
    }

    return 0;
}