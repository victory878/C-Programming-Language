//���������ε�����a,b,c���ж�a,b,c���ܷ񹹳������Σ��������͵������Σ��������ȱߡ�ֱ�ǡ�����ֱ�ǡ�һ�㡣
#include<stdio.h>
int main()
{
    double a, b, c;
    printf("Please input three sides:");
    scanf("%lf %lf %lf",&a ,&b ,&c);

    //�ж��Ƿ񹹳�������
    if(a+b-c>0 && a-b-c<0 && a+c-b>0 && a-c-b<0)
    {
        if(a==b || a==c || b==c)
        {
            if(a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a)
                printf("����ֱ��������");
            if(a==b && a==c)
                printf("�ȱ�������");
        }
        else if(a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a)
            printf("ֱ��������");
        else
            printf("һ��");
    }
    else
        printf("error");
    return 0;
}
