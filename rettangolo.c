#include <stdio.h>
	int main() {
	int x, y, j, z;
	
	//Input 1
	printf("Inserisci il lato del rettangolo\n");
	scanf("%d", &x);

	//Input 2
	printf("Inserisci l'altezza del rettangolo\n");
	scanf("%d", &j);

	//Output
	y = x * j;  //Area
	z = (x * 2) + (j * 2);  //Perimetro

	printf("L'area del rettangolo è : %d\n", y);
	printf("Il perimetro del rettangolo è : %d\n", z);

	return 0;

}
