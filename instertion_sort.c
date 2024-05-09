#include <stdio.h>

void insertion_sort(int arr[], int);

int main()
{
    int arr[] = {7, 9, 4, 6, 2, 0};
    int size = sizeof(arr) / sizeof(arr[0]);

    insertion_sort(arr, size);

    printf("Sorted array is: \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

void insertion_sort(int arr[], int n)
{

    int i, j, key;

    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

