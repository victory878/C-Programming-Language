//����һ�������������ԭ���������ӡ����λ����
#include<stdio.h>
int main()
{
    int m;
    printf("Please input a number:");
    scanf("%d", &m);
    printf("ԭ����%d", m);

    printf("\n�����ӡ�ĸ�λ���֣�");
    while(m/10 >= 1)
    {
        printf("%d", m%10);
        m /= 10;
    }
    printf("%d", m);
    return 0;
}
