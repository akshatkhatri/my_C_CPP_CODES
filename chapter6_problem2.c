//author-akshat khatri//
//date-10-06-2023//
//table of the approximate level of intelligence for varied values of x,y,i//
#include<stdio.h>
int main()
{
    int y;
float i,x;
    printf("i\t\ty\tx\n");
    for(y=1;y<=6;y++)//loop for values of y from 1 to 6//
    {
    for(x=5.5;x<=12.5;x=x+0.5)//loop for values of x from 5.5 to 12.5 in pieces of 0.5//
    {
        i=2+(y+0.5*x);// formula of intelligence//
        printf("%.2f\t\t%d\t%.2f\n",i,y,x);// the %.2f means precision of 2 decimal points//
    }
}
return 0;
}