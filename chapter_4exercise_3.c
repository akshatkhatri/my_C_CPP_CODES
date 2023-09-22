//author-akshat khatri//
//date-06-06-2023//
//grading of steel based on certain parameters//
#include<stdio.h>
int main()
{
    int hard,ts,gr;
    float cc;
    printf("enter the value of hardness,carbon content,tensile strength of the steel\n");
    scanf("%d,%f,%d",&hard,&cc,&ts);

    if((hard>50)&&(cc<0.7)&&(ts>5600))
    {
        printf("the steel is of grade 10\n");
    }
    else if((hard>50)&&(cc<0.7)&&(ts<5600))
    {
        printf("the steel is of grade 9\n");
    }
    else if((hard<50)&&(cc<0.7)&&(ts>5600))
    {
        printf("the steel is of grade 8\n");
    }
    else if((hard>50)&&(cc>0.7)&&(ts>5600))
    {
        printf("the steel is of grade 7\n");
    }
    else if((hard>50)||(cc<0.7)||(ts>5600))
    {
        printf("the steel is of grade 6\n");
    }
    else 
    {
        printf("the steel is of grade 5\n");
    }
return 0;
}
