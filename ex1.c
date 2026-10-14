#include <stdio.h>

int maior(int a, int b);
long fatorial(int n);

int maior(int a, int b) {
    if (a > b) {
        return a;
    }
    return b;
}

long fatorial(int n) {
    long resultado = 1;

    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }

    return resultado;
}

int main(void) {
    int a, b, n;

    printf("Dois inteiros: ");
    scanf("%d %d", &a, &b);

    printf("Maior: %d\n", maior(a, b));

    printf("n para o fatorial: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Nao existe fatorial para numero neatgivo.\n");
    } else {
        printf("Fatorial: %ld\n", fatorial(n));
    }

    return 0;
}