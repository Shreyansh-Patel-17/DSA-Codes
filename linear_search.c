#include <stdio.h>

int linear_search(int, int arr[], int);//Initailising  the function  prototype for Linear search
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int target;
    int size = sizeof(arr) / sizeof(arr[0]);

    // Determining the target
    printf("Enter the element whose index in array you need(1 to 9): ");
    scanf("%d", &target);

    int result = linear_search(target, arr, size);//function call

    if (result == -1)
    {
        printf("Element is not present in array");
    }
    else
    {
        printf("Index of element in array is: %d", result);
    }
}

//logic for liner search
int linear_search(int key, int arr[], int size)
{
    int i = 0;

    while (i < size)
    {
        if (arr[i] == key)
        {
            return i;
        }
        i++;
    }

    return -1;
}