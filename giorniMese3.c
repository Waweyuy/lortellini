#include <stdio.h>
	int main() {
	int x;

	printf("Inserisci il mese desiderato\n");
	scanf("%d", &x);


	switch (x){
	case 1: printf("Il mese di Gennaio ha 31 giorni\n"); break;
	case 2: printf("Il mese di Febbraio ha 28 o 29 giorni\n"); break;
	case 3: printf("Il mese di Marzo ha 31 giorni\n"); break;
	case 4: printf("Il mese di Aprile ha 30 giorni\n"); break;
	case 5: printf("Il mese di Maggio ha 31 giorni\n"); break;
	case 6: printf("Il mese di Giugno ha 30 giorni\n"); break;
	case 7: printf("Il mese di Luglio ha 31 giorni\n"); break;
	case 8: printf("Il mese di Agosto ha 31 giorni\n"); break;
	case 9: printf("Il mese di Settembre ha 30 giorni\n"); break;
	case 10: printf("Il mese di Ottobre ha 31 giorni\n"); break;
	case 11: printf("Il mese di Novembre ha 30 giorni\n"); break;
	case 12: printf("Il mese di Dicembre ha 31 giorni\n");
	
	default: printf("errore\n"); break; 
	
	}

	return 0;

	}
