//��һ���������ظ�Ԫ��ȥ��, �����������д洢, ���������ʣ���Ԫ�ؼ�����Ŀ
#include<stdio.h>
int main()
{
    int a[12] = {1, 1, 2, 7, 3, 2, 3, 4, 5, 8, 7, 4};
    int i, j;
    int b[12] = {0};
    //printf("%d", b[3]);
    for(i = 0; i < 12; i++)
    {
        for(j = i+1; j < 12; j++)
        {
            if(a[i] == a[j])
                b[j] = 1;
        }
    }
    int flag = 0;
    for(i = 0; i < 12; i++)
    {
        if(b[i] == 0)
        {
            printf("%d ", a[i]);
            flag++;
        }
        else
            a[i] = 0;
    }
    printf("\n�����ǣ�%d", flag);
    return 0;
}
