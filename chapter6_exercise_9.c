//author-akshat khatri//
//date-11-06-2023//
//a program to produce pyramid output//
//question output not well set//
#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<2;i++)
    {
        printf("\t\t\t %d\n",i);
    }
    for(i=2;i<=3;i++)
    {
        printf("\t\t%d\t",i);
    }
    for(i=4;i<5;i++)
    {
        printf("\n\t%d\t",i);
    }
    for(i=5;i<7;i++)
    {
        printf("\t%d\t",i);
    }
    for(i=7;i<8;i++)
    {
        printf("\n%d\t",i);
    }
    for(i=8;i<11;i++)
    {
        printf("\t%d\t",i);
    }
    return 0;
}