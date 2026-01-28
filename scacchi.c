#include <stdio.h>

int main() {
    int n;
    int totalRice = 0;
    int currentRice = 1;

    //Chiediamo all'utente quante caselle vuole riempire
    printf("Inserisci il numero di caselle da riempire (da 1 a 64): ");
    scanf("%d", &n);

    //Verifica se n è tra 1 e 64
    if (n < 1 || n > 64) {
        printf("Errore: il numero di caselle deve essere compreso tra 1 e 64.\n");
        return 1;
    }

    //Sommiamo i chicchi per le prime n caselle
    for (int i = 0; i < n; i++) {
        totalRice += currentRice;
        currentRice *= 2; 
    }

    printf("Il numero complessivo di chicchi di riso per le prime %d caselle è: %d\n", n, totalRice);

    return 0;
}

