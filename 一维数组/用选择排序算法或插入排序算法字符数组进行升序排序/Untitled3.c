//4. 用选择排序算法或插入排序算法字符数组进行排序。
#include <stdio.h>
#include <stdlib.h>
#define N 10

//选择排序（升序）
void selectionSort(char a[])
{
    int i, j;
    char temp;
    for(i = 0; i < N-1; i++)
    {
        for(j = i+1; j < N; j++)
        {
            if(a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("%s", a);
}

//插入排序（降序）
void insertSort(char a[])
{
    int i, j;
    char temp;
    for(i = 1; i < N; i++)
    {
        temp = a[i];
        for(j = i-1; j >= 0; j--)
        {
            if(temp > a[j])
                a[j+1] = a[j];
            else
                break;
        }
        a[j+1] = temp;
    }
    printf("%s", a);
}

int main()
{
    char a[N] ={'o', 'y', 'z', 'a', 'j', 'k', 'a', '2', '4', '0'};
    printf("%s\n", a);
    selectionSort(a);
    printf("\n");
    insertSort(a);

    return 0;
}
