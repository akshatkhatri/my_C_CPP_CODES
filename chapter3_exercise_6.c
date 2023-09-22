//author-akshat khatri//
//date-04/06/2023//
//checking if the 3 points are collinear or not//
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x1,x2,x3,y1,y2,y3;
    int a1,a2,a3;
    printf("enter the value of points (x1,y1):\n");//point A//
    scanf("%d,%d",&x1,&y1);
    printf("enter the value of points (x2,y2)\n");//point B//
    scanf("%d,%d",&x2,&y2);
    printf("enter the value of points(x3,y3)\n");//point C//
    scanf("%d,%d",&x3,&y3);
        a1= abs(x2-x1)/abs( y2-y1);//slope of AB//
        a2= abs(x3-x2)/abs(y3-y2);//slope of BC//
        a3= abs(x3-x1)/abs(y3-y1);//slope of AC//
            if((a1==a2)&&(a1==a3))
                {
                    printf("the points are collinear");
                }
            else
                {
                    printf("the points are not collinear");
                }
return 0;
}





