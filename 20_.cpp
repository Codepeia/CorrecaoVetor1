#include <stdio.h>

int main() {
    int vetor[10], impares[10];
    int i, j = 0;

    for (i = 0; i < 10; i++) {
        do {
            printf("Informe o número %d (entre 1 e 50): ", i + 1);
            scanf("%d", &vetor[i]);
        } while (vetor[i] < 1 || vetor[i] > 50);

        if (vetor[i] % 2 != 0) {
            impares[j++] = vetor[i];
        }
    }

    // Imprime os vetores
    printf("\nVetor original:\n");
    for (i = 0; i < 10; i+=2) {
        printf("%d, %d\n", vetor[i], vetor[i+1]);
    }

    printf("\nVetor de ímpares:\n");
    for (i = 0; i < j; i+=2) {
        printf("%d", impares[i]);
        if (i + 1 < j) {
            printf(", %d", impares[i + 1]);
        }
        printf("\n");
    }

    return 0;
}

