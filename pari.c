#include <stdio.h>
	int main() {
	int x;

	//input 1
	printf("Inserisci un numero\n");
	scanf("%d", &x);

	//output
	if (x % 2 == 0) {
	  printf("Il numero inserito è pari\n");
	} else {
	  printf("Il numero inserito è dispari\n");
	}

	return 0;
}
