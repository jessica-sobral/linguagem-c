#include <stdio.h>
#include <string.h>

int main() {
    char texto[80], textoInvertido[80];
    
    fgets(texto, 80, stdin);
    texto[strcspn(texto, "\n")] = '\0';
    
    int j = 0;
    for (int i = strlen(texto) - 1; i >= 0; i--)
		textoInvertido[j++] = texto[i];
    
    textoInvertido[j] = '\0';
    puts(textoInvertido);

    return 0;
}