
//�������������Լ��
#include<stdio.h>
int main()
{
    int m, n;
    int num;
    printf("������������ֵ��");
    scanf("%d %d",&m, &n);
    if(m > n)
    {
        for(; n != 0; )
        {
            num = m%n;
            m = n;
            n = num;
        }
        printf("%d", m);
    }
    else
    {
        for(; m != 0; )
        {
            num = n%m;
            n = m;
            m = num;
        }
        printf("%d", n);
    }

    return 0;
}

