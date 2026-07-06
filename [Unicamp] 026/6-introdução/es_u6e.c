#include <stdio.h>

int main() {
    int idade;
    float altura;
    char sexo;

    scanf("%d\n%f\n%c", &idade, &altura, &sexo);
    printf("A pessoa tem %d anos, %.2f de altura e é do sexo %c.\n", idade, altura, sexo);

    return 0;
}