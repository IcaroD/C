#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;

    printf("Digite uma idade: ");
    scanf("%d", &idade);

    if (idade < 18) {
        printf("Menor de idade");
    }
    else if (idade < 115 && idade > 18) {
        printf("Maior de idade");
    }
    else {
        printf("Pessoa mais velha do mundo");
    }

    return 0;
}
