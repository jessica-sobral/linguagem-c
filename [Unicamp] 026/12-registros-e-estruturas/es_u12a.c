#include <stdio.h>
#include <string.h>

int main() {
    typedef struct Corpo {
        float altura;
        float peso;
        char nome[35];
    } Corpo;

    Corpo c1;

    printf("Informe sua altura:\n");
    scanf("%f", &c1.altura);

    printf("Informe seu peso:\n");
    scanf("%f", &c1.peso);

    getchar();
    printf("Informe seu nome:\n");
    fgets(c1.nome, sizeof(c1.nome), stdin);
    c1.nome[strcspn(c1.nome, "\n")] = '\0';

    float imc = c1.peso / (c1.altura * c1.altura);
    printf("O IMC de %s é %.2f.\n", c1.nome, imc);

    return 0;
}