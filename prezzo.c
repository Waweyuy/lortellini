#include <stdio.h>
	int main() {
	int c, q;
	float x, y;

	//Input 1
	printf("Inserisci il costo unitario\n");
	scanf("%d", &c);

	//Input 2
	printf("Inserisci la quantità\n");
	scanf("%d", &q);

	//Output 
	x = c * q;
	y = x + (22.0 / 100) * x;

	printf("Il costo totale senza IVA è : %f\n", x);
	printf("IL costo totale con IVA è : %f\n", y);

	return 0;
}
