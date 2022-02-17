#include<stdio.h>
void printArray(int *ptr,int a)
{
    for(int i=0;i<a;i++)
    {
       printf("%d ",ptr[i]);
    }
    printf("\n");
}
void bubbleSort(int *ptr,int a)
{
    int temp;
    int issorted=0;
    for(int i=0;i<a-1;i++)//For number of pass
    {
        printf("Working on path number:%d\n",i+1);
         issorted=1;
        for(int j=0;j<a-1-i;j++)//For comparison of number of pass
        {
          if(ptr[j]>ptr[j+1])
          {
           temp=ptr[j];
           ptr[j]=ptr[j+1];
           ptr[j+1]=temp;
           issorted=0;
          }
        }
        if(issorted){
            return;
        }
    }
}
int main()
{
    int arr[]={1,2,3,4,5};
    int n=5;
    printArray(arr,n);
    bubbleSort(arr,n);
    printArray(arr,n);

    return 0;
}