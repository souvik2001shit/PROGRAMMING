#include<stdio.h>
void arrayRev(int arr[])
{
    int temp;
    for(int i=0;i<7/2;i++)
    {
        temp=arr[i];
        arr[i]=arr[6-i];
        arr[6-i]=temp;
        
        
    }
}
void arrayPrint(int arr[])
{
    for(int i=0;i<7;i++)
    {
        printf("The value of element %d is %d\n",i,arr[i]);
    }
}

int main()
{
   int arr[]={1,2,3,4,5,6,7};
   printf("Before reversing the array:::::\n");
   arrayPrint(arr);
   arrayRev(arr);
   printf("After reversing the array:::::\n");
   arrayPrint(arr);


    return 0;
 }
// another process
// #include<stdio.h>
// void revarray(int a,int *ptr)
// {
//     printf("\n The revers array is::::-");
//     for(int i=a;i>0;i--)
//     {
//         printf("%d",*(ptr+(i-1)));
//     }
// }
// int main()
// {
//   int n,i;
//   int arr[n];
//   printf("Enter the size of the array");
//   scanf("%d",&n);
//   for(i=0;i<n;i++)
//   {
//       printf("\nEnter %d element:",(i+1));
//       scanf("%d",&arr[i]);
//   }
//   printf("The array is::::-");
//   for(i=0;i<n;i++)
//   {
//       printf("%d",arr[i]);
//   }
//   rrevarray(n,arr);
//     return 0;

// }
