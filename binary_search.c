#include <stdio.h>

int binary_search(int arr[], int, int, int);

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int key, start = 0;
    int size = sizeof(arr) / sizeof(arr[0]);
    int end = size - 1;

    printf("Enter the element who's element is to be searched(1 to 9): ");
    scanf("%d", &key);
    int result = binary_search(arr, start, end, key);

    if (result == -1)
        printf("Element not found!!");
    else
        printf("Element %d found at index %d", key, result);
    return 0;
}

//logic for binary search:
int binary_search(int arr[], int start, int end, int key){
    int mid;

    while(end >= start){
        mid = start + (end - start) / 2;

        // If the element is present at the middle itself
        if (arr[mid] == key)
        {
            return mid;
        }

        // If element is smaller than mid, then it can only be present in left subarray
        if (arr[mid] > key)
        {
            end = mid - 1;
        }

        // If element is greater than mid, then it can only be present in right subarray
        else
        {
            start = mid + 1;
        }
    }
    // We reach here when element was not found
    return -1;
}