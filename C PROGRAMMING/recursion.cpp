#include<stdio.h>
int multiply(int a ,int b );
int main()
{
	int a,result,b;
	printf("enter a num");
	scanf("%d",&a);
	printf("enter a num");
	scanf("%d",&b);
	for(b=0;b>=a;b++)
	{
	
	result=multiply(a,b);
}
 	printf("%d",result);
	return result;
}
   int multiply(int a, int b)
   {
   	if(b==0)
   	return 0;
   	else
   	return (a,b)+a;
   }
