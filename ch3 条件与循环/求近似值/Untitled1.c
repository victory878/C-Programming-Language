//�ڶ���
#include<stdio.h>
#include<math.h>
//��/4��ֵ
q1()
{
    double total = 0.0;
    double num = 1.0;
    int time;
    for(time = 1; fabs(num) > 1e-6; time++)
    {
        num = 1.0/(2*time - 1);
        if(time > 1 && time%2 == 0)
        {
            num = (-1.0)*num;
            total += num;
        }
        else
        {
            total += num;
        }
    }
    printf("%lf", total);
    return 0;
}

//��/2��ֵ
q2()
{
    double total = 1.0;
    double num = 1.0;
    int time = 1;
    do
    {
        num = 2.0*time*2*time/(2*time-1)/(2*time+1);
        total *= num;
        time++;
    }while(num-1.0 > 1e-6);
    printf("%lf", total);
    return 0;
}

int main()
{
    q1();
    printf("\n");
    q2();
    return 0;
}
