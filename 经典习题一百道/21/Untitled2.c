//������1+2+3+��+n<500������N��������ͣ���д����ʵ�֡�
#include<stdio.h>
int main()
{
    int a = 1;
    int summ = 0;
    while(summ<500)
    {
        summ += a;
        a++;
        //printf("%d\n", a);
    }
    printf("N = %d\n", a-1);
    printf("total = %d", summ-a+1);

    return 0;
}
