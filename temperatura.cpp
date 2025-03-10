#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    float c, f;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &c);

    f = (c * 9/5) + 32;

    printf("%.2f graus Celsius e igual a %.2f graus Fahrenheit.\n", c, f);

    return 0;
}
