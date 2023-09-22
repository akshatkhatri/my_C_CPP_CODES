//author-akshat khatri//
//date-20-06-2023//
//replacing places of numbers at even and odd position//
#include<stdio.h>
int main()
{
    int numbers[]={10,45,56,89,34,25,58,12,69,99};
    int t;
    for(int i=0;i<=9;i=i+1)
    {
        t=numbers[i];
        numbers[i]=numbers[i+1];
        numbers[i+1]=t;
    }
    for(int i=0;i<=9;i++)
    {
        printf("%d ",numbers[i]);
    }
    return 0;
}