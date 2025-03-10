#include <cstdio>

int main() {
    int idade = -1;

    while (idade < 0) {
        printf("Digite sua idade (numero positivo): ");
        scanf("%d", &idade);

        if (idade < 0) {
            printf("Idade invalida! Tente novamente.\n");
        }
    }

    if (idade >= 18) {
        printf("Maior de idade.\n");
    } else {
        printf("Menor de idade.\n");
    }

    return 0;
}
