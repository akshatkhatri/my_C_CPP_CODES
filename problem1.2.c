/*a program to convert distance between cities in km into other metric units*/
/*author:akshatkhatri,date-28/05/2023*/
/*problem 1.2*/
#include<stdio.h>
int main()
{
float m,inch,ft,cm,km;
printf("distance between cities in km");
scanf("%f",&km);
m=km*1000;
ft=inch/12;
inch=cm/2.54;
cm=m*100;
printf("distance in m = %f,/n",m);
printf("distance in cm= %f/n",cm);
printf("distance in feet= %f/n",ft);
printf("distance in inches= %f/n",inch);
return 0;
}


