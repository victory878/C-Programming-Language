//�ڰ���
#include<stdio.h>
int main()
{
    int n;
    int sum=0;
    printf("����������һ��1-99999������:");
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
