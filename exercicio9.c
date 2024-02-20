#include <stdio.h>

int main() {
    int vetor[5] = {0, 1, 2, 3, 4};
    for (int i = 0; i < 5; i++) {
        printf("Posicao de memoria do elemento %d: %p\n", vetor[i],&vetor[i]);
    }
    return 0;
}
