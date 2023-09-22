//all trignometric ratios of a given input nummber//
//author-akshat khatri date 02-06-2023//
#include<stdio.h>
#include<math.h>
int main()
{
float number,cosec,sec,cot,x,y,z;
printf("input value of number you want");
scanf("%f",&number);
x=sin(number);
y=cos(number);
z=tan(number);
cosec=1/sin(number);
sec=1/cos(number);
cot=1/tan(number);
printf("the values of trigno ratios are:\n");
printf("value of sin:%g\n",x);
printf("value of cos:%g\n",y);
printf("value of tan:%g\n",z);
printf("value of cosec:%g\n",cosec);
printf("value of sec:%g\n",sec);
printf("value of cot:%g\n",cot);
return 0;
}