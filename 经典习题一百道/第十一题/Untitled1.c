//古典问题：有一对兔子，从出生后第3个月起每个月都生一对兔子，小兔子长到第三个月
//后每个月又生一对兔子，假如兔子都不死，问每个月的兔子总数为多少？

#include<stdio.h>

int rab(int month)
{
    if(month==1 || month==2)
        return 1;
    else
        return rab(month-1)+rab(month-2);
}
int main()
{
    int m;
    printf("Please input the month you want to know:");
    scanf("%d", &m);
    printf("On the %dth month, the number of rabbits is :%d\n", m, rab(m));
    return 0;
}
