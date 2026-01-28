#include <stdio.h>
	int main() {
	int x, y;

	//input 1
	printf("Inserisci il primo valore\n");
	scanf("%d", &x);

	//input 2
	printf("Inserisci il secondo valore\n");
	scanf("%d", &y); 

	//outuput
	// output
	if (x == y) {
    	  printf("I valori inseriti sono uguali\n");
	} else if (x < y) {
    	  printf("Il primo valore è più piccolo del secondo\n");
	} else {
          printf("Il secondo valore è più piccolo del primo\n");
	}

	return 0;
}
