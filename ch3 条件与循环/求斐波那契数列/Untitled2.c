//第四题
#include<stdio.h>
int main()
{
    int n;
    int f0 = 0;
    int f1 = 1;
    int fi;
    int i = 1;
    printf("请输入n（n>=2）:");
    scanf("%d", &n);
    while(i < n)
    {
        if(i == 1)
        {
            printf("%d\t", f0);
        }
        else if(i == 2)
        {
            printf("%d\t", f1);
        }
        else
        {
            fi = f0 + f1;
            f0 = f1;
            f1 = fi;
            printf("%d\t", fi);
        }

        if(i%8 == 0)
        {
            printf("\n");
        }
        ++i;
    }

    return 0;
}
