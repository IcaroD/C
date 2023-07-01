#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, n3, menor;

    printf("Primeiro valor: ");
    scanf("%d", &n1);
    printf("Segundo valor: ");
    scanf("%d", &n2);
    printf("Terceiro valor: ");
    scanf("%d", &n3);

    menor = n1;

    if (n2 < menor && n2 < n3) {
        menor = n2;
    }
    else if (n3 < menor) {
        menor = n3;
    }

    printf("MENOR = %d", menor);

    return 0;
}
