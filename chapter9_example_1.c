//author-akshat khatri//
//date-18-06-2023//
//a program to write 5 numbers and do certain opeartions on them//
#include<stdio.h>
#include<math.h>
void maths(int *,int *,float *);
int main()
{
    int sum,avg;
    float deviation;
    maths(&sum,&avg,&deviation);
    printf("sum of numbers=%d\naverage=%d\nstandard deviation=%f\n",sum,avg,deviation);
    return 0;
}
void maths(int *sum,int *avg, float*deviation)
{
    int n1,n2,n3,n4,n5;
    printf("enter the numbers");
    scanf("%d,%d,%d,%d,%d",&n1,&n2,&n3,&n4,&n5);
    *sum=n1+n2+n3+n4+n5;
    *avg=*sum/5;
    *deviation=sqrt((pow((n1-*avg),2.0)+pow((n2-*avg),2.0)+pow((n3-*avg),2.0)+pow((n4-*avg),2.0)+pow((n5-*avg),2.0))/4);
    
}