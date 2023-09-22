//a program to recieve cartesian coordinates and convert them into polar coordinates//
//author-akshat khatri date-02/06/2023//
#include<stdio.h>
#include<math.h>
int main()
{
float x,y,r,o;
printf("give the coordinates of the point");
scanf("%f,%f",&x,&y);
r=sqrt((pow(x,2))+(pow(y,2)));//formula for polar coordinate of a system//
o=atan(y/x);//atan()means inverse of a function//
printf("the polar coordinates are:%g,%g",r,o);
return 0;
}