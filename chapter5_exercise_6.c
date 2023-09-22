//author-akshat khatri//
//date-08-06-2023//
//a program to find the range of a set of numbers entered by the user//
#include<stdio.h>
#include<stdlib.h>
int main()

{
    int limit,num,small,large,range;
    printf("enter the limit\n");
    scanf("%d",&limit);
    printf("enter the numbers\n");
    scanf("%d",&num);
    small=num;
    large=num;
    limit=limit-1;// the reason all this is done outside the loop is because we wanted to compare both num and big and num and small//
    while(limit>0)
    {
        scanf("%d",&num);
        if(num>large)
        {
            large=num;
        }
        if(num<small)
        {
            small=num;
        }
        limit--;

    }
    printf("the largest number is :%d\n",large);
    printf("the smallest number is :%d\n",small);
    range=large-small;
    printf("the range of the numbers will be:%d\n",abs(range));// modulus operator//
return 0;
}