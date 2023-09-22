//date-22-06-2023//
//to reverse the digits of a number//
#include<stdio.h>
int main()
{
    int num,digits;
    printf("enter the digits\n");
    scanf("%d",&digits);
    printf("enter the number you want\n");
    scanf("%d",&num);
    for(int i=1;i<=digits;i++)
    {
        printf("%d",num%10);
        num=num/10;
    }
    return 0;
}