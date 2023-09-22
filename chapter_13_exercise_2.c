//author-akshat khatri//
//date-21-06-2023//
//FOR AN array check if the first and the last elements and the subsequent elements are same or not//
#include<stdio.h>
int main()
{
    int n;
    printf("enter the number of elements you will put in the array\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter the numbers in the array");
    for(int i=0;i<=n-1;i++)
    {
        scanf("%d",&arr[i]);
    }
    int count =0;
    for(int i=0;i<=n-1;i++)
    {
        if(arr[i]==arr[n-1])
        {   
            count++;
        }
        else
        break;
    }
    if(count==n/2)
    {
        printf(" passed");
    }
    else
    {
        printf("failed");
    }
    return 0;

}