/*��д������֤��°ͺղ��룺 һ����С��6��ż�����Ա�ʾ����������֮�͡���6��3��3��8��3��5��10��3��7������
 ��������������һ������6��ż��n������34�����������ʽ��34��3��31�����������Ҫ���������������*/
#include<stdio.h>
//�жϼ����Ƿ�Ϊ����
int prime(int n)
{
    int i;
    for(i = 2; i <= n; i++)
    {
        if(n%i == 0)
        {
            if(n != i)
                return 0;
            else
                return 1;
        }
    }
}
//�ж�����ֵ�Ƿ��������
int judge(int n)
{
    if(n%2==0 && n>6)
        return 0;
    else
        return 1;
}

int main()
{
    int n;
    printf("������һ�����֣�");
    scanf("%d", &n);
    while(judge(n))
    {
        printf("��������һ��������6��ż����");
        scanf("%d", &n);
    }
    //printf("end");

    printf("%d = ", n);

    int i, j;
    int flag = 0;
    for(i = 2; i < n; i++)
    {
        for(j = 2; j < n; j++)
        {
            if(prime(i) && prime(j))
            {
                if(i+j == n)
                {
                    printf("%d + %d", i, j);
                    flag++;
                    break;
                }
            }
        }
        if(flag == 1)
            break;
    }
    return 0;
}

