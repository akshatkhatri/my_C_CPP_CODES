//author-akshat khatri//
//date-21-06-2023//
// a program to do the tasks specified by the user//
#include<stdio.h>
int modify(int*);
int main()
{
    int arr[]={10,20,30,40,50,60,70,80,90,100};
    modify(&arr[0]);
    printf("modified array is \n");
    for(int i=0;i<=9;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}
int modify(int *ptr)
{
    for(int i=0;i<=9;i++)
    {
        *ptr=*ptr*3;
        ptr++;
    }
    
}

