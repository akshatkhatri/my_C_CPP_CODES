//author-akshat khatri//
//date-11-06-2023//
//a program to determine the population at the end of 10 years for each year//
#include<stdio.h>
int main()
{
    int pop;
    pop=100000;
    int i=1;
    for(i=1;i<=10;i++)
    {
        pop=pop*0.9;
        printf("%d\n",pop);
    }
    return 0;
}