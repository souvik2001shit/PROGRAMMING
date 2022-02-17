#include<stdio.h>
int main()
{
    int a,b,nextterm,n;
    a=0,b=1;
    printf("Enter the fibonacci no of terms::::");
    scanf("%d",&n);
    printf("Enter the first element::::%d\n",a);
    printf("Enter the second element::::%d\n",b);
    for(int i=2;i<=n;i++)
    {
        nextterm=a+b;
        printf("%d\n",nextterm);
        a=b;
        b=nextterm;
    }
    return 0;
}