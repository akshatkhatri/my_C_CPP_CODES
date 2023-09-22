//author-akshat khatri//
//date 03-06-2023//
// program to reverse a 5 digit number and tell if its equal to the original number or not//
#include<stdio.h>
int main()
{
int m1,m2,m3,m4,m5,num,temp,revnum;
printf("enter a 5 digit number");
scanf("%d",&num);
temp=num;// a temporarary variable to store the value of num until the end//
m5=num%10;
num=num/10;
m4=num%10;
num=num/10;
m3=num%10;
num=num/10;
m2=num%10;
num=num/10;
m1=num%10;
revnum=m5*10000+m4*1000+m3*100+m2*10+m1;//the formula for numbers//
if(revnum==temp)//revnum=num not done because the value would have been zero//
printf("both number are same");
else
printf("reversed number is =%d",revnum);
return 0;
}