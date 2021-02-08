/*企业发放的奖金根据利润提成。利润(I)低于或等于10万元时，奖金可提10%；利润高
于10万元，低于20万元时，低于10万元的部分按10%提成，高于10万元的部分，可可提
成7.5%；20万到40万之间时，高于20万元的部分，可提成5%；40万到60万之间时高于
40万元的部分，可提成3%；60万到100万之间时，高于60万元的部分，可提成1.5%，高于
100万元时，超过100万元的部分按1%提成，从键盘输入当月利润I，求应发放奖金总数？*/

#include<stdio.h>

int main()
{
    double profit; //利润
    printf("请输入您的当月利润：(万)");
    scanf("%lf", &profit);
    double price; //奖金
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
