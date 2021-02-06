//将两个从小到大有序整型数组a和b合并出一个有序整数数组c
#include<stdio.h>
int main()
{
    int a[5] = {-2, -1, 3, 4, 5};
    int b[5] = {-1, 2, 5, 6, 7};
    int c[10] = {0};    //升序排列

    int i, j;
    for(i = 0; i < 5; i++)
        c[i] = a[i];
    for(i = 0; i < 5; i++)
    {
        for(j = 10; j >= 0; j--)
        {
            if(b[i]<c[j] || c[j]==0)
                c[j+1] = c[j];
            else
                break;
        }
        c[j+1] = b[i];
    }
    for(i = 0; i < 10; i++)
        printf("%d ", c[i]);
    return 0;
}
