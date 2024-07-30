#include<stdio.h>
int main(){
    int a , b , c;
    printf("Enter First Number");
    scanf("%d",&a);
    printf("Enter Second Number");
    scanf("%d",&b);
    printf("Enter Third Number");
    scanf("%d",&c);
    if(a>b&&a>c)
    printf("Maximum number is %d",a);
    if(b>c&&b>a)
    printf("Maximum number is %d",b);
    else
    printf("Maximum Number is %d",c);

    return 0;
    
}