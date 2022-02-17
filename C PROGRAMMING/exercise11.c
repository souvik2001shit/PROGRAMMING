#include<stdio.h>
int palindrome( int num)
{
    int reversed=0,original;
    original=num;
    while(num!=0)
    {
        
        reversed=reversed*10+num%10;
        num=num/10;
        
    }
    printf("The reversed number is %d\n",reversed);
    if(original==reversed)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",& n);
    if(palindrome(n))
    {
        printf("The number is palindrome\n");
    }
    else{
        printf("The number is not palindrome\n");
    }
    return 0;
    
}