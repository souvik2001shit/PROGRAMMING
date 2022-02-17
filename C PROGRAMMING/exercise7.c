#include<stdio.h>
#include<string.h>
struct driver
{
    char name[50];
    char dln[15];
    char rn[100];
    char kms[50];
};
int main()
{
    int n;
    printf("Enter no of drivers");
    scanf("%d",&n);
    fflush(stdin);
//to clear the input buffer fflush(stdin);
//*N.B:- we need to clear the input buffer before using gets() because gets() read anything in the input buffer until it encouters a new line or return character
printf(":::::Details of %d drivers :::::",n);
struct driver arr[n];
int i=0;
while(i!=n)
    {
      printf("\nEnter the name of %d driver:::::",(i+1));
      gets(arr[i].name);
      printf("\n Enter Driving licence no of %d driver::::",(i+1));
      gets(arr[i].dln);
      printf("\n Enter route name of %d driver::::",(i+1));
      gets(arr[i].rn);
      printf("\nEnter total km of %d driver:::::",(i+1));
      gets(arr[i].kms);
      i++;
    }

      int k=0;
      while(k!=n)
      {
          printf("\n******DETAILS OF %d DRIVER",(k+1));
          printf("\n Name :::::->\n%s",arr[k].name);
          printf("\n Driving licence no :::::->\n%s",arr[k].dln);
          printf("\n Route name :::::->\n%s",arr[k].rn);
          printf("\n Total kms:::::->\n%s",arr[k].kms);
          k++;


      }


    return 0;
}