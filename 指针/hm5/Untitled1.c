//5��һ��ѧϰС��������ѧ��������n������ʱ���룬���嶯̬���飩������ÿ���˵�ƽ���ɼ��� ������һ��˳�������
#include<stdio.h>
#define N 3
void selectSort( float* grade, int n, int type); //ѡ������,type>0����,type<=0����
void print( float* f,  int n);//�������Ϊn�ĸ���������

int main()
{
    float arr[N] = {0};
    int i;
    for(i = 0; i < N; i++)
        scanf("%f", &arr[i]);
    selectSort(arr, N, 2);
}

void selectSort( float* grade, int n, int type)
{
    int i, j;
    float mid;
    if(type > 0)
    {
        for(i = 0; i < n; i++)
        {
            for(j = i+1; j < n;j++)
            {
                if(grade[i] > grade[j])
                {
                    mid = grade[i];
                    grade[i] = grade[j];
                    grade[j] = mid;
                }
            }
        }
    }

    else
    {
        for(i = 0; i < n; i++)
        {
            for(j = i+1; j < n;j++)
            {
                if(grade[i] <= grade[j])
                {
                    mid = grade[i];
                    grade[i] = grade[j];
                    grade[j] = mid;
                }
            }
        }
    }
    print(grade, N);
}

void print( float* f,  int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        printf("%f ", *(f+i));

    }
}
