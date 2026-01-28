#include <stdio.h>

int main() {
    int n, m;

    printf("Inserisci la base (n): ");
    scanf("%d", &n);
    printf("Inserisci l'altezza (m): ");
    scanf("%d", &m);

    //Ciclo per stampare l'altezza
    for (int i = 0; i < m; i++) {
        //Ciclo per stampare la base (il numero di asterischi per ogni riga)
        for (int j = 0; j < n; j++) {
            printf("*");
        }
        //Vai a capo dopo aver stampato una riga di asterischi
        printf("\n");
    }

    return 0;
}

