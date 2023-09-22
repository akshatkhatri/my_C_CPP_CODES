//author-akshat khatri//
//date 03-06-2023//
// a program to calculate the gross salary of an employee//
#include<stdio.h>
int  main()
{
float bs,hra,da,gs;
printf("enter basic salary");
scanf("%f",&bs);
if(bs<1500)
{
    hra=bs*10/100;
da=bs*90/100;
}
else
{
hra=500;
da=bs*98/100;
}
gs=bs+da+hra;
printf("the gross salary of the employee is rs.%f",gs);
return 0;
}

