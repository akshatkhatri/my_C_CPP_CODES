// author-akshat khatri//
// date-29-06-2023//
// implementing quick sort algorithm on an array//
#include <stdio.h>
void print_array(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}
int partition(int *A, int low, int high)
{
    int pivot = A[low];
    int i = low + 1;
    int j = high;
    int temp;
    do
    {
        while (A[i] <= pivot)
        {
            i++;
        }
        while (A[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }

    } while (i < j);
    temp = A[low];
    A[low] = A[j];
    A[j] = temp;
    return j;
}
void quicksort(int *A, int low, int high)
{
    if (low < high)
    {
        int partitionindex = partition(A, low, high);
        quicksort(A, low, partitionindex - 1);
        quicksort(A, partitionindex + 1, high);
    }
}
int main()
{
    int A[] = {23, 46, 78, 12, 2};
    int n = 5;
    print_array(A, n);
    quicksort(A, 0, n - 1);
    print_array(A, n);
    return 0;
}