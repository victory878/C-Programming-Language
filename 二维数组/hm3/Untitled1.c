//找出二维数组中的所有鞍点，既该位置的元素在该行上最大，但是在该列上最小。
//也有可能没有鞍点。
#include <stdio.h>
//所在行的最大值列标
int Max(int a[][3], int i)//i为所在行
{
    int n;//计数器
    int max = a[i][0];
    int flag = 0;
    for(n = 1; n < 3; n++)
    {
        if(max < a[i][n])
        {
            max = a[i][n];
            flag = n;
        }
    }
    return flag;
}
//所在列最小值行标
int Min(int a[][3], int j)//j为所在列
{
    int n;//计数器
    int min = a[0][j];
    int flag = 0;
    for(n = 1; n < 3; n++)
    {
        if(min > a[n][j])
        {
            min = a[n][j];
            flag = n;
        }
    }
    return flag;
}
int main()
{
    int a[3][3];
    int i, j;
    for(i = 0; i < 3; i++)
    {
        printf("第%d行：", i+1);
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int max;
    int min;
    int flag = 1;
    for(i = 0; i < 3; i++)
    {
        max = Max(a, i);
        for(j = 0; j < 3; j++)
        {
            if(max == j)
            {
                min = Min(a, j);
                if(min == i)
                {
                    printf("第%d个靶点, a[%d][%d], %d\n", flag, i+1, j+1, a[i][j]);
                    flag++;
                }
            }
        }
    }
    if(flag == 1)
        printf("无靶点");
    return 0;
}

