//һ��ѧϰС����5���ˣ�ÿ������3�ſεĿ��Գɼ������ÿ�ſε�ƽ���ɼ���
//����ÿ�˵�ƽ���ɼ������ս��������
#include<stdio.h>
int main()
{
    double grade[3][5] = {{80, 61, 59, 85, 76}, {75	, 65, 63, 87, 77}, {92, 71, 70, 90, 85}};
    double score[5] = {0};
    int i, j;
    int sum;
    double avg;

    //���ÿ�ſε�ƽ���ɼ�
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
    //����ÿ�˵�ƽ���ɼ�
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
    //���ս������
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
