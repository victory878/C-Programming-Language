//��д���� int max( int arr[], int n ), ʵ�������������Ԫ�ص�λ�ã��������������һά���������Ԫ�ص��±��ֵ��
#include<stdio.h>
#define N 10
void converse(int *a,int *b);
void inverse(int a[][N],int n);
void input(int a[][N],int n);
void output(int a[][N],int n);

void converse(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void inverse(int a[][N], int n)
{
    int time1, time2;
    for(time1 = 0; time1 < n; time1++)
    {
        for(time2 = 0; time2 < time1; time2++)
        {
            converse(&a[time1][time2], &a[time2][time1]);
            //printf("%d ", arr[time1][time2]);
        }
        //printf("\n");
    }
}
void input(int a[][N], int n)
{
    int time1, time2;
    for(time1 = 0; time1 < n; time1++)
    {
        for(time2 = 0; time2 < n; time2++)
        {
            scanf("%d", &a[time1][time2]);
        }
    }
}
void output(int a[][N], int n)
{
    int time1, time2;
    for(time1 = 0; time1 < n; time1++)
    {
        for(time2 = 0; time2 < n; time2++)
        {

            printf("%d ", a[time1][time2]);
        }
        printf("\n");
    }
}
void main()
{
    int a[N][N] = {0};
    int n;
    scanf("%d", &n);
    input(a, n);
    inverse(a, n);
    output(a, n);
}
