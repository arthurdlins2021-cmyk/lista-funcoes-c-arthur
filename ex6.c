#include <stdio.h>
#include "mathlib.h"

int main(void) {
    int a, b, n;

    printf("Digite dois inteiros: ");
    scanf("%d %d", &a, &b);

    printf("Maior: %d\n", maior(a, b));

    printf("Digite um numero para calcular o fatorial: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Nao existe fatorial de numero negativo.\n");
    } else {
        printf("Fatorial: %ld\n", fatorial(n));
    }

    return 0;
}


// Resposta do exercício 6:
//
// Ao esquecer mathlib.o, o ligador apresenta o erro
// "undefined reference to maior" e
// "undefined reference to fatorial".
//
// Isso acontece porque as implementações dessas funcões
// não foram incluídas na ligação.