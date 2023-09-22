#include<stdio.h>
#include<stdlib.h>
int binary_search(int arr[],int num,int size)
{
    int low=0;
    int high=size-1;
    int mid=0;

    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==num)
        {
            return mid;
        }
        else if(arr[mid]<num)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    return -1;
}
int main()
{
    int size;
    printf("enter the size of the array\n");
    scanf("%d",&size);
    int *arr=(int *)malloc(size*sizeof(int));
    for(int i=0;i<size;i++)
    {
        printf("enter the %dth number",i+1);
        scanf("%d",&arr[i]);
    }
    int num;
    printf("enter the number you want to search in the array");
    scanf("%d",&num);
    int res;
    res=binary_search(arr,num,size);
    if(res!=-1)
    {
        printf("the number was found at position %d",res+1);
    }
    else
    {
        printf("number not found");
    }
    free(arr);
    return 0;
}
