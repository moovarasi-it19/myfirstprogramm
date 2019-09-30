#include <stdio.h>
void main() {
    int low,high,i,sum=0;
    printf("enter the low value:");
    scanf("%d",&low);
    printf("enter the high value:");
    scanf("%d",&high);
    for(i=low;i<=high;i++)
    {
        sum+=i;
    }
        printf("%d",sum);
    }
