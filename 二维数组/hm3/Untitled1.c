//�ҳ���ά�����е����а��㣬�ȸ�λ�õ�Ԫ���ڸ�������󣬵����ڸ�������С��
//Ҳ�п���û�а��㡣
#include <stdio.h>
//�����е����ֵ�б�
int Max(int a[][3], int i)//iΪ������
{
    int n;//������
    int max = a[i][0];
    int flag = 0;
    for(n = 1; n < 3; n++)
    {
        if(max < a[i][n])
        {
            max = a[i][n];
            flag = n;
        }
    }
    return flag;
}
//��������Сֵ�б�
int Min(int a[][3], int j)//jΪ������
{
    int n;//������
    int min = a[0][j];
    int flag = 0;
    for(n = 1; n < 3; n++)
    {
        if(min > a[n][j])
        {
            min = a[n][j];
            flag = n;
        }
    }
    return flag;
}
int main()
{
    int a[3][3];
    int i, j;
    for(i = 0; i < 3; i++)
    {
        printf("��%d�У�", i+1);
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int max;
    int min;
    int flag = 1;
    for(i = 0; i < 3; i++)
    {
        max = Max(a, i);
        for(j = 0; j < 3; j++)
        {
            if(max == j)
            {
                min = Min(a, j);
                if(min == i)
                {
                    printf("��%d���е�, a[%d][%d], %d\n", flag, i+1, j+1, a[i][j]);
                    flag++;
                }
            }
        }
    }
    if(flag == 1)
        printf("�ްе�");
    return 0;
}

