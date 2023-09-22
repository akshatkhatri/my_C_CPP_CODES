//author-akshat khatri//
//date-04-06-2023//
//a program to check whether the triangle is valid or not//
#include<stdio.h>
int main()
{
    int x,a1,a2,a3;
    printf("enter the values of 3 angles");
    scanf("%d,%d,%d",&a1,&a2,&a3);
    x=a1+a2+a3;
    if(x==180)
    {
        printf("the angles form a triangle");
    }
    else
    {
        printf("the angles don't form a triangle");
    }
    return 0;
}

