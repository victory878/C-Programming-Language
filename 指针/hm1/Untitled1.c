/*1、用指针方法实现数组的转置，完成如下函数的设计
void invert1 ( int * a , int len);  //一维数组的翻转
void invert2 ( int (* a)[N] );  //将N*N的矩阵以对角线为轴翻转*/
#include<stdio.h>
#define N 3
void invert(int (*a)[N])
{
    int temp;
    int i, j;
    for(i = 0; i <= N/2; i++)
    {
        for(j = 1; j < N; j++)
        {
            temp = *(*(a+i)+j);
            *(*(a+i)+j) = *(*(a+j)+i);
            *(*(a+j)+i) = temp;
        }

    }
}

int main()
{
    int arr[N][N] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    invert(arr);
    int i, j;
    for(i = 0; i < N; i++)
    {
        for(j = 0; j < N; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");


    }
}

