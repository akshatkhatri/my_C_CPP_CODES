//author-akshat khatri//
//date-06-06-2023//
//calculating a persons BMI//
#include<stdio.h>
#include<math.h>
int main()
{
    float h,ft,bmi,kg ;
    int x;
    char name[100];
    printf("please enter your name\n");
    scanf("%s",name);
    printf("HELLO! %s\n",name);
    printf("greetings,\nweclome to bmi calculator\n");
    printf("do you want to enter height in meters or feets\n(enter 1 for meters and 2 for feets)\n");
    scanf("%d",&x);
    if(x==1)
    {
        printf("you have opted for meter conversion\n please enter the height in meters only\n");
    }
    else
    {
        printf("you have opted for feet conversion\n please enter the height in feet only ( for e.g. 5.7 feet or 6.4 feet)\n");
    }

    printf("enter in height and weight(kg)\n");

    scanf("%f,%f",&h,&kg);
    if(x==1)
    {
        h=h*1;
    }
    else
    {
        h=h/(3.28);
        
    }
    bmi=(kg)/(h*h);//formula for bmi//
    printf("%.2f\n",bmi);
    if(bmi<15)
    {
        printf("the person is starving");
    }
    else if((bmi>=15.1)&&(bmi<=17.5))
    {
        printf("the person is anorexic");
    }
    else if((bmi>=17.6)&&(bmi<=18.5))
    {
        printf("the person is underweight");
    }
    else if((bmi>=18.6)&&(bmi<=24.9))
    {
        printf("the person is of ideal weight,kudos!!!");
    }
    else if((bmi>=25)&&(bmi<=25.9))
    {
        printf("the person is overweight");
    }
    else if ((bmi>=26)&&(bmi<=30.9))
    {
        printf("the person is obese");
    }
    else 
    {
        printf("the person is morbidly obese");
    }
return 0;
}
    













