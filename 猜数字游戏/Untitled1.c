#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void game()
{
    srand(time(NULL));
    int n = rand()%100+1;
    printf("_____����ʮ�λ������;�˳�____\n");
    int m = 0;
    int flag = 0;
    do
    {
        printf("��ѡ��");
        scanf("%d", &m);
        if(m < n)
            printf("��С��\n");
        else if(m > n)
            printf("�´���\n");
        else
            printf("��ϲ�㣬�¶���\n");
        if(m == 0)
        {
            printf("���ˣ� ������\n");
            break;
        }
         if(flag == 10)
        {
            printf("10���˶�");
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
    printf("������ѡ�");
    scanf("%d", &n);
    switch(n)
    {
    case 1:
        printf("��������Ϸ��\n");
        game();
        break;
    case 0:
        printf("�˳���Ϸ��");
        break;
    default:
        printf("ѡ�����\n");
        break;
    }
    }while(n);
    return 0;

}
