//2、寻找n个元素的整型数组中最大元素的位置

#include<stdio.h>

 //返回最大元素的地址
int* max( int *a , int n)
{
    int max = *a;
    int i;
    for(i = 1; i < n; i++)
    {
        if(*(a+i) > max)
            max = *(a+i);
    }
    for(i = 0; i < n; i++)
    {
        if(*(a+i) == max)
            return a+i;
    }
}

void main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 19, 10};
    int res = max(arr, 10);
    printf("最大值在数组中的位置是：%p", res);
}
