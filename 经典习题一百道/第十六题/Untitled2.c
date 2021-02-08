//输入两个正整数m和n，求其最大公约数和最小公倍数。
#include<stdio.h>
//求最大公约数
int q(int m, int n)
{
    int i;
    i = m>n? n : m;
    for(; i >= 1; i--)
    {
        if(m%i == 0)
        {
            if(n%i == 0)
            {
                //printf("%d", i);
                return i;
            }
        }

    }

}

//求最小公倍数:两个自然数相乘 == 最大公约数×最小公倍数


int main()
{
    int m, n;
    printf("Please input two numbers:");
    scanf("%d %d", &m, &n);

    int yue; //最大公约数
    int bei; //最大公倍数
    yue = q(m, n);
    bei = m*n/yue;
    printf("最大公约数：%d\n", yue);
    printf("最小公倍数：%d", bei);
    return 0;
}
