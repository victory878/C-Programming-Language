/*��д�ж������ĺ���, �������������ã����n~m֮�������������
	int prime ( int m ) ;   // ��mΪ�����򷵻�1�����򷵻�0*/
#include<stdio.h>
int prime(int num)
{
    int time;
    for(time = 2; time <= num; time++)
    {
        if(num > 1)
        {
            if(num%time == 0)
            {
                if(num == time)
                    return 1;
                else
                    return 0;
            }
        }

    }
}

void main()
{
    int n, m;
    printf("����������ֵ����ʽ��n m��");
    scanf("%d %d", &n, &m);

    int time, res;
    for(time = n; time <= m; time++)
    {
        res = prime(time);
        if(res == 1)
        {
            printf("%d ", time);
        }

    }
}
