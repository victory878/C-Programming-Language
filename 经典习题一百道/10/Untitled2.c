//��дһ��ͳ��ѧ���ɼ�����������¹��ܣ�����4��ѧ����2�ſγɼ������ȫ�����ƽ���֣�����������
#include<stdio.h>
#define NUM 4    //��ѧ����
#define CLASS 2  //�ܿƳ���

struct Student
{
    char name[10];          //ѧ������
    double score[CLASS];    //����ѧ��ÿ��ѧ�Ƴɼ�
}
stu[NUM];

int main()
{
    //�������
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
