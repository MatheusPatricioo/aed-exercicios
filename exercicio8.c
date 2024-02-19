#include <stdio.h>

// Função que passa parâmetro por valor
void passarPorValor(int x) {
    x++;
    printf("Dentro da funcao: x = %d\n", x);
}

int main() {
    int num = 10;
    printf("Antes da funcao: num = %d\n", num);

    passarPorValor(num);
    printf("Depois da funcao: num = %d\n", num);

    return 0;
}
