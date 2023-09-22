//author-akshat khatri//
//date-08-06-2023//
//to get the octal equilvalent of an integer//

#include<stdio.h>
int main()
{
    float revnum,octal,rem;
    int num;
    printf("enter the number\n");
    scanf("%d",&num);
    octal=0;
    while(num>0)
    {
        rem=num%8;
        octal=rem;
        octal=octal*10+rem;
        num=num/8;
    }
    printf("%f",octal);
    return 0;
}