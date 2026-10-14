#include <stdio.h>

void troca(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void) {
    int x, y;

    printf("Dois inteiros: ");
    scanf("%d %d", &x, &y);

    troca(&x, &y);

    printf("Depois: x = %d, y = %d\n", x, y);

    return 0;
}


// Resposta do exercício 2:
// A troca funciona por referência porque usamos ponteiros
// para modificar os valores originais de x e y.
// Se fosse por valor, seriam alteradas apenas cópias.