#include<stdio.h>

int  main(){
    int n=6;
    for (int i=1; i<=6;i++)
    {
        for (int j = n; j >=1; j--)
        {
            printf(" ");
        }
        
        for (int j=1; j<=i; j++)
        {
            printf("*");
        }
        n--;
        printf("\n");
    }
    return 0;
}
   