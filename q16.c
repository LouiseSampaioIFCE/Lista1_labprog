#include <stdio.h>

int main() 
{
    int horas_trabalhadas;
    float valor_hora_aula, salario_liquido, salario_bruto;

    printf("Digite o valor da hora aula: \n");
    scanf(" %f", &valor_hora_aula);

    printf("Digite quantas horas trabalhadas no mes: \n");
    scanf(" %d", &horas_trabalhadas);

    salario_bruto = valor_hora_aula * horas_trabalhadas;
    printf("Salario bruto: %.2f \n", salario_bruto);

    if (salario_bruto<= 1045)
    {
        salario_liquido = salario_bruto - (salario_bruto * 0.075);
        printf("Salario liquido: %.2f \n", salario_liquido);
    }
    else if(salario_bruto>=1045.1 && salario_bruto<2089.6)
    {
        salario_liquido = salario_bruto - (salario_bruto * 0.09);
        printf("Salario liquido: %.2f \n", salario_liquido);
    }
    else if(salario_bruto>=2089.6 && salario_bruto<3134.4)
    {
        salario_liquido = salario_bruto - (salario_bruto * 0.12);
        printf("Salario liquido: %.2f \n", salario_liquido);
    }
    else
    {
        salario_liquido = salario_bruto - (salario_bruto * 0.14);
        printf("Salario liquido: %.2f \n", salario_liquido);
    }


    return 0;
}