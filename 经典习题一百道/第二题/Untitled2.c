/*��ҵ���ŵĽ������������ɡ�����(I)���ڻ����10��Ԫʱ���������10%�������
��10��Ԫ������20��Ԫʱ������10��Ԫ�Ĳ��ְ�10%��ɣ�����10��Ԫ�Ĳ��֣��ɿ���
��7.5%��20��40��֮��ʱ������20��Ԫ�Ĳ��֣������5%��40��60��֮��ʱ����
40��Ԫ�Ĳ��֣������3%��60��100��֮��ʱ������60��Ԫ�Ĳ��֣������1.5%������
100��Ԫʱ������100��Ԫ�Ĳ��ְ�1%��ɣ��Ӽ������뵱������I����Ӧ���Ž���������*/

#include<stdio.h>

int main()
{
    double profit; //����
    printf("���������ĵ�������(��)");
    scanf("%lf", &profit);
    double price; //����
    if(profit <= 10)
        price = profit + profit*0.1;
    else if(profit <= 20)
        price = profit + 0.075*(profit-10) + 10*0.1;
    else if(profit <= 40)
        price = profit + (profit-20)*0.05;
    else if(profit <= 60)
        price = profit + (profit-40)*0.03;
    else if(price <= 100)
        price = profit + (profit-60)*0.015;
    else
        price = profit + (profit-100)*0.01;
    printf("%lf", price);
    return 0;
}
