#include <stdio.h>
#define N 20

int main() {
    int m[N][N];
    int l, c, numLin, numCol;

    scanf("%d %d", &numLin, &numCol);

    for (l=0; l < numLin; l++)
		for (c=0; c < numCol; c++)
			scanf("%d",&m[l][c]);
    
    for (c=0; c < numCol; c++) {
		for (l=0; l < numLin; l++)
            printf("%d ", m[l][c]);
            printf("\n");
    }
    
    return 0;
}