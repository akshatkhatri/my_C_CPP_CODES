//author- AKSHAT KHATRI//
//date-19-06-2023//
//printing the sum of 5 digits of a number using recursion//
#include<stdio.h>
int revnum(int);
int main()
{
    int a;
    int sum;
    printf("enter the 5 digit number");
    scanf("%d",&a);
    sum=revnum(a);
    printf("the sum of digits is %d",sum);
    return 0;
}
int revnum(int x)
{
    int s,remainder;
    if(x!=0)
    {
        remainder=x%10;
        s=remainder+revnum(x/10);
    }
    else
    {
        return 0;
    }
    return s;
}