//author-akshat khatri//
//date-20-06-2023//
//a program to copy elements of an array into another array in reverse order//
#include<stdio.h>
int main()
{
    int arr1[5],arr2[5];
    printf("enter the 5 elements of array\n");
    for(int i=0;i<=4;i++)
    scanf("%d",&arr1[i]);
    for(int k=4,i=0;i<=4&&k>=0;i++,k--)
    {
        arr2[k]=arr1[i];
    }
    printf("elements in reversed order are \n");
    for(int i=0;i<=4;i++)
    {
        printf("%d ",arr2[i]);
    }
    return 0;
}