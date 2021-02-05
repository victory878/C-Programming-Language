//第八题
#include<stdio.h>
int main()
{
    int n;
    int sum=0;
    printf("请输入任意一个1-99999的数字:");
    scanf("%d", &n);
    while (n!=0)
        {
            printf("%d" , n%10);
            if(n%10 != 1)
            {

                printf("+");
            }

            sum+= n%10;
            n/=10;
        }
    printf("=%d\n", sum);
    return 0;
}
