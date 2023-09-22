//author-akshat khatri//
//date-09-06-2023//
//to print prime numbers from 1 to 300//
#include<stdio.h>
int main()
{
     int num,i;
    for(num=1;num<=300;num++)
    {
        for(i=2;i<num;i++)
        if(num%i==0)
        {
            break;// the loop ends if the number is divisble by anything but itself//
        }
        if(i==num)
        {
            printf("%d\n",num);
        }
    }
return 0;
}
