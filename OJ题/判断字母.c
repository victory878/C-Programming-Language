#include <stdio.h>
#include <ctype.h>
int main()
{
    char a = 0;
    while(scanf("%c", &a) != EOF)
    {
        getchar();
        if(isalpha(a))
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
