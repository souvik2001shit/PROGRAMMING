//merging in a  single array
#include <stdio.h>
void printArray(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
void ms(int a[], int low, int mid, int high)
{
    int i, j, k;
    int b[100];
    i = low;
    j = mid + 1;
    k = low;
    while (i <= mid && j <= high)
    {
        if (a[i] < a[j])
        {
            b[k] = a[i];
            i++;
            k++;
        }
        else
        {
            b[k] = a[j];
            j++;
            k++;
        }
    }
      while (i <= mid)
       {
        b[k] = a[i];
        i++;
        k++;
       }
      while (j <= high)
        {
           b[k] = a[j];
            j++;
            k++;
        }
        ///copy all element b to a//
        for (i = low; i <= high; i++)
        {
            a[i] = b[i];
        }
    }
    void mergesort(int a[], int low, int high)
    {
        int mid;
        if (low < high)
        {
            mid = (low + high) / 2;
             mergesort(a, low, mid);
             mergesort(a, mid + 1, high);
            ms(a, low, mid, high);
        }
    }

    int main()
    {
        int arr[] = {7, 15, 2, 8, 10};
        int n = 5;
        printArray(arr, n);
        mergesort(arr, 0, n - 1);
        printArray(arr, n);
        return 0;
    }