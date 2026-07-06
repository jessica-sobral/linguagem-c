#include <stdio.h>

int main() {
    float notas[20];

    for (int i = 0; i < 20; i++) {
        scanf("%f", &notas[i]);
    }

    float nota;
    do {
		scanf("%f",&nota);

        if (nota >= 0.0) {
            int j = 0;
            while ((notas[j] != nota) && (j < 20))
                j++;
            
            if (j < 20)
                printf("existe\n");
            else
                printf("nao existe\n");
        }
	} while (nota >= 0.0);

    return 0;
}