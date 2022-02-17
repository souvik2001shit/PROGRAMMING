#include<stdio.h>
#include<math.h>
int main()
{
    float principal,time,rate,CI;
    printf("Enter the value of principal");
    scanf("%",& principal);
    printf("Enter the value of time");
    scanf("%d",& time);
    printf("Enter the value of rate");
    scanf("%d",& rate);
    CI = principal* pow((1 + rate /100), time);
    printf("the value of compoundinterest is %f",CI);
    return 0;
}

