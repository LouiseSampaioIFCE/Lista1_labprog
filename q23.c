#include <stdio.h>

int main() 
{
    int num, c, d, u, inv;
    
    printf("Digite um numero de tres digitos: ");
    scanf("%d", &num);
    
    c = num / 100;        
    d = (num / 10) % 10;   
    u = num % 10;         
    
    inv = u * 100 + d * 10 + c; 
    
    printf("O numero invertido: %d\n", inv);
    
    return 0;
}
