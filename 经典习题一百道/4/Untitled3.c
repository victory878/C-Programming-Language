//��1!+2!+3!+����+20!������������
#include<stdio.h>

int main()
{
    int i, j;
    int summ;
    int mid = 1;
    for(i = 1;i <= 2; i++)
    {
        mid = 1;
        for(j = i; j >= 1; j--)
            mid *= j;
        summ += mid;
    }
    printf("����ǣ�%d", summ);
    return 0;
}
