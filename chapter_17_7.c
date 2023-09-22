// author-akshat khatri//
// date-30-06-2023//
// defining a structure time to compare dates and if the dates are equal return 0//
#include <stdio.h>
#include<windows.h>
typedef struct date
{
    int day;
    int month;
    int year;
} date;

int compare_dates(date *d1, date *d2)
{
    if (d1->day == d2->day && d1->month == d2->month && d1->year == d2->year)
    {
        return 0;
    }
    else
    return 1;
}

int main()
{
    date s1 = {19, 10, 2004};
    date s2 = {19, 10, 2004};
    date s3 = {18, 9, 2003};

    int x = compare_dates(&s1, &s2);
    printf("\a%d\n", x);
    int y = compare_dates(&s2, &s3);
    printf("%d\n", y);
    Beep(1000,600);
    
}
