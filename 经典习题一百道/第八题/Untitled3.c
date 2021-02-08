//Êä³ö9*9¿Ú¾÷¡£
#include<stdio.h>
int main()
{
    int i, j;
    for(i = 1; i <= 9; i++)
    {
        for(j = 1; j <= 9; j++)
            printf("%d x %d = %2d ", i, j, i*j);
        printf("\n\n");
    }
    return 0;
}

