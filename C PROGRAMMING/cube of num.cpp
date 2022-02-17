#include<stdio.h>
int cube(int a);
int main()
{
	int a,b;
	printf("Enter a number");
	scanf("%d",&a);
	b=cube(a);
	printf("cube of %d is %d",a ,b);
	return 0;
}
 int cube(int a)
{

 	
 	return(a*a*a);
}
