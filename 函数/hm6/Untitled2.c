/*编写求指数幂的函数，设计并调用函数。不要用任何数学库函数。
1）  用迭代的算法实现函数，指数exponent可为正整数，负整数或零。
2）用递归算法实现函数，假设exponent是大于或等于1的整数值，底数base为整数。*/
#include<stdio.h>
#define X 2
int count1(int num)
{
    if(num > 1)
        return X*count1(num - 1);
    else
        return X;
}

double count2(int num)
{
    if(num > 1)
        return 1.0/X*count2(num - 1);
    else
        return 1.0/X;
}

void main()
{
    int exponent;
    printf("Please input the exponent:");
    scanf("%d", &exponent);
    if(exponent > 0)
        printf("%d", count1(exponent));

    if(exponent == 0)
        printf("1");

    if(exponent < 0)
        printf("%lf", count2(exponent));

}
