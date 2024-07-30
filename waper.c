#include<stdio.h>
 
int main(){
    float celcious, ferhenhite;
    printf("Enter temperature");
    scanf("%f",&celcious);
    ferhenhite = (celcious*9+160)/5;
    printf("farhenhite =%f",ferhenhite);

    return 0;
}