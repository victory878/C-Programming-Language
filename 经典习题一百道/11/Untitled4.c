//求一个3*3的整型矩阵对角线元素之和。将原矩阵和求出的和输出。
//求一个3*3的矩阵各行元素的平均值；将原矩阵和求出的平均值全部输出。
//求一个3*3的矩阵各列元素的最大值，将原矩阵和求出的最大值全部输出。

#include<stdio.h>
int main()
{
    int a[3][3] = { {3, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    int i, j;
    int summ = 0;
    double sum = 0;
    double avr;
    int maxx;

    for(i = 0; i < 3; i++)
    {
        maxx = a[i][0];
        sum = 0;
        printf("| ");

        for(j = 0; j < 3; j++)
        {
            //这是打印矩阵
            printf("%d ", a[i][j]);

            //这是计算每行和
            sum += a[i][j];

            //这是为了找到对角线值
            if(i==j || (i+j==2 && (i==0 || j==0)))
                summ += a[i][j];
            //这是找最大值
            if(a[i][j] > maxx)
                maxx = a[i][j];
        }

        printf("|\t");
        avr = sum/3;
        printf("这一行的平均值为：%.2lf\t", avr);
        printf("最大值为：%d", maxx);
        printf("\n");
    }
    printf("The total is :%d", summ);
    return 0;
}
