#include<stdio.h>

void bubble_sort(int arr[],int);

int main()
{
    int arr[]={5,6,3,8,4,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    
    bubble_sort(arr,size);

    printf("Sorted array is : \n");
    for (int k = 0; k < size; k++)
    {
        printf("%d ",arr[k]);
    }
    return 0;
}

void bubble_sort(int arr[],int size){
    int i,j;

    for ( i = 0; i < size-1; i++)
    {
        for ( j = 0; j < size-1-i; j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}