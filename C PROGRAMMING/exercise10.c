///matrix multiplication


#include<stdio.h>

int main()
{
    int a[4][3],b[3][2],c[4][2];
    int sum=0;
    printf("First matrix\n");
    for(int m=0;m<4;m++)
    {
        for(int n=0;n<3;n++)
        { 
          
            
            scanf("%d",& a[m][n]);

        }
        
    }
    printf("Second matrix\n");
    for(int m=0;m<3;m++)
    {
        for(int n=0;n<2;n++)
        {
            
            scanf("%d",& a[m][n]);

        }
        
    } 


    for(int m=0;m<4;m++)
    {
        for(int n=0;n<2;n++)
        {
            for(int k=0;k<3;k++)
            {
                sum=sum+(a[m][k]*b[k][n]);
            }
            c[m][n]=sum;
            sum=0;
        }
    } 

    for(int m=0;m<4;m++)
    {
        for(int n=0;n<2;n++)
        {
            printf("%d\t",c[m][n]);
        }
        printf("\n");
    } 




    return 0;
}