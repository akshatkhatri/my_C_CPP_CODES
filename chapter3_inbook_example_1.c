//author-akshat khatri//
//date-03/06/2023//
// a program to give discount of 10% on a purchase of more than 1000 units//
#include<stdio.h>
int main()
{
int qty,dis;
float exp,rate;
printf("enter value of the no.of units purchasedand the rate of 1 unit");
scanf("%d,%f",&qty,&rate);
if(qty>1000)
dis=10;
else
dis=0;
exp=(qty*rate)-(qty*rate*dis/100);//formula for discount rate//
printf("total expense is %f",exp);
return 0;
}