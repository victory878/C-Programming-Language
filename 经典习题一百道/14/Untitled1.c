//��15�������ŵ�һά�����У�����������е����ֵ�����±꣬Ȼ�����������е���ǰ���Ԫ�ضԻ���
#include<stdio.h>
int main()
{
    int a[15] = {0};
    int i;
    int maxx;
    int flag;

    printf("Please input fiftenn numbers:");
    for(i = 0; i < 15; i++)
    {
        scanf("%d", &a[i]);

    }

    maxx = a[0];
    for(i = 1; i < 15; i++)
    {
        if(maxx < a[i])
        {
            maxx = a[i];
            flag = i;
        }
    }
    printf("the max is:%d, it's flag is:%d", maxx, flag);

    int temp;
    temp = maxx;
    maxx = a[0];
    a[0] = temp;

    return 0;
}
