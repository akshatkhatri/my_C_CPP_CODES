//author-akshat khatri//
//date-10-06-2023//
// to take 10 sets of p,r,n,q//
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int p,r,n,q,a,i;
    for(i=1;i<=10;i++)
    {
        printf("enter values of p,r,n,q\n");
        scanf("%d,%d,%d,%d",&p,&r,&n,&q);
        a=p*(pow((1+(r/q)),(n*q)));// formula for ammount//
        printf("value of a is:%d\n",a);

    }
    return 0;
}