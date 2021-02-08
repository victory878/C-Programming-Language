//判断101-200之间有多少个素数，并输出所有素数。

#include<stdio.h>
int sushu(int i)
{
    int j;
    for(j = 2; j <= i; j++)
        {
            if(i%j == 0)
            {
                if(i == j)
                {
                    printf("%d ", j);
                }
                else
                    return 0;
            }
        }
}
int main()
{
    int i;
    int summ = 0, num;
    for(i = 101; i <= 200; i++)
    {
        num = sushu(i);
        if(num != 0)
            summ++;
    }
    printf("\nthe total is :%d", summ);
}
