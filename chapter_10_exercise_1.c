//author-akshat khatri//
//date-19-06-2023//
// to convert a number into a binary//
#include<stdio.h>
int main()

{
    int num;
    int arr[32];
    int index=0;
    printf(" enter the number you want for binary conversion\n");
    scanf("%d",&num);
    while(num>0)
    {
        arr[index]=num%2;
        num=num/2;
        index++;    
    }
    for(int i=index-1;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }
    return 0;
    
}

