/*finding aggregate and percentage marks of a student*/
/*author-akshat khatri date 29-05-2023*/
#include<stdio.h>
int 
main()
{
    float m1,
     m2,
     m3,
     m4,
     m5,
     agr,
     per;

    printf("enter value of m1");
    scanf("%f", &m1);
    printf("enter value of m2");
    scanf("%f", &m2);
    printf("enter value of m3");
    scanf("%f", &m3);
    printf("enter value of m4");
    scanf("%f", &m4);
    printf("enter value of m5");
    scanf("%f", &m5);
    agr = m1 + m2 + m3 + m4 + m5;
    per = agr / 5;
    printf("aggregate marks of a student=%f", agr);
    printf("percentage marks of a student=%f", per);
    return 0;
}