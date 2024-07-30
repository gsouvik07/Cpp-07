#include<stdio.h>
int main(){
    int m,n,i;
    printf("Enter the starting number =");
    scanf("%d",&n);
    printf("Enter the last number =");
    scanf("%d",&n);
    for(i=m;i<=n;i++);
    {
        printf("%d,",i);
    }
    for(i=m;i<=n;i++)
    {
        if(i%2==0)
        {
            printf("\n%d = The number is even\n",i);
        }
        else
        {
            printf("\n%d = The number is odd\n",i);
        }
    }
    return 0;
}