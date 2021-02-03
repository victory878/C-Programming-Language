//编写函数将一个不大于1000的十进制整数转换成二进制数，并在主函数中输出。
#include<stdio.h>

//将十进制转换为二进制
int binarySystem(int m)
{
    if(m%2 == 0)
        return 0;
    if(m%2 == 1)
        return 1;

}

//输入十进制调用convert（）函数
int main()
{
    int m;
    scanf("%d", &m);
    while(m > 1000)
    {
        printf("给老子输入一个小于1000的数：");
        scanf("%d", &m);
    }

    int a[12] = {0};
    int i = 0;
    while(m >= 1)
    {
        a[11-i] = binarySystem(m);
        m /= 2;
        i++;
    }

    for(i = 0; i < 12; i++)
        printf("%d", a[i]);
    return 0;
}
