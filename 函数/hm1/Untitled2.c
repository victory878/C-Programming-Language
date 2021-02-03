/*编写判断素数的函数, 并用主函数调用，输出n~m之间的所有素数。
	int prime ( int m ) ;   // 若m为素数则返回1，否则返回0*/
#include<stdio.h>
int prime(int num)
{
    int time;
    for(time = 2; time <= num; time++)
    {
        if(num > 1)
        {
            if(num%time == 0)
            {
                if(num == time)
                    return 1;
                else
                    return 0;
            }
        }

    }
}

void main()
{
    int n, m;
    printf("请输入两个值（格式：n m）");
    scanf("%d %d", &n, &m);

    int time, res;
    for(time = n; time <= m; time++)
    {
        res = prime(time);
        if(res == 1)
        {
            printf("%d ", time);
        }

    }
}
