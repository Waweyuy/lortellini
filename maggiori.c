#include <stdio.h>
	int main () {
	int x, y, z;

	//Input
	printf("Inserisci i tre valori\n");
	scanf("%d", &x);
	scanf("%d", &y);
	scanf("%d", &z);

	if (x > y && x > z) {
	    printf("Il valore maggiore è %d\n", x);
	} else if (y > x && y >  z) {
	    printf("Il valore maggiore è %d\n", y);
	} else if (z > x && z > y) {
	    printf("Il valore maggiore è %d\n", z);
	}

	return 0;
}


