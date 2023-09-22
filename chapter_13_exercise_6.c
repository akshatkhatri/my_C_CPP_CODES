//author-akshat khatri//
//date-21-06-2023//
// computing the standard deviation and the mean of data//
#include<stdio.h>
#include<math.h>
float mean(int*,int*);
void standard_deviation(int*,float*,int*);
int main()
{
    float avg;
    int numbers[]={-6,-12,8,13,11,6,7,2,-6,-9,-10,11,10,9,2};
    int n=sizeof(numbers)/sizeof(numbers[0]);
    avg=mean(&numbers[0],&n);
    printf("the average of numbers is %.2f\n",avg);
    standard_deviation(&numbers[0],&avg,&n);
   
    return 0;

}
float mean(int *ptr,int *n)
{
   int sum=0,avg;
   for(int i=0;i<*n;i++)
   {
        sum=sum+*(ptr+i);     
   }
    avg=sum/(float)(*n);
    return avg;
   
}
void standard_deviation(int*ptr,float *average,int *n)
{
    
    float modi_number[*n];
    for(int i=0;i<*n;i++)
    {
        modi_number[i]=sqrt(pow(*(ptr+i)-*average,2)/(*n));
    }
    for(int i=0;i<*n;i++)
    {
        printf("%.2f",modi_number[i]);
    }
}