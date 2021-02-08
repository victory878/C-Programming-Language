//将15个整数放到一维数组中，输出该数组中的最大值它的下标，然后将它和数组中的最前面的元素对换。
#include<stdio.h>
int main()
{
    int a[15] = {0};
    int i;
    int maxx;
    int flag;

    printf("Please input fiftenn numbers:");
    for(i = 0; i < 15; i++)
    {
        scanf("%d", &a[i]);

    }

    maxx = a[0];
    for(i = 1; i < 15; i++)
    {
        if(maxx < a[i])
        {
            maxx = a[i];
            flag = i;
        }
    }
    printf("the max is:%d, it's flag is:%d", maxx, flag);

    int temp;
    temp = maxx;
    maxx = a[0];
    a[0] = temp;

    return 0;
}
