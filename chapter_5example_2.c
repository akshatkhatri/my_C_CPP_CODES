//author-akshat khatri//
//date-07-06-2023//
//to find the facrtorial value of any number entered through the keyboard//
#include<stdio.h>

int main()
{
    int num,i,fact;
    printf("enter the number you want to enter");
    scanf("%d",&num);
   fact= i=1;
   while (i<=num)
   {
        fact=fact*i;
        i++;
   }
   printf("the factorial of %d is %d",num,fact);
return 0;
}