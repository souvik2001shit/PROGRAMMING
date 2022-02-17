#include<stdio.h>
#include<math.h>
int main()
{
    float principal,time,rate,compoundinterest;
    printf("Enter the value of principal");
    scanf("%f",& principal);
    printf("Enter the value of time");
    scanf("%f",& time);
    printf("Enter the value of rate");
    scanf("%f",& rate);
    compoundinterest=principal*pow((1+rate /100),time);
    printf("the value of compound interest is %f",compoundinterest);
    return 0;

}