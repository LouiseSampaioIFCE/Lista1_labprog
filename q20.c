#include <stdio.h>

int main() 
{
    int num;
    printf("Digite um numero:  ");
    scanf("%d", &num);
    
    num % 2 == 0 ? printf("O numero %d é par.\n", num) : printf("O numero %d é ímpar.\n", num);
    
    return 0;
}
