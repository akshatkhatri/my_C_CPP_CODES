// author-akshat khatri
// date-30-07-2023
// implementing merging two sorted arrays without extra space
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void merge(int arr1[], int arr2[], int n, int m)
{
    // code here
    int len = (n + m);
    int gap = (len / 2) + (len % 2);

    while (gap > 0)
    {
        int left = 0;
        int right = left + gap;

        while (right < len)
        {
            if (left < n && right >= n) // arr1 and arr2
            {
                if (arr1[left] > arr2[right - n])
                {
                    swap(&arr1[left], &arr2[right - n]);
                }
            }
            else if (left >= n && right >= n) // arr2 and arr2
            {
                if (arr2[left - n] > arr2[right - n])
                {
                    swap(&arr2[left - n], &arr2[right - n]);
                }
            }
            else // arr1 and arr`1
            {
                if (arr1[left] > arr1[right])
                {
                    swap(&arr1[left], &arr1[right]);
                }
            }
            left++;
            right++;
        }
        if (gap == 1)
        {
            break;
        }
        gap = (gap / 2) + (gap % 2);
    }
}