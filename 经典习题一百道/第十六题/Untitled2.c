//��������������m��n���������Լ������С��������
#include<stdio.h>
//�����Լ��
int q(int m, int n)
{
    int i;
    i = m>n? n : m;
    for(; i >= 1; i--)
    {
        if(m%i == 0)
        {
            if(n%i == 0)
            {
                //printf("%d", i);
                return i;
            }
        }

    }

}

//����С������:������Ȼ����� == ���Լ������С������


int main()
{
    int m, n;
    printf("Please input two numbers:");
    scanf("%d %d", &m, &n);

    int yue; //���Լ��
    int bei; //��󹫱���
    yue = q(m, n);
    bei = m*n/yue;
    printf("���Լ����%d\n", yue);
    printf("��С��������%d", bei);
    return 0;
}
