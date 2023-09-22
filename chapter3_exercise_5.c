//author-akshat khatri//
//date-04-06-2023//
// a program to find if the area of a triangle is more than its perimeter//
#include<stdio.h>
int main()
{
    int l,b,per,ar;
    printf("enter length and breadth of a rectangle");
    scanf("%d,%d",&l,&b);
    ar=l*b;
    per=2*(l+b);
    printf("area of rectangle=%d\n",ar);
    printf("perimeter of rectangle=%d\n",per);
    if(ar>per)
    {
        printf("area is greater than the perimeter");
    }
    else
    {
        printf("perimeter is greater than the area");
    }
return 0;
}