/*
#include <stdio.h>

/ Função que passa parâmetro por valor
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
*/
#include <stdio.h>

// Função que passa parâmetro por referência (ponteiro)
void incrementaPorReferencia(int *x)
{
    (*x)++; // Incrementa o valor apontado por x
    printf("Dentro da funcao: *x = %d\n", *x);
}

int main()
{
    int num = 10;
    printf("Antes da funcao: num = %d\n", num);

    // Chamando a função que passa parâmetro por referência (ponteiro)
    incrementaPorReferencia(&num);

    printf("Depois da funcao: num = %d\n", num);
    return 0;
}

/*//Quando passamos um parâmetro por valor,
 uma cópia do valor original é feita e essa cópia é usada dentro da função. 
 Qualquer alteração feita no parâmetro dentro da função não afeta o valor original fora da função.
  Portanto, após a função, o valor original não é alterado.

Por outro lado, quando passamos um parâmetro por referência 
(geralmente usando um ponteiro em C), estamos passando o endereço de memória da variável original para a função. Isso significa que a função pode modificar diretamente o valor armazenado nesse endereço de memória,
 afetando assim o valor original da variável fora da função. */
