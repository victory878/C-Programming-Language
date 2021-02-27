#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void game()
{
    srand(time(NULL));
    int n = rand()%100+1;
    printf("_____你有十次机会或中途退出____\n");
    int m = 0;
    int flag = 0;
    do
    {
        printf("请选择：");
        scanf("%d", &m);
        if(m < n)
            printf("猜小了\n");
        else if(m > n)
            printf("猜大了\n");
        else
            printf("恭喜你，猜对了\n");
        if(m == 0)
        {
            printf("算了， 不猜了\n");
            break;
        }
         if(flag == 10)
        {
            printf("10次了都");
            break;
        }
        flag++;
    }while(m!= n);
}

void menu()
{
    printf("********************************\n");
    printf("******   1.game   0.exit   *****\n");
    printf("********************************\n");
}

int main()
{
    int n;

    do
    {
    menu();
    printf("请输入选项：");
    scanf("%d", &n);
    switch(n)
    {
    case 1:
        printf("猜数字游戏：\n");
        game();
        break;
    case 0:
        printf("退出游戏。");
        break;
    default:
        printf("选择错误\n");
        break;
    }
    }while(n);
    return 0;

}
