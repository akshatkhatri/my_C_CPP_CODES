//author-akshat khatri//
//date-18-06-2023//
//a program to define a function that calculates power of one number raised to another and factorial value of a number//
#include<stdio.h>
#include<math.h>
void power_fact(float,float,int,int*,float*);
int main()
{
    float a,b,power;
    int c,fact;
    printf("enter the values of numbers you want to raise to the power\n");
    scanf("%f,%f",&a,&b);
    printf("enter the number you want factorial of\n");
    scanf("%d",&c);
    power_fact(a,b,c,&fact,&power);
    printf("factorial=%d\npower=%f\n",fact,power);
    return 0;
}
void power_fact(float a,float b,int c,int *fact,float *power)
{
    *power=pow(a,b);
    int factorial=1;
    for(int i=1;i<=c;i++)
    {
        factorial=factorial*i;
    }
    *fact=factorial;
}