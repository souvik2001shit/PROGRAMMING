//check a number is even or odd
#include<stdio.h>
int main()
{
	int v;
	printf("Enter an integer number:");
	scanf("%d",&v);
	
	if(v%2==0)
	{
		printf("\nThe number is even.");
		if(v%3==0)
		{
			printf("\nThe number can be divided by 3");
		}
		else
	    {
	    	printf("\n The number can not be divided by 3");
		}
	
	}
	else
	{
		printf("\nThe number is odd.");
		if(v%3==0)
		{
			printf("\nThe number can be divided by 3");	
		}
		else
		{
			printf("\nThe number can not be divided by 3");
		}
	}
}
