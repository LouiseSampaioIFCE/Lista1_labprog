#include <stdio.h>

int main()
{
    int first_num, sec_num;
    int soma, produto, diferenca, quociente, resto;
    printf("Digite o primeiro numero: ");
    scanf(" %d", &first_num);

    printf("Digite o segundo numero: ");
    scanf(" %d", &sec_num);

    soma = first_num + sec_num;
    produto = first_num * sec_num;
    diferenca = first_num - sec_num;
    quociente = first_num / sec_num;
    resto = first_num % sec_num;

    printf("A soma: %d\n", soma);
    printf("O produto: %d\n", produto);
    printf("A diferenca: %d\n", diferenca);
    printf("O quociente: %d\n", quociente);
    printf("O resto: %d\n", resto);
    return 0;
}
