//������������x,y,z���������������С���������
#include<stdio.h>

int main()
{
    int x, y, z;
    printf("Please input three numbers:form(x y z)");
    scanf("%d %d %d", &x, &y, &z);
    int flag;
    if(x > y)
    {
        flag = x;
        x = y;
        y = flag;
    }
    if(y > z)
    {
        flag = y;
        y = z;
        z = flag;
    }
    if(x > z)
    {
        flag = x;
        x = z;
        z = flag;
    }
    printf("%d %d %d", x, y, z);
}

