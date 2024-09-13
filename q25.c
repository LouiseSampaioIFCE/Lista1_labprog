#include <stdio.h>

int main() 
{
    int tempo, h, min, seg;
    
    printf("Digite o tempo em segundos: ");
    scanf("%d", &tempo);
    
    h = tempo / 3600;              
    min = (tempo % 3600) / 60;     
    seg = tempo % 60;      
    
    printf("Horas: %d, Minutos: %d, Segundos: %d\n", h, min, seg);
    
    return 0;
}
