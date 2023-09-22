/*calculate ramesh gross salary*/
/*problem 1.1*/
/*author-akshat khatri date 28/05/2023*/
#include<stdio.h>
int main () 
{float bp,dra,hra,grp;
printf("basic salary of ramesh is ");
scanf("%f/n",&bp);
dra=0.4*bp;
hra=0.2*bp;
grp=bp+dra+hra;
printf("basic salary of ramesh is =%f/n",bp);
printf("dearness allowance = %f/n",dra);
printf("housing rent allowance = %f/n",hra);
printf("gross salary of ramesh is %f/n",grp);
return 0;
}
