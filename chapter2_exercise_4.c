//program to write wind chill factor given the values of t and v//
//author-akshat khatri date-02/06/2023//
#include<stdio.h>
#include<math.h>
int main()
{
float t,v,wcf;//wcf is wind chill factor//
printf("input the values of temperature and wind velocity");
scanf("%f,%f",&t,&v);
wcf=35.74+0.6251*t+(0.4275*t-35.75)*pow(v,0.16);//formula for wind chill factor (wcf)//
printf("wind chill factor is :%f",wcf);
return 0;

}