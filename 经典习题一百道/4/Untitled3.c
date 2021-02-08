//求1!+2!+3!+……+20!，将结果输出。
#include<stdio.h>

int main()
{
    int i, j;
    int summ;
    int mid = 1;
    for(i = 1;i <= 2; i++)
    {
        mid = 1;
        for(j = i; j >= 1; j--)
            mid *= j;
        summ += mid;
    }
    printf("结果是：%d", summ);
    return 0;
}
