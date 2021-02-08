//输入三角形的三边a,b,c，判断a,b,c，能否构成三角形，何种类型的三角形：等腰、等边、直角、等腰直角、一般。
#include<stdio.h>
int main()
{
    double a, b, c;
    printf("Please input three sides:");
    scanf("%lf %lf %lf",&a ,&b ,&c);

    //判断是否构成三角形
    if(a+b-c>0 && a-b-c<0 && a+c-b>0 && a-c-b<0)
    {
        if(a==b || a==c || b==c)
        {
            if(a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a)
                printf("等腰直角三角形");
            if(a==b && a==c)
                printf("等边三角形");
        }
        else if(a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a)
            printf("直角三角形");
        else
            printf("一般");
    }
    else
        printf("error");
    return 0;
}
