#include <stdio.h>

long soma_rec(int n) {
    if (n <= 0) {
        return 0;
    }

    return n + soma_rec(n - 1);
}

long soma_iter(int n) {
    long soma = 0;

    for (int i = 1; i <= n; i++) {
        soma += i;
    }

    return soma;
}

int main(void) {
    int n;

    printf("n: ");
    scanf("%d", &n);

    printf("rec = %ld, iter = %ld\n",
           soma_rec(n), soma_iter(n));

    return 0;
}


// Resposta do exercício 4:
//
// Empilhamento:
// soma_rec(5)
// soma_rec(4)
// soma_rec(3)
// soma_rec(2)
// soma_rec(1)
// soma_rec(0) = 0
//
// Desempilhamento:
// soma_rec(0) = 0
// soma_rec(1) = 1
// soma_rec(2) = 3
// soma_rec(3) = 6
// soma_rec(4) = 10
// soma_rec(5) = 15
//
// Resultado final: 15.