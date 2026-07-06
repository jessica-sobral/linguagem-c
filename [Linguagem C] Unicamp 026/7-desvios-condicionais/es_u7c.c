#include <stdio.h>

int main() {
    float n1, n2;
    char operador;

    scanf("%f%c%f", &n1, &operador, &n2);

    if (operador == '+') {
        printf("%.3f%c%.3f=%.3f\n", n1, operador, n2, (n1+n2));
    } else if (operador == '-') {
        printf("%.3f%c%.3f=%.3f\n", n1, operador, n2, (n1-n2));
    } else if (operador == '*') {
        printf("%.3f%c%.3f=%.3f\n", n1, operador, n2, (n1*n2));
    } else if (operador == '/') {
        printf("%.3f%c%.3f=%.3f\n", n1, operador, n2, (n1/n2));
    } else {
        printf("Operador invalido\n");
    }

    return 0;
}