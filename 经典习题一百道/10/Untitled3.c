#include<stdio.h>
#define N 4
struct student
{
 char num[3];
 char name[4];
 float score[2];
 float avr;
}
stu[N];

void main()
{
 int i,j;
 float sum,average;
 for(i=0;i<N;i++)           /*输入数据*/
 {
  printf("ｉｎｐｕｔscoresofstudent%d:\n",i+1);
  printf("name:");
  scanf("%s",stu[i].name);
  for(j=0;j<2;j++)
  {
   printf("score%d:",j+1);
   scanf("%f",&stu[i].score[j]);
  }
 }

 average=0;             /*计算*/
 for(i=0;i<N;i++)
 {
  sum=0;
  for(j=0;j<2;j++)
   sum+=stu[i].score[j];
  stu[i].avr=sum/2;
  average+=stu[i].avr;
 }
 average/=N;
 printf("  Name    score1   score2  average\n");
 for(i=0;i<N;i++)
 {
  printf("%5s%10s",stu[i].num,stu[i].name);
  for(j=0;j<2;j++)
   printf("%9.2f",stu[i].score[j]);
  printf("  %8.2f\n",stu[i].avr);
 }
 printf("average=%5.2f\n",average);
}
