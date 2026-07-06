#include <stdio.h>

int main() {
    int n = 0, par = 0, impar = 0;

    for (int i=0; i<=9; i++) {
        scanf("%d", &n);

        if (n % 2 == 0)
            par += 1;
        else
            impar += 1;
    }

    printf("%d pares, %d impares\n", par, impar);

    return 0;
}