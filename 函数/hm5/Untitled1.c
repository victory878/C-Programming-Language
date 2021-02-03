/*编写函数实现若干的数排序，在主函数中测试以下函数。
   void bubbleSort( int a[], int n);  // 优化的冒泡排序，对n个整数进行升序
   void selectSort( double b[], int n) ;  // 选择排序，对n个实数进行降序

   /* 函数功能：插入排序
参数说明：长度为n的字符数组c
          排序方式mode=0升序， mode=1降序排序
   */
   void insertSort( char c[], int n, int mode);   */
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

//冒泡排序（升序）
void bubbleSort(int a[], int n)
{
    int time1, time2;
    int mid;
    for(time1 = 0; time1 < n; time1++)
    {
        for(time2 = 0; time2 < n-time1;time2++)
        {
            if(a[time2+1] < a[time2])
            {
                mid = a[time2];
                a[time2] = a[time2+1];
                a[time2+1] = mid;
            }
        }
    }
}

//选择排序（降序）
void selectSort(double b[], int n)
{
    int time1, time2;
    double mid;
    for(time1 = 0; time1 < n; time1++)
    {
        for(time2 = time1+1; time2 < n;time2++)
        {
            if(b[time1] < b[time2])
            {
                mid = b[time1];
                b[time1] = b[time2];
                b[time2] = mid;
            }
        }
    }
}

//插入排序
void insertSort(char c[], int n, int mode)
{
    int time1, time2;
    char mid;
    if(mode == 0)//升序
    {
        for(time1 = 1; time1 < n; time1++)
        {
            mid = c[time1];
            for(time2 = time1-1; time2 >= 0; time2--)
            {
                if(mid < c[time2])
                    c[time2+1] = c[time2];
                else
                    break;
            }
            c[time2+1] = mid;
        }
    }
    if(mode == 1)//降序
    {
        for(time1 = 1; time1 < n; time1++)
        {
            mid = c[time1];
            for(time2 = time1-1; time2 >= 0; time2--)
            {
                if(mid > c[time2])
                    c[time2+1] = c[time2];
                else
                    break;
            }
            c[time2+1] = mid;
        }
    }
}

void main()
{
    srand(time(0));
    int a[10] = {0};
    double b[10] = {0};
    char c[10] = {0};
    int time1 = 0;
    while(time1 < 10)
    {
        a[time1] = rand()%10;
        b[time1] = rand()%50*1.0;
        c[time1] = 'a' + rand()%26;
        //printf("%d ", a[time1]);
        time1++;
    }

    //printf("\n");
    //冒泡排序
    bubbleSort(a, 10);
    time1 = 0;
    while(time1 < 10)
    {

        printf("%d ", a[time1]);
        time1++;
    }


    printf("\n\n");

    //选择排序
    selectSort(b, 10);
    time1 = 0;
    while(time1 < 10)
    {

        printf("%lf ", b[time1]);
        time1++;
    }

    printf("\n\n%s", c);
    //插入排序
    insertSort(c, 10, rand()%2);
    printf("\n\n%s", c);
}
