//6、编写函数，用指针遍历字符串求串长度，不能使用库函数strlen
#include<stdio.h>
//#include<string.h>
int strLen( char* pStr); //计算pStr中有效字符的个数，不包括\0

void main()
{
    char *str[] = {0};
    printf("请输入一个字符串：");
    scanf("%s", str);
    int len = strLen(str);
    printf("字符串的长度为:%d", len);
//    printf("\nstrlen(str) = %d", strlen(str));
}

int strLen( char* pStr)
{
    int i = 0;
    while(*(pStr+i) != '\0')
    {
        i++;
    }
    return i;
}
