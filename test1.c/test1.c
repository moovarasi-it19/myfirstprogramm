#include <stdio.h>
int main() {
    int a,b,result;
    char(ch);
     printf("Enter a value of a: ");
    scanf("%d",&a);
    printf("Enter a value of b: ");
    scanf("%d",&b);
    printf("enter your choice (+,-,*): ");
    scanf(" %c",&ch);
    result=0; switch(ch) {
    case'+':
            result=a+b;
            break;
    case'-':
            result=a-b;
            break;
    case'*':
           result=a*b;
           break;
    default:
          printf("invalid operation");
          break;
}
printf("%d",a+b);
}
    
