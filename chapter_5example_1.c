//author-akshat khatri//
//date-07-06-2023//
//a program to calculate the overtime pay of employees//
#include<stdio.h>
int main()
{
    float otpay;
    int hour,i;
    i=1;
    while(i<=10)//loop for 10 employees
   {
         printf("enter the number of hours worked\n");
         scanf("%d",&hour);
        if(hour>=40)
         {
            otpay=(hour-40)*120;
         }  
         else
         {
            otpay=0;
         } 
         printf("no.of hours worked :%d\n overtime pay=%f\n",hour,otpay);
         i++;//increments value of i without it the loop will be infinite//
   }     
return 0;             
}