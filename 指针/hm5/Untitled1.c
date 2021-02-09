//5、一个学习小组有若干学生（人数n在运行时输入，定义动态数组），输入每个人的平均成绩， 并按照一定顺序输出。
#include<stdio.h>
#define N 3
void selectSort( float* grade, int n, int type); //选择排序,type>0升序,type<=0降序
void print( float* f,  int n);//输出长度为n的浮点型数组

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
