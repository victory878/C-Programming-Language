//将一个正整数分解质因数。例如：输入90,打印出90=2*3*3*5。
#include<stdio.h>
int sushu(int i)
{
    int j;
    for(j = 2; j <= i; j++)
    {
        if(i%j == 0)
        {
            if(i == j)
                return 1;
            else
                return 0;
        }
    }
}

int main()
{
    int m;
    printf("Please input a number:");
    scanf("%d", &m);
    printf("%d = ", m);

    int j;
    while(sushu(m) == 0)
    {
        for(j = 2; j <= m; j++)
        {
            if(m%j == 0)
            {
                if(sushu(j) == 1)
                {
                    printf("%d*", j);
                    m /= j;
                    break;
                }
            }
        }

    }
    printf("%d", m);
    if(sushu(m) == 1)
    {
        printf("*1");
    }

    return 0;
}

