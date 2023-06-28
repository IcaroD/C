#include <stdio.h>
#include <stdlib.h>

int main()
{
    double nota1, nota2, nota_final;

    printf("Dados da primeira nota: ");
    scanf("%lf", &nota1);

    printf("Dados da segunda nota: ");
    scanf("%lf", &nota2);

    nota_final = nota1 + nota2;

    printf("NOTA FINAL = %.1lf\n", nota_final);

    if (nota_final < 60) {
        printf("REPROVADO");
    }

    return 0;
}
