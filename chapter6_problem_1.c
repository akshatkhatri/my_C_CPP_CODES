//author-akshat khatri//
//date-10-06-2023//
//a program to print table//
#include<stdio.h>
int main()
{
    int num,i,product;
    printf("enter the value of number\n");
    scanf("%d",&num);
    product=0;
    for(i=0;i<=10;i++)//loop for printing numbers//
    {
        product=0;// it is neccesary for product to zero or else garbage value will be processed//
        product=product+(num*i);
        printf("%d*%d=%d\n",num,i,product);
    }
return 0;
}
