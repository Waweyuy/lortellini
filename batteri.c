#include <stdio.h>

int main() {
    int h;
    double p0, pf;

    printf("Inserisci il numero di ore trascorse: ");
    scanf("%d", &h);

    printf("Inserisci la popolazione iniziale: ");
    scanf("%lf", &p0);

    pf = p0;

    for (int i = 0; i < h; i++) {
        pf *= 2;
    }

    printf("La popolazione finale dopo %d ore è: %.2lf\n", h, pf);

    return 0;
}
	
