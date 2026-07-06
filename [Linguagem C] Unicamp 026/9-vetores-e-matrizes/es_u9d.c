#include <stdio.h>

int main() {
    int vetor[20];

    for (int i = 0; i < 20; i++)
        vetor[i] = (i+1)*(i+1);

    for (int i = 19; i >= 0; i--)
        printf("%d\n", vetor[i]);

    return 0;
}