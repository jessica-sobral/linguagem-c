#include <stdio.h>

int main() {
    int n, s;
    scanf("%d\n%d", &n, &s);

    long long nFat = 1;
    for (int i=n; i>1; i--)
        nFat *= i;

    long long sFat = 1;
    for (int i=s; i>1; i--)
        sFat *= i;

    long long nsFat = 1;
    for (int i=(n-s); i>1; i--)
        nsFat *= i;

    long long result = nFat/(sFat*nsFat);
    printf("%lld\n", result);

    return 0;
}