#include <stdio.h>

int main() {
    int vetorA[10];
    int vetorB[10];

    for (int i = 0; i < 10; i++)
        scanf("%d", &vetorA[i]);

    for (int i = 0; i < 10; i++)
        scanf("%d", &vetorB[i]);

    int vetorC[20];
    for (int i = 0; i < 10; i++) {
        vetorC[2 * i] = vetorA[i];
        vetorC[2 * i + 1] = vetorB[i];
    }

    for (int i = 0; i < 20; i++) {
        if (i < 19)
            printf("%d|", vetorC[i]);
        else
            printf("%d|\n", vetorC[i]);
    }

    return 0;
}