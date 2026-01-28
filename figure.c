#include <stdio.h>

int main() {
    int scelta;
    float base, altezza, lato;
    float area, perimetro;

    printf("Scegli cosa calcolare:\n");
    printf("1 - Rettangolo\n");
    printf("2 - Quadrato\n");
    printf("Scelta: ");
    scanf("%d", &scelta);

    if (scelta == 1) {
        printf("Inserisci la base del rettangolo: ");
        scanf("%f", &base);
        printf("Inserisci l'altezza del rettangolo: ");
        scanf("%f", &altezza);

        area = base * altezza;
        perimetro = 2 * (base + altezza);

        printf("L'area del rettangolo è: %.2f\n", area);
        printf("Il perimetro del rettangolo è: %.2f\n", perimetro);
    }
    else if (scelta == 2) {
        printf("Inserisci il lato del quadrato: ");
        scanf("%f", &lato);

        area = lato * lato;
        perimetro = 4 * lato;

        printf("L'area del quadrato è: %.2f\n", area);
        printf("Il perimetro del quadrato è: %.2f\n", perimetro);
    }
    else {
        printf("Errore: scelta non valida!\n");
	return 1;
    }

    return 0;
}


