//author-akshat khatri//
//date-03/06/2023//
//finding if the integer is odd or even//
#include<stdio.h>
int main()
{
int n;
printf("any number of your choice (not a decimal)");
scanf("%d",&n);
if(n%2==0)
    printf("the number is even");//alternatively 'else' statement could have been used here//
if(n%2!=0)
    printf("the number is odd");
return 0;
}