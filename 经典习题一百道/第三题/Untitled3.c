//一个整数，它加上100后是一个完全平方数，再加上168又是一个完全平方数，请问该数是多少？

//不使用第三方库的解法
/*#include<stdio.h>

int find(m)
{
    int i, j; //计数器

    for(i = 1; i < (m+100)/2; i++)
    {
        if(i*i == m+100)
        {
            for(j = i; j < (m+268)/2; j++)
            {
                if(j*j == m+268)
                {
                    return m;
                    break;
                }
            }
        }
    }
    return 0;
}
int main()
{
    int m = 1; //待测试数字
    while(m < 10000000)
    {

        int judge = find(m);

        if(judge == 0)
            m++;
        else
        {
            printf("该整数是：%d\n", judge);
            m++;
            //break;
        }
        //printf("%d\n", m);

    }
    return 0;
}*/

#include<stdio.h>
#include<math.h>

int main()
{
	long int i, x, y, z;
	for (i = 1; i < 100000; i++)
		{
			x = sqrt(i+100); /*x为加上100后开方后的结果*/
			y = sqrt(i+268); /*y为再加上168后开方后的结果*/
			if(x*x==i+100 && y*y==i+268) /*如果一个数的平方根的平方等于该数，这说明此数是完全平方数*/
				printf("\n%ld\n", i);
		}
	return 0;
}
