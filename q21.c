#include <stdio.h>

int main() 
{
    int num1, num2;
    printf("Digite dois numeros: ");
    scanf("%d %d", &num1, &num2);
    
    num1 % num2 == 0 ? printf("%d e multiplo de %d\n", num1, num2) : printf("%d nao e multiplo de %d\n", num1, num2);
    
    return 0;
}
