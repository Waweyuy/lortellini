#include <stdio.h>
	int main() {
	int x, y, z;

	//input 1
	printf("inserisci il primo valore\n");
	scanf("%d",&x);
	
	//input 2
	printf("inserisci il secondo valore\n");
	scanf("%d",&y);

	z = x - y;

	//output
	printf("La differenza è: %d\n", z);

	return 0;
}
