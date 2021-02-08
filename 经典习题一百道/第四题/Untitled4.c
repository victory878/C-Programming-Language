//输入某年某月某日，判断这一天是这一年的第几天？
#include<stdio.h>



int year, month, day;

int run(int n)
{
    if(n%4 == 0 && n%100 != 0)
        return 1;
    else if(n%400 == 0)
        return 1;
    else
        return 0;
}

int count(int m)
{
    int res = run(year);
    int days;
    if(res == 1)
    {
        switch(m)
        {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                return 31;
                break;
            case 2:
                return 29;
                break;
            case 4: case 6: case 9: case 11:
                return 30;
                break;
        }
    }
    if(res == 0)
    {
        switch(m)
        {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                return 31;
                break;
            case 2:
                return 28;
                break;
            case 4: case 6: case 9: case 11:
                return 30;
                break;
        }
    }
}

int main()
{

    int time;
    int sum = 0;
    printf("请输入日期，格式如下（年/月/日）");
    scanf("%d/%d/%d", &year, &month, &day);
    for(time = 1; time < month; time++)
    {
        sum += count(time);
    }
    printf("该日期为当年第%d天", sum + day);
    return 0;
}

/*
#include<stdio.h>
int main()
{
	int day,month,year,sum,leap;
	printf("\nplease input year,month,day\n");
	scanf("%d,%d,%d",&year,&month,&day);
	switch(month) /*先计算某月以前月份的总天数*/
/*	{
		case 1:sum=0;break;
		case 2:sum=31;break;
		case 3:sum=59;break;
		case 4:sum=90;break;
		case 5:sum=120;break;
		case 6:sum=151;break;
		case 7:sum=181;break;
		case 8:sum=212;break;
		case 9:sum=243;break;
		case 10:sum=273;break;
		case 11:sum=304;break;
		case 12:sum=334;break;
		default:printf("data error");break;
	}
	sum=sum+day; /*再加上某天的天数*/
/*	if(year%400==0||(year%4==0&&year%100!=0))/*判断是不是闰年*/
/*		leap=1;
	else
		leap=0;
	if(leap==1&&month>2)/*如果是闰年且月份大于2,总天数应该加一天*/
/*		sum++;
	printf("It is the %dth day.",sum);
}
*/

