//����һ��������������Ǽ�λ�������ԭ����λ����
#include<stdio.h>
int main()
{
    int m;
    printf("Please input a number:");
    scanf("%d", &m);
    printf("ԭ����%d", m);
    int flag = 1;
    while(m/10 >= 1)
    {
        flag++;
        m /= 10;
    }
    printf("\nλ����%d", flag);
    return 0;
}

