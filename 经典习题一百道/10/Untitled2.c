//编写一个统计学生成绩程序，完成以下功能：输入4个学生的2门课成绩；求出全班的总平均分，将结果输出。
#include<stdio.h>
#define NUM 4    //总学生数
#define CLASS 2  //总科程数

struct Student
{
    char name[10];          //学生姓名
    double score[CLASS];    //单个学生每个学科成绩
}
stu[NUM];

int main()
{
    //存放数据
    int i, j;
    double summ = 0;
    for(i = 0; i < NUM; i++)
    {
        printf("Please input the %d student's nmae:\n", i+1);
        scanf("%s", stu[i].name);

        for(j = 0; j < CLASS; j++)
        {
            printf("score%d:", j+1);
            scanf("%lf", &stu[i].score[j]);
            summ += stu[i].score[j];
        }
    }

    double avr = summ/(NUM*CLASS);
    printf("the avrage is :%5.2lf", avr);
    return 0;
}
