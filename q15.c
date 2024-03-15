#include <stdio.h>

int main() 
{
    float valor_dia = 50.25, valor_bruto, valor_liquido, imposto, gratificacao, valor_gratific;
    int dia_trabalhado;
     
    printf("Digite o tanto de dias trabalhados: ");
    scanf("%d", &dia_trabalhado);

    if(dia_trabalhado< 10)
    {
        valor_bruto = (valor_dia * dia_trabalhado);
        imposto = valor_bruto * 0.1;
        valor_liquido = valor_bruto - imposto;
        printf("Ganho total: %.2f\n", valor_liquido);
    }
    else if (dia_trabalhado>=10 && dia_trabalhado<=20)
    {
       valor_bruto = (valor_dia * dia_trabalhado);
       gratificacao = (valor_bruto * 0.2);
       valor_gratific = valor_bruto + gratificacao;
       imposto = valor_gratific * 0.1;
       valor_liquido = valor_gratific - imposto;
       printf("Ganho total: %.2f\n", valor_liquido);
    }
    else
    {
       valor_bruto = (valor_dia * dia_trabalhado);
       gratificacao = (valor_bruto * 0.3);
       valor_gratific = valor_bruto + gratificacao;
       imposto = valor_gratific * 0.1;
       valor_liquido = valor_gratific - imposto;
       printf("Ganho total: %.2f\n", valor_liquido);
    }
    return 0;
}