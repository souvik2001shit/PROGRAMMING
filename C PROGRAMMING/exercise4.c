#include<stdio.h>
void starpattern(int rows)
{
 for( int i=0;i<rows;i++)
 {
     for(int j=0;j<=i;j++)
     {
         printf("*");
     }
     printf("\n");
 }
}
 void reverstarpattern(int rows)
{
    for( int i=0;i<rows;i++)
    {
        for( int j=0;j<=rows-i-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int choice;
    printf("Enter your choice 0 for print starpattern & choice 1 for print rverse star pattern \n");
    scanf("%d",&choice);
    int rows;
    printf("No. of rows you want to print:\n");
    scanf("%d",&rows);
   // starpattern(rows);
   // reverstarpattern( rows);
   switch(choice)
   {
        case 0:
          starpattern(rows);
          break;

        case 1:
           reverstarpattern( rows);
           break;
        default:
         printf("Enter invalid syntax");
   }

    return 0;
}