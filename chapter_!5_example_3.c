//author-akshat khatri//
//date-25-06-2023//
// a program to generate fibonacci sequence of numbers//
#include<stdio.h>
#include<string.h>
int main()
{
 char str1[110];
 char last_term[50]="A";
 char last_2_term[50]="B";
 for(int i=0;i<=5;i++)
 {
    strcpy(str1,last_2_term);
    strcat(str1,last_term);
    printf("%d combination is %s\n",i,str1);
    strcpy(last_term,last_2_term);
    strcpy(last_2_term,str1);
 }
 return 0;
}