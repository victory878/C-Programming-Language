//�������20��������10����Ȼ��������洢��һ����ά�����У�
//��ż���������ֱ�洢�ڲ�ͬ���ϡ���������鲢ͳ��ż���������ĸ�����
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int judge(int n)//�ж���ż��
{
    if(n%2 == 0)
        return 1;
    else
        return 0;
}

int main()
{
    srand(time(NULL));
    int a[2][20] ={0};
    int n;//�����
    int i;//ѭ��������
    int flag1 = 0;//�����һ�У��м�����
    int flag2 = 0;//����ڶ��У��м�����
    int j;//�����ж�ֵ
    for(i = 0; i < 20; i++)
    {
        n = rand()%11;
        j = judge(n);
        if(j)
        {
            a[j][flag1] = n;
            flag1++;
        }
        else
        {
            a[j][flag2] = n;
            flag2++;
        }
    }

    for(i = 0; i < flag2; i++)
        printf("%d ", a[0][i]);
    printf("\n�����ĸ���Ϊ��%d\n", flag2);

    for(i = 0; i < flag1; i++)
        printf("%d ", a[1][i]);
    printf("\nż���ĸ���Ϊ��%d", flag1);
    return 0;
}
