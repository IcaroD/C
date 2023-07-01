#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, M, i, j, negativo;

    printf("Qual a quantidade de linhas da matriz? ");
    scanf("%d", &M);
    printf("Qual a quantidade de colunas da matriz? ");
    scanf("%d", &N);

    double mat[M][N];
    double soma[M];

    for (i = 0; i < M; i++) {
        printf("Digite os elementos da %da. linha:\n", i+1);
        for (j = 0; j < N; j++) {
            scanf("%lf", &mat[i][j]);
        }
    }

    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            soma[i] = soma[i] + mat[i][j];
        }
    }

    printf("VETOR GERADO:\n");
    for (i = 0; i < M; i++) {
        printf("%.1lf\n", soma[i]);
    }

    return 0;
}
