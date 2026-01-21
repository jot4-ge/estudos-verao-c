#include <stdio.h>

void print_ticks(int length) {
    printf("."); 
    for (int i = 0; i < length; i++) {
        printf("-");
    }
    printf("\n");
}

void draw_ruler(int n) {
    if (n <= 0) return;
    
    draw_ruler(n - 1);
    
    print_ticks(n);
    
    draw_ruler(n - 1);
}

int main() {
    int n;
    scanf("%d", &n);
    
    if (n > 0) {
        draw_ruler(n);
    }
    
    return 0;
}