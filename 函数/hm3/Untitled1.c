/*一个整数的所有因子（包括1，但不包括本身）之和等于该数，则该数称为完数。例如6是一个完数，因为6=1+2+3。
 编写一个isPerfectnum函数，判断参数number是否为完数。利用该函数判断并打印1到1000之间的所有完数。*/
#include<stdio.h>
int isPerfectnum(int n)
{
    int time;
    int a[1000] = {0};
    int sum = 0;
    for(time = 1; time < n; time++)
    {
        if(n%time == 0 && n != time)
        {
            a[time-1] = time;
        }
        sum += a[time-1];
    }
    if(sum == n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void main()
{
    int time;
    int res;
    for(time = 2; time <= 1000; time++)
    {
        res = isPerfectnum(time);
        if(res == 1)
        {
            printf("%d ", time);
        }
    }
}
