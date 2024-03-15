#include <stdio.h>

int main() 
{
    float fahrenheit, celcius;

    printf("Digite a temperatura em graus Celcius: ");
    scanf("%f", &celcius);

    fahrenheit = (9 * celcius + 160) / 5;

    printf("A temperatura em fahrenheit eh : %.2f graus \n ", fahrenheit);
    return 0;
}