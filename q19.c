#include <stdio.h>

int main() 
{

    int i, j;
    for (i = 0; i < 9; i++) 
    {
        for (j = 0; j < 8; j++) 
        {
            if (i == 0 || i == 9 - 1 || j == 0 || j == 8 - 1) 
            {
                printf("*");
            } 
            else 
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

   
