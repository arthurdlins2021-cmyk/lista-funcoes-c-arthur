#include <stdio.h>

void divmod(int a, int b, int *q, int *r) {
    if (b != 0) {
        *q = a / b;
        *r = a % b;
    }
}

int main(void) {
    int a, b, q, r;

    printf("Dividendo e divisor: ");
    scanf("%d %d", &a, &b);

    if (b == 0) {
        printf("Erro: o divisor nao pode ser zero.\n");
        return 1;
    }

    divmod(a, b, &q, &r);

    printf("Quociente: %d, Resto: %d\n", q, r);

    return 0;
}