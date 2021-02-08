//输入一个正整数求出它是几位数；输出原数和位数。
#include<stdio.h>
int main()
{
    int m;
    printf("Please input a number:");
    scanf("%d", &m);
    printf("原数：%d", m);
    int flag = 1;
    while(m/10 >= 1)
    {
        flag++;
        m /= 10;
    }
    printf("\n位数：%d", flag);
    return 0;
}

