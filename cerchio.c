#include <stdio.h>
	int main() {
	float x, y, z;
	
	//Input 1
	printf("Inserisci il raggio del cerchio\n");
	scanf("%f", &x);

	//Output
	y = (x * x) * 3.1416;  //Area
	z = 2 * 3.1416 * x;  //Perimetro

	printf("L'area del cerchio è : %.2f\n", y);
	printf("Il perimetro del cerchio è : %.2f\n", z);

	return 0;

}
