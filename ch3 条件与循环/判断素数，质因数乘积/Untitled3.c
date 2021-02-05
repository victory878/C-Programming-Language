/*判断一个数是否为素数，若不是输出其由质因数组成的乘法算式*/

#include<stdio.h>
int q1(int num)//判断素数
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

void q2(int num)//分解质因数
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
    printf("请输入一个数：");
    scanf("%d", &num);
    int flag = q1(num);
    if(flag == 0)
    {
        q2(num);
    }
    else if(flag == 1)
    {
        printf("素数\n");
    }

    return 0;
}
