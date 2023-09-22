//author-akshat khatri//
//date-19-06-2023//
//printing factorial of numbers through recursion//
#include<stdio.h>
int factorial_num(int);
int main()
{
    int num,fact;
    printf("enter a number\n");
    scanf("%d",&num);
    fact=factorial_num(num);
    printf("the factorial of number %d is %d",num,fact);
    return 0;
}
int factorial_num(int num)
{
    int fact;
    int s;
    if(num==1)
    {
        return 1;
    }
    else
    {
        fact=num*factorial_num(num-1);
    }
       return fact;
}