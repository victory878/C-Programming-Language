//从键盘上输入若干学生的一门课成绩，计算出平均分，当输入负数时结束输入。将结果输出。
#include<stdio.h>
int main()
{
    double grade;
    printf("Please input students' grades:");

    double avr;
    int flag = 0;
    double summ = 0;
    while(1)
    {
        scanf("%lf", &grade);
        if(grade < 0)
            break;
        summ += grade;
        flag++;
    }

    avr = summ/flag;
    printf("The average grade is :%lf", avr);
    return 0;
}
