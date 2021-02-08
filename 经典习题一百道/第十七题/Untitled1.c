//输入一行字符，分别统计出其中英文字母、空格、数字和其它字符的个数。
#include<stdio.h>

int main()
{
    printf("Please input some charaters to do analysis:");

    int eng = 0;    //统计英文字母
    int space = 0;  //统计空格
    int num = 0;    //统计数字
    int other = 0;  //统计其他字符
    char c;

    while((c = getchar()) != '\n')
    {
      	if(c >= 'a' &&c <= 'z' || c >= 'A' && c<='Z')
			eng++;
		else if(c == ' ')
			space++;
		else if(c >= '0' && c <= '9')
			num++;
		else
			other++;
    }
    printf("字母的个数是：%d\n", eng);
    printf("数字的个数是：%d\n", num);
    printf("空格的个数是：%d\n", space);
    printf("其他字符的个数是：%d\n", other);
    return 0;
}

