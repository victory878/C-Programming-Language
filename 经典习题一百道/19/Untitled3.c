//输入三角形的三边a,b,c，判断a,b,c，能否构成三角形，若能，计算面积。
#include<stdio.h>
#include<math.h>

int main()
{
    double a, b, c;
    printf("Please input three sides of the triangle:");
    scanf("%lf %lf %lf",&a, &b ,&c);

    //判断能否构成三角形
    double p = (a+b+c)/2;
    double area = sqrt(p*(p-a)*(p-b)*(p-c));
    if(a+b>c && a-b<c && a+c>b && a-c<b)
    {
        printf("the area is: %lf", area);

    }
    else
    {
        printf("error");
    }
    return 0;
}
