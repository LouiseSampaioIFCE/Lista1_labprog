#include <stdio.h>

int main() 
{

    int A, B, troca;

    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);

    printf("Valores antes da troca:\n");
    printf("A = %d\n", A);
    printf("B = %d\n", B);

    troca = A;
    A = B;
    B = troca;

    printf("Valores depois da troca:\n");
    printf("A = %d\n", A);
    printf("B = %d\n", B);

    return 0;
}