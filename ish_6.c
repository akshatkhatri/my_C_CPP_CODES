#include<stdio.h>
int main()
{
    int i,sum,percent;
    sum=0;
    for(i=1;i<=10;i++)
    {
        percent=(100000)+(100000*10/100);
        sum=i*percent;

    }
    printf("the total population after a decade=%d",sum);
    return 0;
}