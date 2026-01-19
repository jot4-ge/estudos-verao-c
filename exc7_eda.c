#include <stdio.h>

int main(){
    char texto[1001];

    scanf("%s", texto);

    int i = 0; 

    while (texto[i] != '\0') {
        i++; 
    }
    
    printf("%d\n", i);

}