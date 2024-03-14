#include <stdio.h>

int main()
{
   float comprimento, altura, largura, volume;

   printf("Insira o comprimento:\n");
   scanf(" %f", &comprimento);
   
   printf("Insira a altura:\n");
   scanf(" %f", &altura);

   printf("Insira a largura:\n");
   scanf(" %f", &largura);

   volume = comprimento* altura* largura;
   printf("O volume eh: %.2f\n", volume);
    return 0;
}
