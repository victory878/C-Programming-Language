//编写一个程序，将两个字符串连接起来，不要使用strcat函数。
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[] = "this is a sentence, ";
    char str2[] = "I need to connect them.";

    char str3[200] = {'0'};
    int i;
    for(i = 0; i < strlen(str1); i++)
    {
        str3[i] = str1[i];
    }
    for(i = strlen(str1); i < strlen(str1)+strlen(str2); i++)
    {
        str3[i] = str2[i-strlen(str1)];
    }

    printf("%s", str3);
    return 0;
}
