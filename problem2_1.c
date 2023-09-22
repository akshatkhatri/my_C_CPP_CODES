/*finding the area of a triangle with 3 side input*/
/*author-akshatkhatri date-01/06/2023*/
#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,sp,area;
printf("enter sides of a triangle\n");
scanf("%f,%f,%f",&a,&b,&c);
sp=(a+b+c)/2;
area=sqrt(sp*(sp-a)*(sp-b)*(sp-c));
printf("area of triangle =%f\n",area);
return 0;
}