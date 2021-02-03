/*编写函数 int max( int arr[], int n ), 实现求数组中最大元素的位置，在主函数中输出一维数组中最大元素的下标和值。*/
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

//求数组中最大元素的位置
int max(int arr[], int n)
{
    int time1;
    int maxx = arr[0];
    for(time1 = 1; time1 < n; time1++)
    {

        if(maxx < arr[time1])
            maxx = arr[time1];
    }
    for(time1 = 1; time1 < n; time1++)
    {

        if(maxx == arr[time1])
            return time1;
    }

}

void main()
{
    srand(time(0));
    int arr[10] = {0};
    int time1 = 0;
    int res;
    while(time1 < 10)
    {
        arr[time1] = rand()%50;
        printf("%d ", arr[time1]);
        time1++;
    }
    res = max(arr, 10);
    printf("\n %d \n %d", res, arr[res]);

}
