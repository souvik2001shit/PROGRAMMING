#include<stdio.h>
void printArray(int *arr,int n)
{
    for(int i=0;i<n;i++)
    {
    printf("%d ",arr[i]);
    }
    printf("\n");
}

void insertionSort(int *ptr,int n)
{
    for(int i=0;i<=n-1;i++)
    {
        int j;
        int key;
        key=ptr[i];
        j=i-1;
        while(j>=0 && ptr[j]>key)
        {
            ptr[j+1]=ptr[j];
            j--;
        }
        ptr[j+1]=key;
    }
}

int main()
{
    int arr[]={23,56,12,89,34};
    int n=5;
    printArray(arr,n);
    insertionSort(arr,n);
    printArray(arr,n);

    return 0;
}