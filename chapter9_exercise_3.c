//author-akshat khatri//
//date-18-06-2023//
// geometrical calculations//
#include<stdio.h>
#include<math.h>
float dis_between_2points(float,float,float,float);
float area_triangle(float,float,float,float,float,float);
float point_triangle(float,float,float,float,float,float,float,float);
int main()
{
    float x,y,a,b,x1,y1,x2,y2,x3,y3,dis;
    printf("enter the points you want to calculate distance in between\n");
    scanf("%f,%f,%f,%f",&x,&y,&a,&b);
    
         printf("enter the coordinates of the triangle");
         scanf("%f,%f,%f,%f,%f,%f",&x1,&y1,&x2,&y2,&x3,&y3);
         printf("the distance between coordinates is %f\n",dis_between_2points(x,y,a,b));
         printf(" the area of triangle is %f\n",area_triangle(x1,y1,x2,y2,x3,y3));
         int isinside=point_triangle(x1, y1, x2, y2, x3, y3, x, y);
         if(isinside==1)
         {
            printf("the point lies inside the triangle");
         }
         else
         {
            printf("the point lies outside the triangle");
         }
    return 0;
}
float dis_between_2points(float x,float y,float a,float b)
{
    float dis;
    dis=sqrt(pow(a-x,2)+pow(b-y,2));
    return dis;
}
float area_triangle(float x1, float y1, float x2, float y2, float x3, float y3)
{
    float s;
    s=(dis_between_2points(x1,y1,x2,y2)+dis_between_2points(x2,y2,x3,y3)+dis_between_2points(x3,y3,x1,y1))/2;
    return sqrt(s*(s-dis_between_2points(x1,y1,x2,y2))*(s-dis_between_2points(x2,y2,x3,y3))*(s-dis_between_2points(x3,y3,x1,y1)));    
        //√ (s (s – a) (s – b) (s – c))) heron formula//                                                    
}
float point_triangle(float a1, float a2,float b1, float b2, float c1, float c2, float d1,float d2)
{
    printf("enter the sides of triangle");
    scanf("%d,%d,%d,%d,%d,%d",&a1,&a2,&b1,&b2,&c1,&c2,&d1,&d2);
    area_triangle(a1,a2,b1,b2,c1,c2);
    printf("enter the point");
    scanf("%f,%f",&d1,&d2);
    if(dis_between_2points(a1,a2,d1,d2)==(dis_between_2points(b1,b2,d1,d2))&& dis_between_2points(b1, b2, d1, d2) == dis_between_2points(c1, c2, d1, d2))

    {
        return 1;
    }
    else
    {
        return 0;
    }
}