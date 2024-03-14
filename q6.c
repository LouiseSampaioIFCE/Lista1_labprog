#include <stdio.h>

int main()
{
    float altura;
    char sexo;
    float peso_h, peso_m;

    printf("insira sua altura: ");
    scanf(" %f", &altura);

    printf("Selecione M se for mulher e H se for homem: ");
    scanf(" %c", &sexo);

    if(sexo != 'M' && sexo != 'H')
    {
        printf("Sexo invalido");
    }

    switch(sexo)
    {
        case 'M':
        peso_m = 62.1 * altura - 44.7;
        printf("O seu peso ideal: %.2f\n", peso_m);
        break;

        case 'H':
        peso_h = (72.7 * altura) - 58;
        printf("O seu peso ideal: %.2f\n", peso_h);
        break;
    }
    return 0;
}
