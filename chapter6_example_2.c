//author-akshat khatri//
//date-09-06-2023//
//a program to add the first seven terms of the following series //
//((1/1!)+(2/2!)+(3/3!)+......)//
#include<stdio.h>
int main()
{
    int i,j;
    float fact,sum;
     sum=0.0;
    
    for(i=1;i<=7;i++)
    {
        fact=1.0;
        for(j=1;j<=i;j++)
        
        {
        fact=fact*j;
        }
        sum=sum+i/fact;
    }
    printf("sum of series=%f\n",sum);
    return 0;
}

    

