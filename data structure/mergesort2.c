#include <stdio.h>
void printArray(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
void mergesort(int a[], int b[], int m, int n, int p)
{
    printArray(a,m);
    printArray(b,n);
    int i, j, k;
    i = j = k = 0;
    int c[100];
    while (i < m && j < n)
    {
        if (a[i] < b[j])
        {
            c[k] = a[i];
            i++;
            k++;
        }
        else
        {
            c[k] = b[j];
            j++;
            k++;
        }
    }
    while (i < m)
    {
        c[k] = a[i];
        i++;
        k++;
    }
    while (j < n)
    {
        c[k] = b[j];
        j++;
        k++;
    }
    printf("*****The merged sorted arraY is******\n");
    printArray(c, p);
}
int main()
{

    int arr1[] = {7, 9, 18, 19, 22};
    int arr2[] = {1, 6, 9, 11};
    int n1 = 5;
    int n2 = 4;
    mergesort(arr1, arr2, n1, n2, n1 + n2);

    return 0;
}