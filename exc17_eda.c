#include <stdio.h>

int validaPeso(double pesoKg) {
    if (pesoKg < 0) {
        return 0;
    } else {
        return 1;
    }
}

void fazGrama(double pesoKg) {
    double gramas = pesoKg * 1000.0;
    printf("%.4lf\n", gramas);
}

void fazTonelada(double pesoKg) {
    double toneladas = pesoKg / 1000.0;
    printf("%.4lf\n", toneladas);
}