#include <stdio.h>
int main()
{
    int a = 1;
    int b = 0;
    int c = 0;
    while(scanf("%d", &b) != EOF)
    {
        c = a << b;
        printf("%d\n", c);
    }
    return 0;
}
