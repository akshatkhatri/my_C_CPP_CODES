// author-akshat khatri//
// date-12-07-2023//
// date-12-07-2023//
#include <stdio.h>
int count_digits(int);
int main()
{
    int number, res;
    printf("enter the 5-digit number \n");
    scanf("%d", &number);
    res = count_digits(number);
    printf("the sum of digits is %d", res);
    return 0;
}
int count_digits(int number)
{
    if (number == 0)
    {
        return 0;
    }
    else
    {
        int remainder = number % 10;
        return remainder+count_digits(number/10);
    
    
    }
}