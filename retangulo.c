#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double base, altura, perimetro, area, diagonal;

    printf("Base do retangulo: ");
    scanf("%lf", &base);
    printf("Altura do retangulo: ");
    scanf("%lf", &altura);

    area = base * altura;
    perimetro = (base + altura) * 2;
    diagonal = sqrt(base * base + altura * altura);

    printf("AREA = %.4lf\n", area);
    printf("PERIMENTO = %.4lf\n", perimetro);
    printf("DIAGONAL = %.4lf", diagonal);

    return 0;
}
