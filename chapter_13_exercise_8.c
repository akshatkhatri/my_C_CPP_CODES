//author-akshat khatri//
//date-22-06-2023//
//computing the correlation coefficient in a given set of data//
#include<stdio.h>
#include<math.h>
int main()
{
    float x[]={34.22,39.87,41.85,43.23,40.06,53.29,53.29,54.14,49.12,40.71,55.15};
    float y[]={102.43,100.93,97.43,97.81,98.32,98.32,100.07,97.08,91.59,94.85,94.65};
    float xy[11];
    float xsquare[11];
    float ysquare[11];
    for(int i=0;i<11;i++)
    {
        xy[i]=x[i]*y[i];
        xsquare[i]=x[i]*x[i];
        ysquare[i]=y[i]*y[i];
    }
    float sumx,sumy,sumxy,sumxsquare,sumysquare=0;
    for(int i=0;i<11;i++)
    {
        sumx=sumx+x[i];
        sumy=sumy+y[i];
        sumxy=sumxy+(x[i]*y[i]);
        sumxsquare=sumxsquare+(x[i]*x[i]);
        sumysquare=sumysquare+(y[i]*y[i]);
    }
    
     float corel_coeffi=(sumxy-(sumx*sumy))/sqrt(((11*sumxsquare)-sumxsquare)*((11*sumysquare)-sumysquare));
    printf("the correlation cofficient of the data is %.2f",corel_coeffi);
return 0;
}