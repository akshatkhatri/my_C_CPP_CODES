// author-akshat khatri//
// date-12-07-2023//
// write a factorial function using recursion//
#include <stdio.h>
int factorial(int);
int main()
{
    int fact, num;
    printf("enter a number of which you want factorial\n");
    scanf("%d", &num);
    fact = factorial(num);
    printf("factorial value of %d is %d", num, fact);
    return 0;
}

int factorial(int num)
{
    int fact1;
    if (num == 1)
    {
        return 1;
    }
    else
    {
        fact1 = num * factorial(num - 1);
    }
    return fact1;
}