#include <stdio.h>

int main() {
    int n = 0, somaPar = 0, somaImpar = 0, somaPrimo = 0;

    scanf("%d", &n);

    for (int i=(n-1); i>=2; i--) {
        int primo = (i <= 1) ? 0 : 1;
        for (int j=2; j*j <= i; j++) {
            if (i%j == 0) {
                primo = 0;
                break;
            }
        }

        if (primo) {
            somaPrimo += i;
        } else {
            if (i % 2 == 0) {
                somaPar += i;
            } else {
                somaImpar += i;
            }
        }
    }

    printf("%d %d %d\n", somaPar, somaImpar, somaPrimo);

    return 0;
}