//7����д��������ָ�����ʵ���ַ����ĸ��ƣ�����ʹ�ÿ⺯��strcpy
#include<stdio.h>
#include<string.h>

int strCopy( char* pStr1, int n, char* pStr2); //ע����pStr1ָ��ĳ���Ϊn���ַ��������㹻�Ŀռ����ַ���pStr2�����������ַ���pStr2���򲻽��и��ƣ���������0��

int main()
{
    char dest[100] = {0};
    char *str[] = {0};
    printf("������һ���ַ���:");
    scanf("%s", str);
    printf("\n%d\n", strlen(str));

    if(strlen(str) < 100)
    {
        strCopy(dest, strlen(str), str);
        printf("���ƺ���ַ���Ϊ��%s", dest);

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
