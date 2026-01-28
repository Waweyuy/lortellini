#include <stdio.h>
     int main() {
	int x,y,j,z;
	
	//input
	printf("Inserisci i 3 valori:\n");
	scanf("%d %d %d", &x, &y, &j);

	z = x + y + j;

	//output
	printf("La somma dei 3 valori è: %d\n", z);

	return 0;

}
