#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO_VETOR 5

int main() {
    int vetor[TAMANHO_VETOR];
    int i, j;

    // Inicializa o gerador de números aleatórios
    srand(time(NULL));

    // Preenche o vetor com números aleatórios entre 0 e 100
    for (i = 0; i < TAMANHO_VETOR; i++) {
        vetor[i] = rand() % 101; // Gera números aleatórios entre 0 e 100
    }

    // Exibe o vetor original
    printf("Vetor original:\n");
    for (i = 0; i < TAMANHO_VETOR; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    // Multiplica cada elemento do vetor por 2 utilizando dois loops for aninhados
    for (i = 0; i < TAMANHO_VETOR; i++) {
        for (j = 0; j < TAMANHO_VETOR; j++) {
            vetor[j] *= 2;
        }
    }

    // Exibe o vetor após a multiplicação
    printf("Vetor após a multiplicação por 2:\n");
    for (i = 0; i < TAMANHO_VETOR; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
