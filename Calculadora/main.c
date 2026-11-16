#include <stdio.h>

int main(void) {
    char operacao;
    double num1, num2, resultado;

    printf("Escolha um operador (+, -, *, /): ");
    scanf(" %c", &operacao);

    printf("Digite o primeiro numero: ");
    scanf("%lf", &num1);
    printf("Digite o segundo numero: ");
    scanf("%lf", &num2);

    switch (operacao) {
        case '+':
            resultado = num1 + num2;
            printf("Resultado: %.2lf + %.2lf = %.2lf\n", num1, num2, resultado);
            break;

        case '-':
            resultado = num1 - num2;
            printf("Resultado: %.2lf - %.2lf = %.2lf\n", num1, num2, resultado);
            break;

        case '*':
            resultado = num1 * num2;
            printf("Resultado: %.2lf * %.2lf = %.2lf\n", num1, num2, resultado);
            break;

        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("Resultado: %.2lf / %.2lf = %.2lf\n", num1, num2, resultado);
            } else {
                printf("Erro: nao e possivel dividir por zero.\n");
            }
            break;

        default:
            printf("Operador invalido!\n");
            break;
    }

    return 0;
}
