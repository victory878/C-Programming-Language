//��д������������һ��1��7֮���������������ת���ɶ�Ӧ��Ӣ�ĵ��ʡ����磺1ת����Monday,7ת����Sunday��
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
