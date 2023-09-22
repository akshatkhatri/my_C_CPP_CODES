/*reversing the 5 digit number input through the keyboard*/
/*author-akshat khatri date-02/06/2023*/
#include<stdio.h>
int main()
{
int d1,d2,d3,d4,d5,n,revnum;

printf("enter a 5 digit number:\n");
scanf("%d/n",&n);
d5=n%10; /*remainder of the digit the term %is used for remainder of the devision*/
n=n/10;/*remaining numbers*/
d4=n%10;
n=n/10;
d3=n%10;
n=n/10;
d2=n%10;
n=n/10;
d1=n%10;
revnum=d5*10000+d4*1000+d3*100+d2*10+d1*1; /*formula for finding the reversed number with their respective place values*/
printf("the reversed number is = %d",revnum);
return 0;
}

