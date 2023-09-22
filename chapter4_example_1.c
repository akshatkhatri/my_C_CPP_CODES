//author-akshat khatri//
//date-05-06-2023//
//determining whether a year is leap year or not//
#include<stdio.h>
int main()
{
    int year;
    printf("enter the year");
    scanf("%d",&year);
    if(year%400==0||(year%100!=0&&year%4==0))//the if statement is not followed by a ;//
    {
        printf("the year is a leap year\n");
    }
    else
    {
        printf("the year is not a leap year");
    }
   
return 0;
}

