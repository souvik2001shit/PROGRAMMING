#include <stdio.h>
void printArray(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
int partition(int a[], int low, int high)
{
    int pivot = a[low];
    int i = low + 1;
    int j = high;
    int temp;
    do
    {
        while (a[i] <= pivot)
        {
            i++;
        }
        while(a[j]>pivot)
        {
            j--;
        }
        if (i < j)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    } while (i < j);
    //swap a[low] and a[j]
    temp = a[low];
    a[low] = a[j];
    a[j] = temp;
    return j;
}
void quicksort(int a[], int low, int high)
{
    int partitionindex; //Index of pivot after partition
    if (low < high)
    {
        partitionindex = partition(a, low, high);
        quicksort(a, low, partitionindex - 1);
        quicksort(a, partitionindex + 1, high);
    }
}
int main()
{
    int arr[] = {9, 4, 4, 8, 7, 5, 6};
    int n = 7;
    printArray(arr, n);
    quicksort(arr, 0, n - 1);
    printArray(arr, n);
    return 0;
}