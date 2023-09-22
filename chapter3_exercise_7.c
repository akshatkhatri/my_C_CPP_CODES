//author-akshat khatri//
//date - 04/06/2023//
//determining whether a point is inside the circle or not//
#include<stdio.h>
#include<math.h>
int main()
{
     int r,x1,y1,x2,y2,d,dis,a,b;
     printf("input the value of radius");
     scanf("%d",&r);
     printf("enter coordinates of point");
     scanf("%d,%d",&x1,&y1);
     printf("enter coordinate of center");
     scanf("%d,%d",&x2,&y2);
     d=r*2;
     a=x2-x1;
     b=y2-y1;
     dis=sqrt(pow(a,2))+(pow(b,2));// formula for distance of two points//
     if (dis==d)
    {
        printf("the point lies on the circle");
    }
    if(dis>d)
    {
        printf("the point is outside the circle");
    }
    else
    {
        printf("the point lies inside the circle");
    }
return 0;
}       

    


