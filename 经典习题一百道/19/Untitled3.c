//���������ε�����a,b,c���ж�a,b,c���ܷ񹹳������Σ����ܣ����������
#include<stdio.h>
#include<math.h>

int main()
{
    double a, b, c;
    printf("Please input three sides of the triangle:");
    scanf("%lf %lf %lf",&a, &b ,&c);

    //�ж��ܷ񹹳�������
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
