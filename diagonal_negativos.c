#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, i, j, negativo;

    printf("Qual a ordem da matriz? ");
    scanf("%d", &N);

    int mat[N][N];

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("Elemento [%d,%d]: ", j, i);
            scanf("%d", &mat[j][i]);
        }
    }

    printf("DIAGONAL PRINCIPAL:\n");
    for (i = 0; i < N; i++) {
        printf("%d ", mat[i][i]);
    }

    negativo = 0;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            if (mat[j][i] < 0) {
                negativo++;
            }
        }
    }

    printf("\nQUANTIDADE DE NEGATIVOS = %d", negativo);

    return 0;
}
