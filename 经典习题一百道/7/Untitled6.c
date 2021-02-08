//求下列试子的值：1-1/2+1/3-1/4+……+1/99-1/100，将结果输出。
#include<stdio.h>
int main()
{
    int i;
    double summ = 0;
    double flag = 1.0;
    for(i = 1; i <= 100; i++)
    {
        summ += flag/i;
        flag = -flag;
    }
    printf("The result is:%lf", summ);
    return 0;
}
