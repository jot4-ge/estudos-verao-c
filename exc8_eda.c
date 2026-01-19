#include <stdio.h>

int main(){
    char texto[101];

    scanf("%[^\n]", texto);

    int i = 0; 

    while (texto[i] != '\0') {
        i++; 
    }

    for(int j = i -1; j >= 0; j--) {
        printf("%c - %d\n", texto[j], texto[j]);
    }

    return 0;
}