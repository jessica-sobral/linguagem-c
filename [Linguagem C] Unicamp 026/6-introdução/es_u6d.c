#include <stdio.h>

int main() {
    float f;
    scanf("%f", &f);
    printf("%.2f\n", ((f-32)/1.8));

    return 0;
}