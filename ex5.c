
#include <stdio.h>
#include <string.h>

void echo(void) {
    char buf[8];

    printf("Digite um texto: ");

    if (fgets(buf, sizeof(buf), stdin) != NULL) {
        buf[strcspn(buf, "\n")] = '\0';
        printf("Voce digitou: %s\n", buf);
    }
}

int main(void) {
    echo();

    return 0;
}