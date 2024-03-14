#include <stdio.h>

int main()
{
    int x;

    /*  1 passo- A multiplicação de 3*6 é realizada
        2 passo- O resultado de (3*6 = 18) é dividido por 2
        3 passo- O resultado de (18/2 = 9) é subtraido 1
        4 passo- O resultado de (9-1 = 8) é somado com 7
        5 passo- O resultado final é 15

        x = 7+3*6/2-1;
        printf("x igual a: %d\n", x);
    */
    

    /*  1 passo- O resto é feito primeiro 2%2
        2 passo- Após isso a multiplicação de 2*2 é realizada
        3 passo- Após isso a divisão de 2/2 é realizada
        4 passo- Com o resultado de (2*2 = 4) e de (2/2 = 1) é feita a subtração de (4-1)
        5 passo- Com o resultado de (4-1 = 3) é somado com o resultado de (2%2 = 0)
        6 passo- O resultado final é 3

        x = 2%2+2*2-2/2;
        printf("x igual a: %d\n", x);
    */
   

   /*   1 passo- O 3 sai do parentese
        2 passo- A multiplicação de (9*3 = 27) e o resultado é dividido (27/3 = 9)
        3 passo- Após isso é somado (9 + 3 = 12)
        4 passo- O resultado de 12 é multiplicado (12*9*3 = 324)
        5 passo- O resultado final é 324

        x = (3 * 9 * (3 + (9*3/ (3) ) ) );
        printf("x igual a: %d\n", x);  
    */
    

    return 0;
}