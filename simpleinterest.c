/*calculation of simple interest*/
/*author: akshat khatri date :28/05/2024*/
#include<stdio.h>
int main ()
{int p,n ;
float r,si;
p= 1000;
n=3;
r=8.5;
/*formula for interest*/
si=p*n*r/100;
printf("%f",si);
return 0;
}