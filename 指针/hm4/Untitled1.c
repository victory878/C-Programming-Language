/*4��n��ѧ���μ���ĩ���ԣ�ÿ����3�ſγ̵ĳɼ���
��ƺ�����ͳ�Ƴɼ�ÿ�˵�ƽ���֣�������������������سɼ��б�*/
#include<stdio.h>
#define N 5
void average( float ( * score)[3], int n, float * ave)
{
    int i, j;
    float sum;
    float avg;
    for(i = 0; i < n; i++)
    {
        sum = 0;
        for(j = 0; j < 3; j++)
        {
            sum += *(score[i]+j);
        }
        avg = sum/3;
        *(ave+i) = avg;
    }
}

int main()
{
    float arr[N][3] = {{97, 87, 78}, {57, 68, 92}, {78, 45, 69}, {93, 83, 59}, {34, 56, 99}};
    float a[N] = {0};
    average(arr, N, a);
    int i, j;
    for(i = 0; i < N; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%f\t", arr[i][j]);
        }
        printf("%f", a[i]);
        printf("\n");
    }
}
