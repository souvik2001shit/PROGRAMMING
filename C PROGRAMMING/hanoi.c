#include<stdio.h>
void TOH(int n,char BEG,char AUX,char END)
{
    if(n==1)
    {
    printf("move disk %d %c to %c\n",n,BEG,END);
    }
    else
    {
        TOH(n-1,BEG,END,AUX);
        printf("move disk %d %c to %c\n",n,BEG,END);
        TOH(n-1,AUX,BEG,END);

    }
}
int main()
{
    int x;
    printf("\n enter no. of disks:");
    scanf("%d",& x);
    TOH(x,'A','B','C');
    return 0;
}
