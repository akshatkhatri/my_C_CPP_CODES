//author-akshat khatri//
//date-18-06-2023//
//a program to circularly shift the values of the given numbers to right//
#include<stdio.h>
void num_swap(int*,int*,int*,int,int,int);
int main()
{
    int a,b,c,temp1,temp2,temp3;
    printf("enter the values of a,b,c\n");
    scanf("%d,%d,%d",&a,&b,&c);
    
    num_swap(&a,&b,&c,temp1,temp2,temp3);
    printf("%d,%d,%d",a,b,c);
    return 0;
}
void num_swap(int *a,int *b,int *c,int temp1,int temp2,int temp3)
{
    temp1=*a;    
    temp2=*b;
    temp3=*c;
    *b=temp1;
    *c=temp2;
    *a=temp3;

}
