#include <stdio.h>

int main() {
    char operador;
    double numero1, numero2, resultado;

    printf("Digite um operador (+, -, *, /): ");
    scanf("%c", &operador);

    printf("Digite dois números: ");
    scanf("%lf %lf", &numero1, &numero2);

    switch (operador) {
        case '+':
            resultado = numero1 + numero2;
            break;
        case '-':
            resultado = numero1 - numero2;
            break;
        case '*':
            resultado = numero1 * numero2;
            break;
        case '/':
            if (numero2 != 0)
                resultado = numero1 / numero2;
            else {
                printf("Erro! Divisão por zero não é permitida.\n");
                return 1; // Encerra o programa com código de erro
            }
            break;
        default:
            printf("Erro! Operador inválido.\n");
            return 1; // Encerra o programa com código de erro
    }

    printf("Resultado: %.2lf\n", resultado);
    return 0;
}
