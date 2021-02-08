//利用条件运算符的嵌套来完成此题：学习成绩>=90分的同学用A表示，60-89分之间的用B表示，60分以下的用C表示。
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

