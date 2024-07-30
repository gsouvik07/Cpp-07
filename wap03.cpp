#include<stdio.h>
int main(){
    int a, b;
    printf("Enter first number ");
    scanf("%d",&a);
    printf("Enter second number ");
    scanf("%d",&b);

    int avg = a+b/2;
    printf("Sum is %d\n",avg);
    return 0;
}