//���������������Ƕ������ɴ��⣺ѧϰ�ɼ�>=90�ֵ�ͬѧ��A��ʾ��60-89��֮�����B��ʾ��60�����µ���C��ʾ��
#include<stdio.h>
int main()
{
    int grade;
    printf("Please input grades of students:");
    char score;
    char flag;
    while(1)
    {
        scanf("%d", &grade);
        score = grade>=90? 'A': (grade>=60? 'B': 'C');
        printf("%c\n", score);
        getchar();
        printf("if you want to continue to input please press CTRL+C");
        flag = getchar();
        if(flag == '\n')
            break;

    }
    printf("the programm ended");
    return 0;
}

