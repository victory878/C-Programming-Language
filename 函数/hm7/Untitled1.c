//��д������һ��������1000��ʮ��������ת���ɶ��������������������������
#include<stdio.h>

//��ʮ����ת��Ϊ������
int binarySystem(int m)
{
    if(m%2 == 0)
        return 0;
    if(m%2 == 1)
        return 1;

}

//����ʮ���Ƶ���convert��������
int main()
{
    int m;
    scanf("%d", &m);
    while(m > 1000)
    {
        printf("����������һ��С��1000������");
        scanf("%d", &m);
    }

    int a[12] = {0};
    int i = 0;
    while(m >= 1)
    {
        a[11-i] = binarySystem(m);
        m /= 2;
        i++;
    }

    for(i = 0; i < 12; i++)
        printf("%d", a[i]);
    return 0;
}
