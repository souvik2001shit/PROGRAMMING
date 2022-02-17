#include<stdio.h>
int main()
{
    char input;
    float kmsToMiles=0.621371;
    float inchesToFoot=0.0833333;
    float cmsToInches=0.393701;
    float poundToKgs=0.453592;
    float inchesTosMeter=0.0254;
    float first,second;
    while(1)
    {
       printf("Enter a input character q to quit \n  1.kms to miles\n 2.inches to foot\n 3.cms to pound \n 4.pound to kgs\n 5.inches to meters\n");
       scanf("%c",& input);
    //   printf("The character is'%c'",input);
       switch(input)
       {
           case 'q':
           printf("***Quiting the program*****");
           goto end;
           break;
           case '1':
           printf("Enter the quantity in terms of first unit\n");
           scanf("%f",&first);
           second=first*kmsToMiles;
           printf("%.2f kms is equal to %.2f miles\n\n\n",first,second);
           break;
           case '2':
           printf("Enter the quantity in terms of first unit\n");
           scanf("%f",&first);
           second=first*inchesToFoot;
           printf("%.2f inches is equal to %.2f foot\n\n\n",first,second);
           break;
           case '3':
           printf("Enter the quantity in terms of first unit\n");
           scanf("%f",&first);
           second=first* cmsToInches;
           printf("%.2f cms is equal to %.2f inches\n\n\n",first,second);
            break;
           case '4':
           printf("Enter the quantity in terms of first unit\n");
           scanf("%f",&first);
           second=first*poundToKgs;
           printf("%.2f pound is equal to %.2f kgs\n\n\n",first,second);
           break;
           case '5':
           printf("Enter the quantity in terms of first unit\n");
           scanf("%f",&first);
           second=first*inchesTosMeter;
           printf("%.2f inches is equal to %.2f meters\n\n\n",first,second);
           break;
           default:
           printf("In default now");
           break;
       }
       
   }
   end:
   return 0;
}