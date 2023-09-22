//author-akshat khatri//
//date-03-06-2023//
//determining if a year is a leap year or not//
#include<stdio.h>
int main()
{
int year;
printf("enter value of year");
scanf("%d",&year);
if (year%100==0)
{
    if(year%400==0)
printf("leap year");
else
printf("not a leap year");//the purpose of all the statements above, e.g. there is a year 1900 which is div. by 4 but is not a leap year//
}
else 
{
if(year%4==0)
printf("leap year");
else 
printf("not a leap year");
}
return 0;
}
