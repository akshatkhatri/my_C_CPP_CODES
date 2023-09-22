//author-akshat khatri//
//date-21-06-2023//
// 25 numbers are entered through the keyboard write a program to print number of pos,neg,odd,even//
#include<stdio.h>
int check_even_odd(int*);
int check_pos_neg(int*);
int main()
{
    int even,pos,odd,neg;
    int arr[25];
    printf("enter the 25 numbers\n");
    for(int i=0;i<=24;i++)
    {
        scanf("%d",&arr[i]);
    }
   even= check_even_odd(&arr[0]);
   pos=check_pos_neg(&arr[0]);
    odd=25-even;
    neg=25-pos;
    printf("the number of even numbers in the array are :%d\n",even);
    printf("the number of odd numbers in the array are :%d\n",odd);
    printf("the number of positive numbers in the array are:%d\n",pos);
    printf("the number of negative numbers in the array are :%d\n",neg);
return 0;
}
int check_even_odd(int*ptr)
{
    int count=0;
    for(int i=0;i<=24;i++)
    {
        if(*ptr%2==0)
        {
            count++;
        }
        ptr++;
    }
    return count;
}
int check_pos_neg(int*ptr1)
{
    int count1=0;
    for(int i=0;i<=24;i++)
    {
        if(*ptr1>0)
        {
            count1++;
        }
        ptr1++;
    }
    return count1;
}
