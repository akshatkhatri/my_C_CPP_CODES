//author-akshat khatri//
//date-05/06/2023//
//telling what is the type of a character on an input of its ASCII value//
#include<stdio.h>
int main()
{
    char ch;
    printf("enter the value ");
    scanf("%d",&ch);
    if(ch>=65&&ch<=90)
    {
        printf("the value entered is uppercase\n");
    }
    else if(ch>=97&&ch<=122)
    {
        printf("the value entered is lowercase");
    }
    else if(ch>=48&&ch<=57)
    {
        printf("the character entered is numerical");
    }
    else
    {
        printf("the character is a special symbol");
    }
    return 0;
}