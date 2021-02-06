//随机产生10个100以内的自然数，统计大于等于平均值的元素个数。
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void main()
{
    int num[10];
    srand(time(NULL));
    int i;
    int summ;
    for(i = 0; i < 10; i++)
    {
        num[i] = rand()%100;
        printf("%d ", num[i]);
        summ += num[i];
    }

    double avg = summ/10.0;
    printf("\n%.2lf", avg);

    int flag = 0;
    for(i = 0; i < 10; i++)
    {
        if(num[i] > avg)
            flag++;
    }
    printf("\n%d", flag);
    return 0;

}
