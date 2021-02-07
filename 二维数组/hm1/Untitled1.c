//随机产生20个不大于10的自然数，将其存储在一个二维数组中，
//且偶数与奇数分别存储在不同列上。输出该数组并统计偶数与奇数的个数。
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int judge(int n)//判断奇偶性
{
    if(n%2 == 0)
        return 1;
    else
        return 0;
}

int main()
{
    srand(time(NULL));
    int a[2][20] ={0};
    int n;//随机数
    int i;//循环计数器
    int flag1 = 0;//数组第一行，列计数器
    int flag2 = 0;//数组第二行，列计数器
    int j;//储存判断值
    for(i = 0; i < 20; i++)
    {
        n = rand()%11;
        j = judge(n);
        if(j)
        {
            a[j][flag1] = n;
            flag1++;
        }
        else
        {
            a[j][flag2] = n;
            flag2++;
        }
    }

    for(i = 0; i < flag2; i++)
        printf("%d ", a[0][i]);
    printf("\n奇数的个数为：%d\n", flag2);

    for(i = 0; i < flag1; i++)
        printf("%d ", a[1][i]);
    printf("\n偶数的个数为：%d", flag1);
    return 0;
}
