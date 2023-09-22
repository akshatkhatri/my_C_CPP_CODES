//author-akshat khatri//
//date-18-06-2023//
//receiving weight of a commodity in kilogram and then converting it//
#include<stdio.h>
#include<math.h>
void convert_weight(float,float*,float*,float*);
int main()
{
    float kg;
    float grams,tons,pounds;
    printf("enter the value in kg\n");
    scanf("%f",&kg);
    convert_weight(kg,&grams,&tons,&pounds);
    printf("the value in grams is %.2f\nthe value in tons is%.2f\nthe value in pounds is%.2f\n",grams,tons,pounds);
    return 0;
}
void convert_weight(float kg,float *grams,float *tons,float *pounds)
{
    *grams=kg*1000;
    *tons=kg/1000;
    *pounds=kg/0.45359237;
}