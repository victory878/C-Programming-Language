//�ŵ����⣺��һ�����ӣ��ӳ������3������ÿ���¶���һ�����ӣ�С���ӳ�����������
//��ÿ��������һ�����ӣ��������Ӷ���������ÿ���µ���������Ϊ���٣�

#include<stdio.h>

int rab(int month)
{
    if(month==1 || month==2)
        return 1;
    else
        return rab(month-1)+rab(month-2);
}
int main()
{
    int m;
    printf("Please input the month you want to know:");
    scanf("%d", &m);
    printf("On the %dth month, the number of rabbits is :%d\n", m, rab(m));
    return 0;
}
