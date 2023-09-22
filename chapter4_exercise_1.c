//author-akshat khatri//
//date-05/06/2023//
// commenting on the type of triangle given its sides//
#include<stdio.h>
#include<math.h>
int main()
{
    int s1,s2,s3;
    printf("enter the values of 3 sides of a triangle(provide in the oder of base,perpendicular,hypotenuse)");
    scanf("%d,%d,%d",&s1,&s2,&s3);
    if(s1*s1+s2*s2==s3*s3)
    {
        printf("the triangle is a right angled triangle");
    }
    else if ((s1==s2)&&(s3==s2))
    {
        printf("the triangle is an equilateral triangle");
    }
    else if ((s1==s2)&&(s2!=s3)||(s2==s3)&&(s3!=s1)||((s3=s1)&&(s1!=s2)))
    {
        printf("the triangle is isoceles triangle");
    }
    else
    printf("the triangle is scalar triangle");
return 0;
}

    

