#include<stdio.h>
int func()
{
    static	int a=6; 
	a++;
	return a;
}
int main()
{
	int a;
	a=func();
	printf("%d\n",a);
		a=func();
		printf("%d",a);
}
