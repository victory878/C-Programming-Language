//一个学习小组有5个人，每个人有3门课的考试成绩，输出每门课的平均成绩，
//计算每人的平均成绩并按照降序输出。
#include<stdio.h>
int main()
{
    double grade[3][5] = {{80, 61, 59, 85, 76}, {75	, 65, 63, 87, 77}, {92, 71, 70, 90, 85}};
    double score[5] = {0};
    int i, j;
    int sum;
    double avg;

    //输出每门课的平均成绩
    for(i = 0; i < 3; i++)
    {
        sum = 0;
        for(j = 0; j < 5; j++)
        {
            sum += grade[i][j];
        }
        avg = sum/5.0;
        printf("%.2lf ", avg);
    }
    printf("\n");
    //计算每人的平均成绩
    for(i = 0; i < 5; i++)
    {
        sum = 0;
        for(j = 0; j < 3; j++)
        {
            sum += grade[j][i];
        }
        avg = sum/3.0;
        score[i] = avg;
    }
    //按照降序输出
    double temp;
    for(i = 1; i < 5; i++)
    {
        temp = score[i];
        for(j = i-1; j >= 0; j--)
        {
            if(temp > score[j])
                score[j+1] = score[j];
            else
                break;
        }
        score[j+1] = temp;
    }
    for(i = 0; i < 5; i++)
        printf("%.2lf ", score[i]);
    return 0;
}
