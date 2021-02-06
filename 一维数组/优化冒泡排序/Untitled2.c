//输入8个小数，用优化的冒泡排序算法对其进行降序排序。
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void bubbleSort(double n[], int a)
{
    int i, j;
    double temp;
    int flag;
    for(i = 0; i < a-1; i++)
    {
        flag = 0;
        for(j = 1; j < a-i; j++)
        {
            if(n[j] > n[j-1])
            {
                temp = n[j];
                n[j] = n[j-1];
                n[j-1] = temp;
                flag++;
            }

        }
        if(flag == 0)
            break;
    }
    for(i = 0; i < a; i++)
    {
        printf("%lf ", n[i]);
    }
}

int main()
{
    double n[8] = {0.0};

    srand(time(NULL));
    int i = 0;
    while(i < 8)
    {
        n[i] = rand()%100;
        printf("%lf ", n[i]);
        i++;
    }
    printf("\n");
    bubbleSort(n, 8);
    return 0;
}
