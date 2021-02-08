/*打印以下图案：      *
                     ***
                    *****
                   *******
                   */
#include<stdio.h>
int main()
{
    int i, j;
    for(i = 1; i <= 4; i++)
    {
        for(j = 1;j <= 4 -i; j++)
        {
            printf(" ");
        }
        for(j = 1; j <= i*2-1; j++)
        {
            printf("*");
        }
        for(j = 1;j <= 4 -i; j++)
        {
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
