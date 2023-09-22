//author-akshat khatri//
//date-05/06/2023//
//telling what is the type of a character on an input of its ASCII value//
#include<stdio.h>
int main()
{
    int ch;// THE ALTERNATIVE CODE IS BETTER IT IS IN THE FILES WITH THE SAME NAME BUT alt in front of it//
    printf("enter the value ");
    scanf("%d",&ch);
    if(ch>=65&&ch<=90)
    {
        printf("the character entered is uppercase\n");
    }
    if(ch>=97 && ch<=122)
    {
        printf("the character entered is lowercase\n");
    }
    if(ch>=48 && ch<=57)
    {
        printf("the character entered is numerical\n");
    }
    if((ch>=0 && ch<48)||(ch>57 && ch<65)||(ch>90 && ch<97)||(ch>123 && ch<128))
    {
        printf("the character is a special symbol\n");
    }
return 0;    
}
