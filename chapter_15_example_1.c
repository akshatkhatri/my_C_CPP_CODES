//author-akshat khatri//
//date-25-06-2023//
// a program that extracts string from a given string//
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char string1[100];
    char newstring[100];
    int extract,limit,newlen;

    printf("enter the string\n");
    fgets(string1,sizeof(string1),stdin);
    string1[strcspn(string1, "\n")] = '\0';

    printf("enter the position you want to start extraction from\n ");
    scanf("%d",&extract);

    printf("enter till how much you want to extract\n");
    scanf("%d",&limit);

    if(extract<0||extract>strlen(string1))
    {
        printf("improper position value");
        exit(0);
    }
    int new_len=0;
    for(int i=0;i<limit;i++)
    {
        newstring[i]=string1[extract];
        extract++;
        new_len++;
    }
    
   /* newlen=strlen(newstring);
    newstring[new_len]='\0'; did not assign newlen because new len waits for the string to present itself with '\0*/

    printf("the substring obtained is \n");
    
    

    puts(newstring);
    return 0;
}


    

