#include <stdio.h>

int main() 
{
    int x, n, res;
    
    printf("Digite um valor para x: ");
    scanf("%d", &x);
    
    printf("Digite um valor para n: ");
    scanf("%d", &n);
    
    res = x << n; 
    
    printf("O resultado de %d * 2^%d: %d\n", x, n, res);
    
    return 0;
}
