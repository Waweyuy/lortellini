#include <stdio.h>
	int main() {
    	int x, y;

    //Input dei due numeri
    printf("Inserisci il primo numero\n");
    scanf("%d", &x);

    printf("Inserisci il secondo numero\n");
    scanf("%d", &y);

    //Output
    if (y == 0) {
        printf("Errore: il secondo numero non può essere zero.\n");
        return 1; // Uscita con errore
    }

    if (x % y  == 0) {
          printf("Il primo numero è multiplo del secondo\n");
	} else {
	  printf("Il primo numero non è multiplo del secondo\n");
	}

	return 0;
}
