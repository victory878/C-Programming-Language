//��s=a+aa+aaa+aaaa+aa��a��ֵ������a��һ�����֡�����2+22+222+2222+22222(��ʱ����5�������)������������ɼ��̿��ơ�
#include<stdio.h>
int main()
{
    int a, num; //a��һ�����֣�num���Ƹ���
    printf("Please input the number and the amount:");
    scanf("%d %d", &a, &num);

    int i;
    int summ = 0;
    int flag = 1;
    int mid = a;
    for(i = 1; i <= num; i++)
    {
        summ += mid;
        flag *= 10;
        mid += a*flag;
    }
    printf("���ս��Ϊ��%d", summ);
    return 0;
}

