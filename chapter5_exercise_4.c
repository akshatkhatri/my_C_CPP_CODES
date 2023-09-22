//author-akshat khatri//
//date-08-06-2023//
//a program to print the no. of positive ,negative and zeroes inputed by the user//
#include<stdio.h>
int main()
{
    int limit,num,positive,negative,zero;
    printf("enter the limit\n");
    scanf("%d",&limit);// the limit acts as a loop counter//
    printf("enter the numbers you want limit(%d)\n",limit);
    positive=0;//equating these to zero is imp or else garbage values will be obtained//
    negative=0;
    zero=0;
    while(limit>0)
    {
         scanf("%d",&num);
        if(num<0)
        {
        negative++;
        }
        else if(num>0)
        {
            positive++;
        }
        else // if num=0//
        {
            zero++;
        }
        limit--;//limit=limit-1 everytime loop is executed//
    }    
    printf("the no.of positive numbers are %d\n",positive);
    printf("the no.of negative numbers are %d\n",negative);
    printf("the number of zero numbers are %d\n",zero);
    return 0;
}