//打印出所有的“水仙花数”，所谓“水仙花数”是指一个三位数，其各位数字立方和等于该数
//本身。例如：153是一个“水仙花数”，因为153=1的三次方＋5的三次方＋3的三次方。

#include<stdio.h>
int main()
{
    int i;
    int a, b, c;
    int summ;
    for(i = 100; i < 1000; i++)
    {
        a = i/100;
        b = i/10%10;
        c = i%10;
        summ = a*a*a + b*b*b + c*c*c;
        if(i == summ)
            printf("%d ", i);

    }
}

