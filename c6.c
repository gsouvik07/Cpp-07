#include<stdio.h>

int main(){
    
    for (int i = 5; i >= 1; i--)
    {   int n=5;
        for (int j = 1; j <= i; j++)
        {
            printf("%d",n);
            n--;
        }
        printf("\n");
    }
    return 0;
}