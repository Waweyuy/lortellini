#include <stdio.h>
#include <math.h>  // Include per pow()

int main() {
    int b, e;
    double risultato;

    printf("Inserisci la base: ");
    scanf("%d", &b);

    printf("Inserisci l'esponente: ");
    scanf("%d", &e);

    risultato = pow(b, e); // calcola b^e

    printf("Il risultato di %d^%d è: %lf\n", b, e, risultato);

    return 0;
}

