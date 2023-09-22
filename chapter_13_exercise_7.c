// author-akshat khatri//
//date-22-06-2023//
//determining the area of triangular piece of land and determining which is largest//
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int area_triangle(float *,float *,float*);
int main()
{
    float side1[]={137.4,155.2,149.3,160.0,155.6,149.7};
    float side2[]={80.9,92.62,97.93,100.25,68.95,120.0};
    float angle[]={0.78,0.89,1.35,9.00,1.25,1.75};
    int largest=area_triangle(&side1[0],&side2[0],&angle[0]);
    printf("the largest plot of land is %d\n",largest);
    return 0;
}
int area_triangle(float *side1,float *side2,float *angle)
{
    float area[6];
    for(int i=0;i<6;i++)
    {
        area[i]=0.5*(*(side1+i))*(*(side2+i))*(sin(*(angle+i)));
        printf("the area of triangles is %.2f\n",area[i]);
    }
    int max=area[0];
    for (int i=0;i<6;i++)
    {
       if(area[i]>max)
       {
        max=area[i];
       }

    }
    return max;
}
