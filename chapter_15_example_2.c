//author-akshat khatri//
//date-25-06-2023//
// a program which converts a string into an integer//
#include<stdio.h>
#include<string.h>
int main()
{
    char string1[10];
    int len;

    printf("enter the number(string) you want to convert into integer\n");
    scanf("%s",&string1);
    len=strlen(string1);

    string1[len]='\0';
    
    int num=0;

    for(int i=0;i<len;i++)
    {
        if(string1[i]>47 && string1[i]<58)
        {   
            num=num*10+(string1[i]-48);
        }
        else
        {
            printf("not a valid string");
            return 1;
        }
    } 

    printf("\nthe number entered in string is %d\n",num);
return 0;


}
