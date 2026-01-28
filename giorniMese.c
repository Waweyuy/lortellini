 #include <stdio.h>
	int main() {
	int x, y;

	//input 1
	printf("Inserisci il mese\n");
	scanf("%d", &x);

	//output
	if (x == 1) {
	  printf("Il mese di gennaio ha 31 giorni\n");
	} else if (x == 2) {
        	printf("Inserisci l'anno di riferimento\n");
	        scanf("%d", &y);
		//Controllo anno bisestile
	        if ((y % 400 == 0) || (y % 4 == 0 && y % 100 != 0)) {
        		printf("Febbraio %d ha 29 giorni (anno bisestile)\n", y);
	        } else {
        		printf("Febbraio %d ha 28 giorni\n", y);
        	}
	}
	  else if (x == 3) {
          printf("Il mese di marzo ha 31 giorni\n");
        } else if (x == 4) {
          printf("Il mese di aprile ha 30 giorni\n");
        } else if (x == 5) {
          printf("Il mese di maggio ha 31 giorni\n");
        } else if (x == 6) {
          printf("Il mese di giugno ha 30 giorni\n");
        } else if (x == 7) {
          printf("Il mese di luglio ha 31 giorni\n");
        } else if (x == 8) {
          printf("Il mese di agosto ha 31 giorni\n");
        } else if (x == 9) {
          printf("Il mese di settembre ha 30 giorni\n");
        } else if (x == 10) {
	  printf("Il mese di ottobre ha 31 giorni\n");
        } else if (x == 11) { 
          printf("Il mese di novembre ha 30 giorni\n");
        } else if (x == 12) {
          printf("Il mese di dicembre ha 31 giorni\n");
        } 

	return 0;

}
