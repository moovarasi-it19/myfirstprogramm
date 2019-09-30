#include<stdio.h>
void main()
{
int a;
printf("enter the year:");
scanf("%d",&a);
if(a%400==0)
{
if(a%4==0&&a%100!=0)
{
printf("it is a leap year");
}
}
else
{
printf("it is not a leap year");
}
}
