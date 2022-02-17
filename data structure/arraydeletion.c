#include<stdio.h>
void display(int arr[],int n)
/// code for Traversal
{
    for( int i=0;i<n;i++)
    {
      printf("%4d",arr[i]);
    }
    printf("\n");
}
int indDeletion(int arr[],int size,int index)
///code for deletion
{
  for( int i=index;i<size-1;i++)
  {
      arr[i]=arr[i+1];
  }
}

int main()
{
  int arr[100]={5,13,24,46,79};
  int size=5,index=0;
  display(arr,size);
  indDeletion(arr,size,index);
  size-=1;
  display(arr,size);
    return 0;
}