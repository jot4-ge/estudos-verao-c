#include <stdio.h>

int contaPares(char *s) {

    if (s[0] == '\0' || s[1] == '\0' || s[2] == '\0') {
        return 0;
    }
    
     if ( s[0] == s[2] ) { 
        return 1 + contaPares(s + 1);
    } 
     else {
        return contaPares(s + 1);
    }

}

int main() {
    char texto[201];
    
    scanf("%s", texto);

    int total = contaPares(texto);
    
    printf("%d\n", total);

    return 0;
}