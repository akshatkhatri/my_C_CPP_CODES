// author-akshat khatri
// date-26-07-2023
// merge two sorted arrays

#include <stdio.h>
#include <stdlib.h>

void print_2_arrays(int arr1[], int size1, int arr2[], int size2)
{
    printf("1st array is \n");
    for (int i = 0; i < size1; i++)
    {
        printf("%d ", arr1[i]);
    }
    printf("\nsecond array is \n");

    for (int j = 0; j < size2; j++)
    {
        printf("%d ", arr2[j]);
    }
    printf("\n");
}
void print_sorted_array(int arr[], int size)
{
    printf("\n the sorted array is \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int* merge(int arr1[], int size1, int arr2[], int size2)
{
    int i = 0;
    int j = 0;
    int k = 0;

    int *sorted_array = (int *)malloc((size1 + size2) * sizeof(int)); // dyanmic memory allocation for the new array

    while (i < size1 && j < size2)
    {
        if (arr1[i] < arr2[j])
        {
            sorted_array[k] = arr1[i];
            i++;
            k++;
        }
        else
        {
            sorted_array[k] = arr2[j];
            j++;
            k++;
        }
    }
    /* the above loop only runs if both are less than their size but if one array is bigger than the other then the other contents would not be added
    to fix this we would again run a loop with the same parameters to append the contents of one array into another */

    while (i < size1)
    {
        sorted_array[k]=arr1[i];
        i++;
        k++;
    }
    while (j < size2)
    {
         sorted_array[k]=arr2[j];
        j++;
        k++;
    }

    return sorted_array;
}
int main()
{
    int size1, size2;
    int *arr1, *arr2;
    int *res_ptr;

    printf("\nNOTE : PLEASE INPUT SORTED ARRAYS ONLY\n");

    printf("enter the size of first array\n");
    scanf("%d", &size1);

    printf("enter the size of 2nd array\n");
    scanf("%d", &size2);

    arr1 = (int *)malloc(size1 * sizeof(int)); // dynamic memory allocation for both the arrays
    arr2 = (int *)malloc(size2 * sizeof(int));

    printf("enter the elements of the first array one by one \n");

    for (int i = 0; i < size1; i++)
    {
        printf("enter the %d element", i);
        scanf("%d", &arr1[i]);
    }

    printf("enter the elements of the second array one by one \n");

    for (int j = 0; j < size2; j++)
    {
        printf("enter the %d element", j);
        scanf("%d", &arr2[j]);
    }

    print_2_arrays(arr1, size1, arr2, size2);
    res_ptr = merge(arr1, size1, arr2, size2);
    print_sorted_array(res_ptr,size1+size2);

    free(arr1);
    free(arr2);
    free(res_ptr);

    return 0;
}
