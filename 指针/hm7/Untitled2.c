//7、编写函数，用指针操作实现字符串的复制，不能使用库函数strcpy
#include<stdio.h>
#include<string.h>

int strCopy( char* pStr1, int n, char* pStr2); //注意检测pStr1指向的长度为n的字符数组有足够的空间存放字符串pStr2，若存整的字符串pStr2，则不进行复制，函数返回0。

int main()
{
    char dest[100] = {0};
    char *str[] = {0};
    printf("请输入一个字符串:");
    scanf("%s", str);
    printf("\n%d\n", strlen(str));

    if(strlen(str) < 100)
    {
        strCopy(dest, strlen(str), str);
        printf("复制后的字符串为：%s", dest);

    }
}

int strCopy( char* pStr1, int n, char* pStr2)
{
    int i;
    for(i = 0; i < n; i++)
    {
        *(pStr1+i) = *(pStr2+i);
    }
}
