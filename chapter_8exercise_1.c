//author-akshat khatri//
//date-12-06-2023//
//write a function to determine whether the year is leap or not//
#include<stdio.h>
void leap(int);
int main()
{
    int year;
printf("enter the year\n");
scanf("%d",&year);
leap(year);//function call//
return 0;
}
void leap(int year)//function prototype declaration//
{
    if((year%4==0)||(year%400==0))
    {
        printf("the year is a leap year\n");
    }
    else
    {
        printf("the year is NOT a leap year\n");
    }
}
