#include <stdio.h>

int main() {
    int qtdProdutos[10];
    float valorProdutos[10];

    int somaQtdProdutos = 0;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &qtdProdutos[i]);
        somaQtdProdutos += qtdProdutos[i];
    }

    float somaValorProdutos = 0.0;
    for (int i = 0; i < 10; i++) {
        scanf("%f", &valorProdutos[i]);
        somaValorProdutos += (valorProdutos[i] * qtdProdutos[i]);
    }

    printf("O lucro foi de  %.3f e a quantidade de produtos vendidos foi de %d\n", somaValorProdutos, somaQtdProdutos);

    return 0;
}