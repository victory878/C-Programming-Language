//��20�������ŵ�һά�����У��������������ֵ����Сֵ��
#include<stdio.h>
#define N 4
int main()
{
    int a[4];
    int maxx;    //���ֵ
    int minn;    //��Сֵ
    int i;

    printf("Please input numbers:\n");
    for(i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }

    maxx = a[0];
    minn = a[0];
    for(i = 1; i < N; i++)
    {
        if(maxx < a[i])
            maxx = a[i];

        if(minn > a[i])
            minn = a[i];

    }


    printf("���ֵ��%d����Сֵ��%d", maxx, minn);
    return 0;
}
