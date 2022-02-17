#include<stdio.h>
int main()
{
	int a[10],i,j,v;
	printf("\nEnter 5 numbers:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	//logic for bubble sort
	for(i=0;i<4;i++)
	{
		for(j=0;j<5-i-1;j++)
		{
			if(a[j]>a[j+1]);
			{
				v=a[j];
				a[j]=a[j+1];
				a[j+1]=v;
			}
		}
	}
	printf("\n Number after sorting:\n");
	for(i=0;i<5;i++)
	{
		printf("%3d",a[i]);
	}
}
