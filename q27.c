#include <stdio.h>
#include <math.h>

int main() 
{
    float num1, num2, num3;
    float mediaAritmetica, mediaGeometrica;

    printf("Digite tres notas: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    mediaAritmetica = (num1 + num2 + num3) / 3;

    mediaGeometrica = pow((num1 * num2 * num3), 1.0 / 3.0);

    printf("Media aritmetica: %.2f\n", mediaAritmetica);
    printf("Media geometrica: %.2f\n", mediaGeometrica);

    return 0;
}
