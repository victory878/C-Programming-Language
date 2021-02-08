//编写程序，输入两个整数，和+、-、*、/之中的任意一个运算符，输出计算结果。
#include<stdio.h>
int main()
{
    int a, b;
    char c;
    printf("Please input a equation:");
    scanf("%d%c%d", &a, &c, &b);

    if(c == '+')
        printf("%d + %d = %d", a, b, a+b);
    if(c == '-')
        printf("%d - %d = %d", a, b, a-b);
    if(c == '*')
        printf("%d * %d = %d", a, b, a*b);
    if(c == '/')
        printf("%d / %d = %lf", a, b, (double) a/b);

    return 0;
}
