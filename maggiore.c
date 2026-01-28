#include <stdio.h>
	int main() {
       	int x;

	//input 1
	printf("Inserisci un numero\n");
	scanf("%d", &x);

	//output
	if (x >= 0) {
	  printf("Il numero inserito è maggiore o uguale a zero\n");
	} else {
	  printf("Il numero inserito è minore di zero\n");
	}

	return 0;
}
