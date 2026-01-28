#include <stdio.h>
	int main() {
	int x;
	
	//input 1
	printf("Inserisci la tua età\n");
	scanf("%d",&x);

	//output
	if (x >= 18) {
	    printf("Maggiorenne\n");
	} else {
	    printf("Minorenne\n");
	}

	return 0;

}
