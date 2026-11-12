#include <stdio.h>

int main() {
    int num1, num2, soma;

    // Solicita os números ao usuário
    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &num2);

    // Realiza a soma
    soma = num1 + num2;

    // Exibe o resultado
    printf("A soma de %d + %d é igual a: %d\n", num1, num2, soma);

    return 0;
}
