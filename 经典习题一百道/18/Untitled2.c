//��д��������������������+��-��*��/֮�е�����һ��������������������
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
