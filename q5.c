#include <stdio.h>

int main()
{
    float conta;
    float valor_total;
    float percento = 0.1;

    printf("Insira o valor da sua conta:\n");
    scanf(" %f", &conta);
    valor_total = (conta * percento) + conta; 

    printf("Total a pagar: %.2f\n", valor_total);
    return 0;
}
