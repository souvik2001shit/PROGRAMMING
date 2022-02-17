//sum all the odd  numbers from 10 to 25// 
#include<stdio.h>
int main()
{
	int sum=0,i;
	
	 for(i=10;i<=25;i++)
	 {
	 	if(i%2 !=0)
	 	   sum=sum+i;
	 }
	 printf("\nResult is=%d",sum);
	 return 0;
}


