#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,root1,root2;
    printf("enter the coordinates of the equation :");
    scanf("%d,%d,%d",&a,&b,&c);
    d=(pow(b,2)-4*a*c);
    if(d>0)
    {
        printf("the equation would have real and distict roots");
        root1=(-b+sqrt(d))/(2*a);
        root2=(-b-sqrt(d))/(2*a);
        printf("roots are %d,%d",root1,root2);
        

    }
    else if(d=0)
    {
    printf(" the equation would have real and equal roots");
    root2,root1=(-b+sqrt(d))/(2*a);
    }
    else
    {
        printf("roots are not real");
    }
    return 0;


}