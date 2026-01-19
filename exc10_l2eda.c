#include <stdio.h>

void verificaBissexto(int *ano, int *ehBissexto) {
    if ((*ano % 400 == 0) || (*ano % 4 == 0 && *ano % 100 != 0)) {
        *ehBissexto = 1; 
    } else {
        *ehBissexto = 0; 
    }
}

void valida(int *dia, int *ehBissexto, int *valido) {
    *valido = 1; 

    if (*dia < 1) {
        *valido = 0;
    }
    else if (*ehBissexto == 1 && *dia > 366) {
        *valido = 0;
    }
    else if (*ehBissexto == 0 && *dia > 365) {
        *valido = 0;
    }
}

void calculaDiaMes(int *diaTotal, int *diaFinal, int *mesFinal, int *ehBissexto) {

    int diasPorMes[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (*ehBissexto == 1) {
        diasPorMes[2] = 29;
    }

    int diasRestantes = *diaTotal;
    int mesAtual = 1;

    while (mesAtual <= 12 && diasRestantes > diasPorMes[mesAtual]) {
        diasRestantes = diasRestantes - diasPorMes[mesAtual];
        mesAtual++;
    }

    *diaFinal = diasRestantes;
    *mesFinal = mesAtual;
}

int main() {
    int diaEntrada, anoEntrada;
    int diaFinal, mesFinal;
    int bissexto;
    int ehValido;

    scanf("%d %d", &diaEntrada, &anoEntrada);

    verificaBissexto(&anoEntrada, &bissexto);

    valida(&diaEntrada, &bissexto, &ehValido);

    if (ehValido == 1) {
        calculaDiaMes(&diaEntrada, &diaFinal, &mesFinal, &bissexto);

        printf("%02d/%02d/%04d\n", diaFinal, mesFinal, anoEntrada);
    } else {
        printf("Entradas invalidas!\n");
    }

    return 0;
}