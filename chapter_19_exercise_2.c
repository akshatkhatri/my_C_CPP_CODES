//author-akshat khatri
//date-05-07-2023
// write a program to copy contents of one file into another replace all lowercase characters into theie equivalent uppercase characters
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char ch;
    FILE *f1,*f2;
    f1=fopen("test.txt","r");
    if(f1==NULL)
    {
        printf("unable to open file\n");
        exit(0);
    }    
    f2=fopen("upper.txt","a");
    if(f2==NULL)
    {
        printf("unable to open file\n");
        exit(1);
    }
    while(ch!=EOF)
    {
        ch=fgetc(f1);
        if(ch>=97&&ch<=122)
        {
            ch=ch-32;
        }
        fprintf(f2,"%c",ch);
    }
    puts("succesfully converted\n");
    fclose(f1);
    fclose(f2);
    return 0;

}