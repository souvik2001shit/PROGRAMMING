#include<stdio.h>
///Taking  string input from user  //
void printstr(char str[])
{
    int i=0;
    while(str[i]!='\0')
    {
        printf("%c",str[i]);
        i++;
    }
     printf("\n");
}
int main()
{
 char str[34];
 //char str[]="souvik";
 gets(str);
 printf("using custom function printstr\n");
 printstr(str);
 printf("using printf %s\n",str);
 printf("using puts\n");
 puts(str);
return 0;
}
