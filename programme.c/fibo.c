#include<stdio.h>
int main()
{
int a=0,b=1,c,n,i;
printf("%d",a);
scanf("%d",&a);
printf("%d",b);
scanf("%d",&b);
for(i=1;i<=n;i++)
{
c=a+b;
printf("%d",c);
a=b;
b=c;
}
return 0;
}
