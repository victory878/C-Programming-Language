//求s=a+aa+aaa+aaaa+aa…a的值，其中a是一个数字。例如2+22+222+2222+22222(此时共有5个数相加)，几个数相加由键盘控制。
#include<stdio.h>
int main()
{
    int a, num; //a是一个数字，num控制个数
    printf("Please input the number and the amount:");
    scanf("%d %d", &a, &num);

    int i;
    int summ = 0;
    int flag = 1;
    int mid = a;
    for(i = 1; i <= num; i++)
    {
        summ += mid;
        flag *= 10;
        mid += a*flag;
    }
    printf("最终结果为：%d", summ);
    return 0;
}

