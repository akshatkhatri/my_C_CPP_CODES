//author-akshat khatri
// date-28-07-2023
//  implementing quick sort using LOMUTO partition

#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int window = low - 1;

    for (int k = low; k <= high - 1; k++)
    {
        if (arr[k] < pivot)
        {
            window++;
            swap(&arr[k], &arr[window]);
        }
    }
    swap(&arr[window + 1], &arr[high]);
    return window + 1;
  
}

void quick_sort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quick_sort(arr, low, pi - 1);
        quick_sort(arr, pi + 1, high);
    }
}
void print_array(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main()
{
   // int arr[]={4,65,73,732,62,65,7,765,763,67};
   int size;
   printf("enter the size of the array\n");
   scanf("%d",&size);
    int *new_array=(int *) malloc(size*sizeof(int));

    printf("enter your array\n");
    for(int i=0;i<size;i++)
    {
        printf("enter the %d element",i);
        scanf("%d",&new_array[i]);
    }
    int low=0;
    //int size=sizeof(arr)/sizeof(arr[0]);

    int high=size-1;
    printf(" before sorting \n");
    print_array(new_array,size);

    quick_sort(new_array,low,high);
    printf("sorted array is \n");

    print_array(new_array,size);
    free(new_array);
    return 0;
}
