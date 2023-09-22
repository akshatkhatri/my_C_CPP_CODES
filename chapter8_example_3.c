//author-akshat khatri//
//date-12-06-2023//
//convert any number into its roman equivalent//
#include<stdio.h>
void romanize(int );//function declaration//
int main()
{
    int year;
    printf("enter the number");
    scanf("%d",&year);
     romanize( year);//function call//
return 0;
}
void romanize(int year)//function//
{
    for(int i=1;year!=0;i++)
    {
        if(year>=1000)
    {
        printf("M");
        year=year-1000;
    }
    else if(year>=500)
    {
        printf("D");
        year=year-500;
    }
    else if(year>=100)
    {
        printf("C");
        year=year-100;
    }
    else if(year>=50)
    {
        printf("L");
        year=year-50;
    }
    else if(year>=10)
    {
        printf("X");
        year=year-10;
    }
    else if(year>=5)
    {
        printf("V");
        year=year-5;
    }
    else if(year>=1)
    {
        printf("I");
        year=year-1;
    }



    }
}
    

