//author-akshat khatri//
//date-07-06-2023//
//to print all the armstrong numbers from 1 to 500//
// an armstrong number is whose cubes of digits is equal to the number itself e.g. 153 (1*1*1+5*5*5+3*3*3)=153//
#include<stdio.h>
int main()
{
    int d1,d2,d3,num,sum,rem;
    int i;
    i=1;

    while(i<=500)
    {
       num=i; 
       sum=0;
       while(num>0)
       {
        rem=num%10;
        num=num/10;
        sum=sum+(rem*rem*rem);
       }
       if(i==sum)
       {
        printf("%d\n",i);
       }
    i++;

    }
    return 0;
}
    