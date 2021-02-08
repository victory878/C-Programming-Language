//将字符数组str1种下标为偶数的元素赋给另一字符数组str2，并输出str1和str2。
#include<stdio.h>
int main()
{
    char str[] = "strlen";
    char str2[] = "";

    int flag = 0;
    int i;
    for(i = 0; i < 7; i++)
    {
        printf("%c", str[i]);
        if(i%2 == 0)
        {
            str2[flag] = str[i];
            flag++;
        }
    }

    printf("\n%s", str2);
    return 0;
}
