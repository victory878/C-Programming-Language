//��һ��
#include<stdio.h>

q1()//����m�Ľ׳�
{
    int n, sum;//nΪ����
    printf("������n��ֵ��");
    scanf("%d",&n);
    for(sum = 1; n >= 1; n--)
    {
        sum *= n;
    }
    printf("%d", sum);//�ܺ�
    return 0;
}

q2()//����1~m�Ľ׳˺�
{
    int m, time1, sum, total; //mΪ�������
    int time2;
    printf("������m��ֵ��");
    scanf("%d", &m);
    for(total = 0, time1 = 1; time1 <= m; time1++)
    {
        sum = 1;
        for(time2 = 1; time2 <= time1; time2++)
        {
            sum *= time2;

        }
        total += sum;//�ܺ�


    }
    printf("%d", total);
    return 0;
}

q3()//����e��ֵ
{
    int time1,time2;
    double mid = 1.0, sum = 1.0;

    for(time1 = 1; mid > 1e-6; time1++)
    {
        mid *= 1.0/time1;
        sum += mid;
    }

    printf("%lf", sum);
    return 0;
}

q4()//����e^x��ֵ
{
    double x;
    int time1, time2, time3;
    double mid = 1.0, sum = 1.0;
    printf("������x��ֵ��");
    scanf("%lf", &x);
    for(time2 = 1; mid > 1e-6; time2++)
    {
        mid *= x/time2;
        sum += mid;
    }

    printf("%lf", sum);
    return 0;
}

int main()
{
    q1();
    q2();
    q3();
    q4();
}
