#include <stdio.h>

int main() {
    int idade;

    while (1) {
        printf("Digite sua idade (ou -1 para sair): ");
        scanf("%d", &idade);

        if (idade == -1) {
            printf("Encerrando o programa...\n");
            break;
        } else if (idade < 0) {
            printf("Idade invalida! Tente novamente.\n");
        } else if (idade >= 18) {
            printf("Maior de idade.\n");
        } else {
            printf("Menor de idade.\n");
        }
    }

    return 0;
}
