#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade, soma, cont;
    double media;

    printf("Digite as idades:\n");

    cont = 0;
    soma = 0;
    while (idade >= 0) {
        scanf("%d", &idade);

        if (idade >= 0) {
            soma = soma + idade;
            cont = cont + 1;
        }
    }

    if (soma > 0) {
        media = (double) soma / cont;
        printf("MEDIA = %.2lf", media);

    }
    else {
        printf("IMPOSSIVEL CALCULAR");
    }

    return 0;
}
