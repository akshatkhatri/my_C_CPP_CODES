//a program to print the the distance between 2 points of earth in nautical miles provided their latitudes and longitudes//
//author-akshat khatri date-02/06/2023//
#include<stdio.h>
#include<math.h>
int main()
{
float l1,l2,g1,g2,nm;//nautical miles//
printf("enter values of latitude and longitude of the two places");
scanf("%f,%f,%f,%f",&l1,&l2,&g1,&g2);
nm=3963*acos(sin(l1)*sin(l2)+(cos(l1)*cos(l2))*cos(g2-g1));//formula for calculating nautical miles//
printf("the value in nautical miles is :%f",nm);
return 0;
}

