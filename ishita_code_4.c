//date-22-06-2023//
//sum of the eqn using the taylor series//
#include<stdio.h>
#include<math.h>
int factorial(int);
int main()
{
    int x;
    int limit;
    printf("enter the number till you want the series\n");
    scanf("%d",&limit);
    printf("enter the number\n");
    scanf("%d",&x);
    int sum=0;
    for(int i=1;i<=limit;i=i+2)
    {
        sum=sum+(pow(x,i))/factorial(i);
    }
    printf("the sum of series is %d\n",sum-1);
    return 0;
}
int factorial(int x)
{
    int fact=1;
    for(int i=1;i<=x;i++)
    {
        fact=fact*i;
    }
    return fact;
}