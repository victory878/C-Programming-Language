//��1��2��3��4�����֣�����ɶ��ٸ�������ͬ�����ظ����ֵ���λ�������Ƕ��٣�
#include<stdio.h>
int main()
{
    int i, j, h;
    int flag = 0;
    for(i = 1; i < 5; i++)
    {
        for(j = 1; j < 5; j++)
        {
            for(h = 1; h < 5; h++)
            {
                if(i != j && j != h&& i != h)
                {
                    printf("%d%d%d\n", i, j, h);
                    flag++;
                }
            }
        }
    }
    printf("\n%d", flag);
}
