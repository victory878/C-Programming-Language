//һ��������������100����һ����ȫƽ�������ټ���168����һ����ȫƽ���������ʸ����Ƕ��٣�

//��ʹ�õ�������Ľⷨ
/*#include<stdio.h>

int find(m)
{
    int i, j; //������

    for(i = 1; i < (m+100)/2; i++)
    {
        if(i*i == m+100)
        {
            for(j = i; j < (m+268)/2; j++)
            {
                if(j*j == m+268)
                {
                    return m;
                    break;
                }
            }
        }
    }
    return 0;
}
int main()
{
    int m = 1; //����������
    while(m < 10000000)
    {

        int judge = find(m);

        if(judge == 0)
            m++;
        else
        {
            printf("�������ǣ�%d\n", judge);
            m++;
            //break;
        }
        //printf("%d\n", m);

    }
    return 0;
}*/

#include<stdio.h>
#include<math.h>

int main()
{
	long int i, x, y, z;
	for (i = 1; i < 100000; i++)
		{
			x = sqrt(i+100); /*xΪ����100�󿪷���Ľ��*/
			y = sqrt(i+268); /*yΪ�ټ���168�󿪷���Ľ��*/
			if(x*x==i+100 && y*y==i+268) /*���һ������ƽ������ƽ�����ڸ�������˵����������ȫƽ����*/
				printf("\n%ld\n", i);
		}
	return 0;
}
