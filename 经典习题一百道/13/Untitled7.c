//将20个整数放到一维数组中，输出该数组的最大值和最小值。
#include<stdio.h>
#define N 4
int main()
{
    int a[4];
    int maxx;    //最大值
    int minn;    //最小值
    int i;

    printf("Please input numbers:\n");
    for(i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }

    maxx = a[0];
    minn = a[0];
    for(i = 1; i < N; i++)
    {
        if(maxx < a[i])
            maxx = a[i];

        if(minn > a[i])
            minn = a[i];

    }


    printf("最大值：%d，最小值：%d", maxx, minn);
    return 0;
}
