#include <stdio.h>
int binarysearch(int arr[], int size, int element)
{
    int low, mid, high;
    low = 0;
    high = size - 1;
    //keep searching until low<=high
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1, 3, 4, 5, 6, 7, 8, 12, 23, 45, 56};
    int size = sizeof(arr) / sizeof(int);
    int element = 4;
    int searchIndex = binarysearch(arr, size, element);
    printf("The element %d was found at index %d \n",element, searchIndex);
    return 0;
}