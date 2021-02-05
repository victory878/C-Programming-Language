//第一题
#include<stdio.h>

q1()//计算m的阶乘
{
    int n, sum;//n为阶数
    printf("请输入n的值：");
    scanf("%d",&n);
    for(sum = 1; n >= 1; n--)
    {
        sum *= n;
    }
    printf("%d", sum);//总和
    return 0;
}

q2()//计算1~m的阶乘和
{
    int m, time1, sum, total; //m为输入阶数
    int time2;
    printf("请输入m的值：");
    scanf("%d", &m);
    for(total = 0, time1 = 1; time1 <= m; time1++)
    {
        sum = 1;
        for(time2 = 1; time2 <= time1; time2++)
        {
            sum *= time2;

        }
        total += sum;//总和


    }
    printf("%d", total);
    return 0;
}

q3()//计算e的值
{
    int time1,time2;
    double mid = 1.0, sum = 1.0;

    for(time1 = 1; mid > 1e-6; time1++)
    {
        mid *= 1.0/time1;
        sum += mid;
    }

    printf("%lf", sum);
    return 0;
}

q4()//计算e^x的值
{
    double x;
    int time1, time2, time3;
    double mid = 1.0, sum = 1.0;
    printf("请输入x的值：");
    scanf("%lf", &x);
    for(time2 = 1; mid > 1e-6; time2++)
    {
        mid *= x/time2;
        sum += mid;
    }

    printf("%lf", sum);
    return 0;
}

int main()
{
    q1();
    q2();
    q3();
    q4();
}
