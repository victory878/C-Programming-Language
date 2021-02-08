//编写程序，输入任意一个1～7之间的整数，将他们转换成对应的英文单词。例如：1转换成Monday,7转换成Sunday。
#include<stdio.h>
int main()
{
    int num;
    printf("Please input a number:");
    scanf("%d", &num);
    switch(num)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Weddnesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;
    }
    return 0;
}
