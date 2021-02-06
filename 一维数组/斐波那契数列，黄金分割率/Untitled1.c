#include<stdio.h>
void main()
{
    while(1)
    {
        double fuc[50] = {1,1};
        int time1;
        for(time1 = 2; time1 < 50; time1++)
        {
            fuc[time1] = fuc[time1 - 1] + fuc[time1 - 2];
            printf("fib(%d):%12.0lf \t fib(%d)/fib(%d):%.16lf\n", time1, fuc[time1], time1, time1-1, fuc[time1]/fuc[time1 - 1]);
        }
        getchar();
    }
}
