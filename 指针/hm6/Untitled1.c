//6����д��������ָ������ַ����󴮳��ȣ�����ʹ�ÿ⺯��strlen
#include<stdio.h>
//#include<string.h>
int strLen( char* pStr); //����pStr����Ч�ַ��ĸ�����������\0

void main()
{
    char *str[] = {0};
    printf("������һ���ַ�����");
    scanf("%s", str);
    int len = strLen(str);
    printf("�ַ����ĳ���Ϊ:%d", len);
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
