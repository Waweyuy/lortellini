#include <stdio.h>
    	int main() {
    	int x;
   	float inverso;

   	 //input
   	 printf("Inserisci un numero intero\n");
    	 scanf("%d", &x);

    	//output
    	if (x == 0) {
          printf("Errore: non è possibile calcolare l'inverso di 0 (divisione per zero)\n");
   	 } else {
          inverso = 1.0 / x;  // uso 1.0 per ottenere un risultato float
             printf("L'inverso di %d è %.4f\n", x, inverso);
   	 }

    	return 0;
}

