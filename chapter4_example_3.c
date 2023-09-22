//author-akshat khatri//
//date-05-06-2023//
//a program to check if the triangle is valid or not//
#include<stdio.h>
int main()
{
    int s1,s2,s3,x,sum,largeside;
    printf("input values of the three sides");
    scanf("%d,%d,%d",&s1,&s2,&s3);
    x=(s1+s2+s3)/(s1+s1+s1);
    if(s1>s2)
    {
       

        if(s1>s3)
        {
            sum=s3+s2;
            largeside=s1;
        }
        else
        {
            sum=s1+s2;
            largeside=s3;
        }
    }
         if(s2>s3)
        {
        if(s2>s1)
        sum=s1+s3;
        largeside=s2;
        }
        else
        {
            sum=s2+s3;
            largeside=s1;
        }
    if (sum>largeside)
   {

    printf("the triangle does exist");
   }
    else 
    {
        printf("the triangle doesnt exist");  
    }
return 0;
}
        
    

    
        
    
    

