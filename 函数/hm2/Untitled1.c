/*编写程序验证歌德巴赫猜想： 一个不小于6的偶数可以表示成两个素数之和。如6＝3＋3，8＝3＋5，10＝3＋7，……
 在主函数中输入一个大于6的偶数n，例如34，输出如下形式：34＝3＋31。输出不满足要求的数则重新输入*/
#include<stdio.h>
//判断加数是否为素数
int prime(int n)
{
    int i;
    for(i = 2; i <= n; i++)
    {
        if(n%i == 0)
        {
            if(n != i)
                return 0;
            else
                return 1;
        }
    }
}
//判断输入值是否符合条件
int judge(int n)
{
    if(n%2==0 && n>6)
        return 0;
    else
        return 1;
}

int main()
{
    int n;
    printf("请输入一个数字：");
    scanf("%d", &n);
    while(judge(n))
    {
        printf("重新输入一个（大于6）偶数：");
        scanf("%d", &n);
    }
    //printf("end");

    printf("%d = ", n);

    int i, j;
    int flag = 0;
    for(i = 2; i < n; i++)
    {
        for(j = 2; j < n; j++)
        {
            if(prime(i) && prime(j))
            {
                if(i+j == n)
                {
                    printf("%d + %d", i, j);
                    flag++;
                    break;
                }
            }
        }
        if(flag == 1)
            break;
    }
    return 0;
}

