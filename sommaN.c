#include <stdio.h>

int main() {
    int N;
    printf("Inserisci un intero positivo N: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Errore: N deve essere positivo.\n");
        return 0;
    }

    int somma = 0;

    for (int i = 1; i <= N; i++) {
        somma += i;
    }

    printf("La somma dei primi %d numeri è: %d\n", N, somma);

    return 0;
}





