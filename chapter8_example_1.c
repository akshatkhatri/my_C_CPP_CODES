//author-akshat khatri//
//date-12-06-2023//
// a program to calculate the function factorial of an integer//
#include<stdio.h>
int fact(int);
int main()
{
    int num;
    int factorial;
    printf("\n enter a number:");
    scanf("%d",&num);
    factorial=fact(num);
    printf("factorial of %d=%d\n",num,factorial);
    return 0;
}
int fact(int num)
{
int i;
int factorial=1;
for(i=1;i<=num;i++)
{
    factorial=factorial*i;
}
return(factorial);
}