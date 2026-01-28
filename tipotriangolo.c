#include <stdio.h>
	int main() {
    	float l1, l2, l3;

    // Input dei lati
    printf("Inserisci i tre lati del triangolo:\n");
    scanf("%f %f %f", &l1, &l2, &l3);

        // Controllo del tipo di triangolo
        if (l1 == l2 && l2 == l3) {
            printf("Il triangolo e' equilatero\n");
        } else if (l1 == l2 || l1 == l3 || l2 == l3) {
            printf("Il triangolo e' isoscele\n");
        } else {
            printf("Il triangolo e' scaleno\n");
        }
	return 0;
}

