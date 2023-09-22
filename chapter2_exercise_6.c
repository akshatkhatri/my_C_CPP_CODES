//interchanging the contents of two locations//
//author-akshat khatri date - 02-06/2023//
#include<Stdio.h>
int main()
{

int a,b,t;
printf("input the two numbers");
scanf("%d,%d",&a,&b);
t=a;
a=b;
b=t;
printf("the final numbers are:\n%d,%d",a,b);
return 0;
}