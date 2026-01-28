#include <stdio.h>

int main() {
    int n, i = 0;
    double numero, somma = 0.0;

    printf("Quanti numeri vuoi sommare? ");
    scanf("%d", &n);

    while (i < n) {
        printf("Inserisci il numero %d: ", i + 1);
        scanf("%lf", &numero);
        somma += numero;
        i++;
    }

    printf("La somma dei numeri inseriti è: %.2lf\n", somma);

    return 0;
}

