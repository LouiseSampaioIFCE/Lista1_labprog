#include <stdio.h>

int main()
{
   float cotacao, real, valor_conversao;

   printf("Insira o valor atual da cotacao do dollar:\n");
   scanf(" %f", &cotacao);

   printf("Quantos reais voce deseja converter:\n");
   scanf(" %f", &real);

   valor_conversao = real/cotacao;

   printf("Voce trocou para %.2f dolares\n", valor_conversao);

    return 0;
}
