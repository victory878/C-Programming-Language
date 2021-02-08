//输入一个正整数，输出原数并逆序打印出各位数字
#include<stdio.h>
int main()
{
    int m;
    printf("Please input a number:");
    scanf("%d", &m);
    printf("原数：%d", m);

    printf("\n逆序打印的各位数字：");
    while(m/10 >= 1)
    {
        printf("%d", m%10);
        m /= 10;
    }
    printf("%d", m);
    return 0;
}
