//author-akshat khatri//
//date-19-06-2023//
//a program to obtain prime factors of a number//
#include<stdio.h>
 void prime_factors(int);
 int main()
 {
    int num,checkprime;
    printf("enter the number for prime factors\n");
    scanf("%d",&num);
    prime_factors(num);
    return 0;
 }
 void prime_factors(int num)
 {
    int i;
    
    while(num%2==0)
    {
        printf("2\n");
        num=num/2;
    }
   
    for(int i=3;i<=num;i=i+2)
    {
        while (num%i==0)
        {
        printf("%d\n",i);
        num=num/i;
        }

    }   
 }
 


