#include<stdio.h>
int main(){
    int a, b;
    printf("Enter First Number");
    scanf("%d",&a);
    printf("Enter second Number");
    scanf("%d",&b);

    if (a>b)
    printf("Maximum number is %d",a);
    else
    printf("Maximum number is %d",b);

    return 0;


}