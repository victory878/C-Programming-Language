//һ�������ǡ�õ�����������֮�ͣ�������ͳ�Ϊ��������������6=1��2��3.����ҳ�1000���ڵ�����������
#include<stdio.h>

int main()
{
    int num;
    int summ = 0;    //��¼���ӵĺ�
    int i;      //������
    int j;
    int amount = 0; //�����ĸ���
    for(j = 2;j <=1000; j++)
    {
        summ = 0;
        for(i = 1; i < j; i++)
        {
            if(j%i == 0)
                summ += i;
        }
        if(summ == j)
            amount++;
    }
    printf("�����ĸ���Ϊ��%d", amount);
    return 0;
}
