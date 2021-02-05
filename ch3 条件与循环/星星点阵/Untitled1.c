//µÚÎåÌâ
#include<stdio.h>
int a()
{
    int time1;
    int time2;
    for(time1 = 1; time1 <= 10; time1++)
    {
        for(time2 = 1; time2 <= time1; time2++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

int b()
{
    int time1, time2;
    for(time1 = 10; time1 >= 1; time1--)
    {
        for(time2 = time1; time2 >= 1; time2--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

int c()
{
    int time1, time2, time3;
    for(time1 = 10; time1 >= 1; time1--)
    {
        for(time2 = 10 - time1; time2 >= 1; time2--)
        {
            printf(" ");
        }
        for(time3 = time1; time3 >= 1; time3--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

int d()
{
    int time1, time2, time3;
    for(time1 = 1; time1 <= 10; time1++)
    {
        for(time2 = 10 - time1; time2 >= 1; time2--)
        {
            printf(" ");
        }
        for(time3 = time1; time3 >= 1; time3--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

int main()
{
    a();
    b();
    c();
    d();
}
