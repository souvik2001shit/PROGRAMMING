#include<stdio.h>
void display(int arr[],int n){
    //** code for traversal//
    for(int i=0;i<n;i++)
    {
        printf("\n%d",arr[i]);
    }
    printf("\n");

}
   void indDeletion(int arr[],int size,int index){
       //code for deletion//
       
   for(int i= index;i<size-1;i++)
   {
       arr[i]=arr[i+1];
   }
}
int main()
{
    int arr[100]={1,2,3,12,78};
    int size =5,index=1;
    display(arr,size);
    indDeletion(arr,size,index);//index is a position where the element is to be inserted//
   size-=1;
   display(arr,size);


    return 0;
}
