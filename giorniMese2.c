#include <stdio.h>
	int main() {
	int x;
	
	printf("Inserisci un mese\n");
	scanf("%d", &x);

	if (x == 1 || x == 3 || x == 5 || x == 7 || x == 8 || x == 10 || x == 12) {
	printf("Il mese ha 31 giorni\n");
	} else if (x == 4 || x == 6 || x == 9 || x == 11) {
	printf("Il mese ha 30 giorni\n");
	} else if (x == 2) {
	printf("Febbraio ha 28 o 29 giorni\n");
	}

	return 0;
}
