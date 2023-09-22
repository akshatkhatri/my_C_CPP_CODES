#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,limit,x;
    printf("enter the numer");
    scanf("%d",&n);
    printf("enter the limit upto which you want the table to display");
    scanf("%d",&limit);
    for(i=1;i<=limit;i++)
    {
        x=n*i;
        printf("%d*%d=%d\n",n,i,x);
    }
    return 0;
}
