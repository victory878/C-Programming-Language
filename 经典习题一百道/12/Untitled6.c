//有一篇文章，有三行文字，每行有80个字符。要求统计出其中英文大写字母、消协字母、数字、空格以及其他字符的个数。
#include<stdio.h>
int main()
{
    int bigEng=0;
    int smlEng=0;
    int num=0;
    int spa=0;
    int oth=0;
    char text[3][80];

    int i,j;
    for(i = 0; i < 3; i++)
    {
        printf("请输入行%d:\n", i+1);
        gets(text[i]);
        for(j = 0;j<80 && text[i][j]!='\0'; j++)
        {
        if(text[i][j]>='A' && text[i][j]<='Z')
            bigEng++;
        else if(text[i][j]>='a' && text[i][j]<='z')
            smlEng++;
        else if(text[i][j]>='0' && text[i][j]<='9')
            num++;
        else if(text[i][j]==' ')
            spa++;
        else
            oth++;
        }
    }
    printf("大写字母:%d\n",bigEng);
    printf("小写字母:%d\n",smlEng);
    printf("数字:%d\n",num);
    printf("空格:%d\n",spa);
    printf("其它:%d\n",oth);
    return 0;
}
