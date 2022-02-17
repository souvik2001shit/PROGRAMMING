#include<stdio.h>
int main()
{
	


   int roll[5],i;
   printf("\n Enter 5 students roll number: ");
   for(i=0;i<5;i++)
   {
   	scanf("%d",&roll[i]);
   }
   printf("\nPrinting 5 students roll number: ");
   for(i=0;i<5;i++)
   { 
     printf("%5d",roll[i]);
   }



	
}
