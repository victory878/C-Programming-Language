//求满足1+2+3+…+n<500中最大的N，并求其和，编写程序实现。
#include<stdio.h>
int main()
{
    int a = 1;
    int summ = 0;
    while(summ<500)
    {
        summ += a;
        a++;
        //printf("%d\n", a);
    }
    printf("N = %d\n", a-1);
    printf("total = %d", summ-a+1);

    return 0;
}
