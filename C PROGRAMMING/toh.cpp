#include<stdio.h>
void TOH(int n,char SOU,char AUX,char DESTI)
{
	if(n==1)
	{
		printf("move disk %d %c to %c\n",n,SOU,DESTI);
		
	}
	else
	{
		TOH(n-1,SOU,DESTI,AUX);
		printf("move disk %d %c to %c \n",n,SOU,DESTI);
		TOH(n-1,AUX,SOU,DESTI);
		
	}
}
int main()
{
	int x;
	printf("no. of disks ");
	scanf("%d",& x);
	TOH(x,'A','B','C');
	return 0;
}
