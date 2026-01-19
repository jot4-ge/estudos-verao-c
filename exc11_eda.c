#include <stdio.h>

int main() {
    int total_o = 0; 
    char texto[101]; 

    while (scanf("%s", texto) != EOF) {

        int i = 0; 
        
        while (texto[i] != '\0') {
            
            if (texto[i] == 'o') {
                total_o++;
            }
            
            i++; 
        }
    }
    
    printf("%d\n", total_o);

    return 0;
}