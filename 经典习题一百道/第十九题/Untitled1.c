//一个数如果恰好等于它的因子之和，这个数就称为“完数”。例如6=1＋2＋3.编程找出1000以内的所有完数。
#include<stdio.h>

int main()
{
    int num;
    int summ = 0;    //记录因子的和
    int i;      //计数器
    int j;
    int amount = 0; //完数的个数
    for(j = 2;j <=1000; j++)
    {
        summ = 0;
        for(i = 1; i < j; i++)
        {
            if(j%i == 0)
                summ += i;
        }
        if(summ == j)
            amount++;
    }
    printf("完数的个数为：%d", amount);
    return 0;
}
