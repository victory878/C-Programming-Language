#include <stdio.h>
int main()
{
    float a, b;
    scanf("%f %f", &a, &b);
    float bmi = a/(b*b);
    if(bmi>=18.5 && bmi<=23.9)
        printf("Normal");
    else
        printf("Abnormal");
    return 0;
}
