#include <stdio.h>
int main()
{
    float a = 0.0;
    int b, c;
    int d = 0;
    scanf("%f %d %d %d", &a, &b, &c, &d);
    float money = 0.0;
    switch(d)
    {
        case 1:
            if(b==11 && c==11)
                money = a*0.7-50;
            else if(b==12 && c==12)
                money = a*0.8-50;
            else
                money = a-50;
            break;
        case 0:
            if(b==11 && c==11)
                money = a*0.7;
            else if(b==12 && c==12)
                money = a*0.8;
            else
                money = a;
            break;
    }
    if(money < 0)
        printf("0.00");
    else
        printf("%.2f", money);
    return 0;
}
