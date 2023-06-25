#include <stdio.h>
#include <string.h>

void limpar_entrada()
{
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

void ler_texto(char *buffer, int length)
{
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
}

int main()
{

    int idade;
    double salario, altura;
    char genero;
    char nome[50];

    printf("Digite a idade: ");
    scanf("%d", &idade);
    printf("Digite o valor do salario: ");
    scanf("%lf", &salario);
    printf("Digite a altura: ");
    scanf("%lf", &altura);
    printf("Digite o nome da pessoa: ");
    limpar_entrada();
    ler_texto(nome, 50);
    printf("O genero da pessoa(F/M): ");
    scanf("%c", &genero);

    printf("IDADE = %d\n", idade);
    printf("SALARIO = %.2lf\n", salario);
    printf("ALTURA = %.2lf\n", altura);
    printf("NOME = %s\n", nome);
    printf("GENERO = %c\n", genero);


    return 0;
}
