//author-akshat khatri//
//date-11-06-2023//
//a program to print 24 hours of a day with suitable suffixes//
#include<stdio.h>
#include<math.h>
int main()
{
int i;

    for(i=1;i<=24;i++)
    {
        if(i<12)
        {
            printf("%d:00 a.m.\n",i);
        }
        if(i==12)
        {
            printf("%d:00 noon\n",i);
        }
        if((i>12)&&(i<24))
        {
            printf("%d:00 p.m.\n",i);
        }
        if(i==24)
        {
            printf("%d:00 midnight",i);
        }
    }
    return 0;
}