#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void limpar_entrada() {
 char c;
 while ((c = getchar()) != '\n' && c != EOF) {}
}

void ler_texto(char *buffer, int length) {
 fgets(buffer, length, stdin);
 strtok(buffer, "\n");
}

int main()
{
    int N, i, menor;
    double porcent, soma, media;

    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &N);

    char nome[N][50];
    int idade[N];
    double altura[N];

    for (i = 0; i < N; i++) {
        printf("Dados da %da pessoa:\n", i+1);
        printf("Nome: ");
        limpar_entrada();
        ler_texto(nome[i], 50);
        printf("Idade: ");
        scanf("%d", &idade[i]);
        printf("Altura: ");
        scanf("%lf", &altura[i]);
    }

    soma = 0;
    for (i = 0; i < N; i++) {
        soma = soma + altura[i];
    }

    media = soma / N;

    printf("\nAltura media: %.2lf", media);

    menor = 0;
    for (i = 0; i < N; i++) {
        if (idade[i] < 16) {
            menor++;
        }
    }

    porcent = (double) menor * 100 / N;

    printf("\nPessoas com menos de 16 anos: %.1lf\n", porcent);

    for (i = 0; i < N; i++) {
        if (idade[i] < 16) {
            printf("%s\n", nome[i]);
        }
    }

    return 0;
}
