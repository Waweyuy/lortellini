#include <stdio.h>
	int main() {
	int x, y, z;
	
	//Input 1
	printf("Inserisci il lato del quadrato\n");
	scanf("%d", &x);

	//Output
	y = x * x;  //Area
	z = x * 4;  //Perimetro

	printf("L'area del quadrato è : %d\n", y);
	printf("Il perimetro del quadrato è : %d\n", z);

	return 0;

}
