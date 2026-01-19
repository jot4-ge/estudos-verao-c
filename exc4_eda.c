#include <stdio.h>

int main() {
    int D; 
    int ano, sem, m; 
    int codigo, matriculados, aprovados; 
    
    scanf("%d", &D);
    
    while (scanf("%d %d %d", &ano, &sem, &m) != EOF) {
        
        int reprovacoes[D];
        int maior_reprovacao = 0;
        
        for (int i = 0; i < D; i++) {
            reprovacoes[i] = -1;
        }
        
        for (int i = 0; i < m; i++) {
            scanf("%d %d %d", &codigo, &matriculados, &aprovados);
            int num_reprovados = matriculados - aprovados;
            
            reprovacoes[codigo] = num_reprovados;
            
            if (num_reprovados > maior_reprovacao) {
                maior_reprovacao = num_reprovados;
            }
        }
        
        printf("%d/%d\n", ano, sem);
        
        for (int i = 0; i < D; i++) {
            if (reprovacoes[i] == maior_reprovacao) {
                printf("%d ", i);
            }
        }
        printf("\n\n");
        
    } 
    // Se tentar acessar 'reprovacoes' aqui fora, vai dar erro.

    return 0;
}