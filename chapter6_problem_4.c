//author-akshat khatri//
//date-10-06-2023//
//to print the natural logarithm of a number till 7//
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
int power;
float sum,x;
printf("enter the value of x");
scanf("%f",&x);
sum=0.0;//initialized it outside the loop or else the loop will always be zero//
for(power=2;power<=7;power++)
{                                            //1.0 and 2.0 are done because if 1/2 is done the result will be zero as both are integers//
    sum=sum+((1.0/2.0)*pow((x-1)/(x),(power)));//formula for calculation of series sum//
}
sum=sum+(x-1)/(x);//added the term at first//
printf("sum of series=%.2f",sum);
return 0;
}
