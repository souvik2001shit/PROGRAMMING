#include<stdio.h>
void printstr(char str[])
{
    int i=0;
    while(str[i]!='\0')
    {
    printf("%c",str[i]);
    i++;
    }
}
int main()
{
   // char str[]={'s','o','u','v','i','k','\0'};
    char str[7]="souvik";

    printstr(str);
    return 0;
}