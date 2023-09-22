//author-akshat khatri//
//date-05-06-2023//
//to find out if a program lies on x or y axis or origin//
#include<stdio.h>
int main()
{
    int x,y;
    printf("enter the coordinates of point");
    scanf("%d,%d",&x,&y);
     if(x==0&&y==0)
        {
            printf("the point lies on origin");
        }
        if(x==0&&y!=0)
        {
            printf("the point lies on y axis");
        }
        if(y==0&&x!=0)
        {
            printf("the point lies on x axis");
        }
       
        if(x!=0&&y!=0)
       {
            printf("the point lies neither on x axis nor y axis");
       }
return 0;            
}