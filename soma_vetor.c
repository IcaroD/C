#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, i;
    double soma, media;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &N);

    double vet[N];

    for (i = 0; i < N; i++) {
        printf("Digite um numero: ");
        scanf("%lf", &vet[i]);
    }

    printf("\nVALORES = ");

    for (i = 0; i < N; i++) {
        printf("%.1lf ", vet[i]);
    }

    soma = 0;
    for (i = 0; i < N; i++) {
        soma = soma + vet[i];
    }

    printf("\nSOMA = %.2lf", soma);

    media = soma / N;

    printf("\nMEDIA = %.2lf", media);

    return 0;
}
