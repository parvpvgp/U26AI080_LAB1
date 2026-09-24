#include<stdio.h>
int main(){
    int principle,rate,time;
    printf("Enter the principle amount:");
    scanf("%d",&principle);
    printf("Enter the rate:");
    scanf("%d",&rate);
    printf("Enter the period:");
    scanf("%d",&time);
    double SI;
    SI=(principle*rate*time)/100;
    printf("Simple Interest is %Lf",SI);

}