/*һ���������������ӣ�����1��������������֮�͵��ڸ������������Ϊ����������6��һ����������Ϊ6=1+2+3��
 ��дһ��isPerfectnum�������жϲ���number�Ƿ�Ϊ���������øú����жϲ���ӡ1��1000֮�������������*/
#include<stdio.h>
int isPerfectnum(int n)
{
    int time;
    int a[1000] = {0};
    int sum = 0;
    for(time = 1; time < n; time++)
    {
        if(n%time == 0 && n != time)
        {
            a[time-1] = time;
        }
        sum += a[time-1];
    }
    if(sum == n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void main()
{
    int time;
    int res;
    for(time = 2; time <= 1000; time++)
    {
        res = isPerfectnum(time);
        if(res == 1)
        {
            printf("%d ", time);
        }
    }
}
