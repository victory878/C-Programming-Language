//��һ��3*3�����;���Խ���Ԫ��֮�͡���ԭ���������ĺ������
//��һ��3*3�ľ������Ԫ�ص�ƽ��ֵ����ԭ����������ƽ��ֵȫ�������
//��һ��3*3�ľ������Ԫ�ص����ֵ����ԭ�������������ֵȫ�������

#include<stdio.h>
int main()
{
    int a[3][3] = { {3, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    int i, j;
    int summ = 0;
    double sum = 0;
    double avr;
    int maxx;

    for(i = 0; i < 3; i++)
    {
        maxx = a[i][0];
        sum = 0;
        printf("| ");

        for(j = 0; j < 3; j++)
        {
            //���Ǵ�ӡ����
            printf("%d ", a[i][j]);

            //���Ǽ���ÿ�к�
            sum += a[i][j];

            //����Ϊ���ҵ��Խ���ֵ
            if(i==j || (i+j==2 && (i==0 || j==0)))
                summ += a[i][j];
            //���������ֵ
            if(a[i][j] > maxx)
                maxx = a[i][j];
        }

        printf("|\t");
        avr = sum/3;
        printf("��һ�е�ƽ��ֵΪ��%.2lf\t", avr);
        printf("���ֵΪ��%d", maxx);
        printf("\n");
    }
    printf("The total is :%d", summ);
    return 0;
}
