/*�ж�һ�����Ƿ�Ϊ���������������������������ɵĳ˷���ʽ*/

#include<stdio.h>
int q1(int num)//�ж�����
{

    int time;
    int flag;
    for(time = 1; time <= num; time++)
    {
        if(num%time == 0 && num != time)
        {
            flag = 0;
            break;
        }
        else
        {
            flag = 1;
            break;
        }
    }

    return flag;
}

void q2(int num)//�ֽ�������
{
    int i;
    printf("%d=", num);
    for(i = 2; i <= num; i++)
    {
       while(num%i == 0)
        {
            if(num != i)
            {
                num = num/i;
                printf("%d*",i);
            }
            else
            {
                num = num/i;
                printf("%d",i);
                break;
            }
        }
    }
}

int main()
{
    int num;
    printf("������һ������");
    scanf("%d", &num);
    int flag = q1(num);
    if(flag == 0)
    {
        q2(num);
    }
    else if(flag == 1)
    {
        printf("����\n");
    }

    return 0;
}
