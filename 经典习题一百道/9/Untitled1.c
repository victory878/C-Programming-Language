//�Ӽ�������������ѧ����һ�ſγɼ��������ƽ���֣������븺��ʱ�������롣����������
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
