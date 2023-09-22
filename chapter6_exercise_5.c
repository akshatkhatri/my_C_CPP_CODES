//author-akshat khatri//
//date-10-06-2023//
//to print all the pythogorean triplets for less than equal to 30//
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,x;
    for(a=1;a<=30;a++)
    {
        for(b=a;b<=30;b++)
        {
            for(c=b;c<=30;c++)
            {

            if((a*a)+(b*b)==(c*c))
                {
                printf("%d,%d,%d\n",a,b,c);
                }
            }
        }
    
    }

    return 0;
}
