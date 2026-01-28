#include <stdio.h>
	int main() {
	int x, y, z;
        float media;
	//input 1
	printf("inserisci il primo valore\n");
	scanf("%d",&x);
	
	//input 2
	printf("inserisci il secondo valore\n");
	scanf("%d",&y);

	//input 3
	printf("inserisci il terzo valore\n");
	scanf("%d",&z);
	media = (x + y + z) / 3.0;

	//output
	printf("La media è: %.2f\n", media);

	return 0;
}
