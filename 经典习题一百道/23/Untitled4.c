//��Fibonacci����ǰ40������ÿ�����5������40��Fibonacci�������
#include<stdio.h>
int fib(int a)
{
    if(a==1 || a==2)
        return 1;
    else
        return fib(a-1)+fib(a-2);
}
int main()
{
    int a;
    for(a = 1; a <= 40; a++)
    {
        printf("%10d", fib(a));
        if(a%5==0)
            printf("\n");
    }

    return 0;
}
