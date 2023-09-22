//author-akshat khatri//
//date-21-06-2023//
// a program using pointers to find the smallest number in an array of 25 integers//
#include<stdio.h>
int smallest(int *);
int main()
{
    int num[25],small;
    printf("enter the elements (till 25)\n");
    for(int i=0;i<=24;i++)
    {
        scanf("%d",&num[i]);
    }
    small=smallest(&num[0]);
    printf("the smallest number is :%d\n",small);
    return 0;
}
int smallest(int *ptr)
{
    int smallest=*ptr;
    for(int i=0;i<=24;i++)
    {
        if(*(ptr+i)<(smallest))
        {
            smallest=*(ptr+i);
        }
    }
    return smallest;
}
