//author-akshat khatri//
//date-04-06-2023//
//a program to find the absolute value of a number//
#include<stdio.h>
int main()
{
int x,y,num;
printf("enter the value of number");
scanf("%d",&x);
if(x<0)
{
y=-1;

}
else
{
    y=1;
}
num=x*y;
printf("the absolute value of the number is :%d",num);
return 0;
}

