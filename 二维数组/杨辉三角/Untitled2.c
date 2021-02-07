//Ñî»ÔÈı½ÇÇ°10ĞĞ
#include<stdio.h>
int yangHuiI(int i, int j)
{
    if(i==0 || j==0 || i==j)
        return 1;
    else
        return i*yangHuiI(i-1, j-1);
}
int yangHuiJ(int i, int j)
{
    if(j==0 || i==j)
        return 1;
    else
        return j*yangHuiJ(i, j-1);
}

int main()
{
    int i, j;
    for(i = 0; i < 10; i++)
    {
        for(j = 0; j <= i; j++)
        {
            printf("%d ", yangHuiI(i, j)/yangHuiJ(i, j));
        }
        printf("\n");
    }
    return 0;
}
