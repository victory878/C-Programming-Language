/*1����ָ�뷽��ʵ�������ת�ã�������º��������
void invert1 ( int * a , int len);  //һά����ķ�ת
void invert2 ( int (* a)[N] );  //��N*N�ľ����ԶԽ���Ϊ�ᷭת*/
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

