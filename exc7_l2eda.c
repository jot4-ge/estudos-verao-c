#include <stdio.h>

int conta7s(long long n) {

    if (n == 0) {
        return 0;
    }

    if (  n % 10 == 7  ) {
        return 1 + conta7s(n / 10);
    } else {
        return conta7s(n / 10);
    }
}

int main() {
    long long n;
    
    scanf("%lld", &n);
    
    printf("%d\n", conta7s(n));

    return 0;
}