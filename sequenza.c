
#include <stdio.h>

int main() {
    int n;

    printf("Inserisci un intero n > 1: ");
    scanf("%d", &n);

    // Verifica se n è maggiore di 1
    if (n <= 1) {
        printf("n deve essere maggiore di 1!\n");
        return 1;
    }

    // Stampa la sequenza
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("%d\n", j); }
    }

    return 0;
}

