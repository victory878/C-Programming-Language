//��100��200֮��Ĳ��ܱ�3�������������
#include<stdio.h>
int main()
{
    int a;
    for(a = 100; a <= 200; a++)
    {
        if(a%3 != 0)
            printf("%d\n", a);
    }
    return 0;
}
