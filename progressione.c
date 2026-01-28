#include <stdio.h>
	int main() {
	int x, y, z; 

	printf("Inserisci i tre numeri\n");
	scanf("%d", &x);
	scanf("%d", &y);
	scanf("%d", &z);

	if (x - y == y - z) {
	printf("I 3 numeri sono in una progressione algebrica\n");
	} else { 
	printf("I 3 numeri non sono in una progressione algebrica\n");
	}

	return 0;
}   
