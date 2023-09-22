//author-akshat khatri//
//date-19-06-2023//
//printing first 25 fibonacci numbers//
#include<stdio.h>
int main()
{
   int first=0;
  int  second=1;
  int next;
int terms=25;

    for(int i=3;i<=terms;i++)
{
    next=first+second;
    printf("%d\n",next);
    first=second;
    second=next;
}
printf("\n");
return 0;
}
