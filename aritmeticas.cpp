#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int num1, num2, resultado;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    resultado = num1 + num2;
    printf("A soma de %d e %d : %d\n", num1, num2, resultado);

    resultado = num1 - num2;
    printf("A subtracao de %d e %d : %d\n", num1, num2, resultado);

    resultado = num1 * num2;
    printf("A multiplicacao de %d e %d : %d\n", num1, num2, resultado);

    if (num2 != 0) {
        resultado = num1 / num2;
        printf("A divisao de %d por %d : %d\n", num1, num2, resultado);
    } else {
        printf("Nao pode dividir por zero.\n");
    }

    return 0;
}
