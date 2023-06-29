#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, temp, soma, i;

    printf("Digite dois numeros:\n");
    scanf("%d", &x);
    scanf("%d", &y);

    if (x > y) {
        temp = x;
        x = y;
        y = temp;
    }

    soma = 0;
    for (i = x+1; i < y; i++) {
        if (i % 2 != 0) {
            soma = soma + i;
        }
    }

    printf("SOMA DOS IMPARES = %d", soma);

    return 0;
}
