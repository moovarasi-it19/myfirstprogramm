#include<stdio.h>
int main() {
    int a,b,c;
    int max(int,int);
    scanf("%d %d",&a,&b);
    c=max(a,b);
    return 0;
}
int max(int x,int y) {
    if(x>y)
    {
        printf("the maximum number is:%d",x);
    }
    else
    {
        printf("the maximum number is:%d",y);
    }
    return 0;
}
