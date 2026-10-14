#include "mathlib.h"

int maior(int a, int b) {
    if (a > b) {
        return a;
    }

    return b;
}

long fatorial(int n) {
    if (n < 0) {
        return -1;
    }

    long resultado = 1;

    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }

    return resultado;
}