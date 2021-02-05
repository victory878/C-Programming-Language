//第六题
#include<stdio.h>
int main()
{
    int n, m;
    int time1, time2;
    int time3;
    int num = 0;
    scanf("%d %d", &n, &m);
    for(time1 = n; time1 <= m; time1++)
    {
        for(time2 = 2; time2 < time1; time2++)
        {
            if(time1%time2 == 0)
            {
                break;

            }
        }
        if(time1 == time2 && time1!=1)
        {
            num++;
            printf("%d ", time2);
        }
    }
    printf("\n%d", num);
    return 0;
}
