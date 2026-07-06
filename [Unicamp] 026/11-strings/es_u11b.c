#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char texto[100];

    fgets(texto, 100, stdin);
    texto[strcspn(texto, "\n")] = '\0';

    for (int i = 0; texto[i] != '\0'; i++)
        texto[i] = tolower(texto[i]);

    int inicio = 0;
    int fim = strlen(texto) - 1;
    int palindromo = 1;

    while (inicio < fim) {
        if (texto[inicio] != texto[fim]) {
            palindromo = 0;
            break;
        }
        inicio++;
        fim--;
    }

    if (palindromo)
        printf("Esta palavra e um palindromo\n");
    else
        printf("Esta palavra nao e um palindromo\n");

    return 0;
}