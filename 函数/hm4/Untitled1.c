/*输入一个日期，计算并输出该日期为当年的第几天，要求使用闰年函数*/
#include<stdio.h>

int leap(int m)
{
    if(m%4==0 && m%100!=0)
        return 1;
    if(m%400 == 0)
        return 2;
    else
        return 3;
}

int main()
{
    int year, mon, day;
    printf("The format is(年/月/日):");
    scanf("%d/%d/%d", &year, &mon, &day);

    int month1[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int month2[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int m = leap(year);
    int i;
    int summ = 0;
    if(m==1 || m==2)
    {
        for(i = 0; i < mon-1; i++)
        {
            summ += month1[i];
        }
        summ += day;
        printf("这是今年第%d天", summ);
    }
    else
    {
        for(i = 0; i < mon-1; i++)
        {
            summ += month2[i];
        }
        summ += day;
        printf("这是今年第%d天", summ);

    }
    return 0;
}
