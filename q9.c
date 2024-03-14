#include <stdio.h>

int main()
{
   int x;
   
   printf("Insira o valor de x: ");
   scanf(" %d", &x);

   printf("O seu sucessor: %d\n", ++x);
   printf("O seu antecessor: %d\n", --x-1);
    return 0;
}
