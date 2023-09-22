//author-akshat khatri //
//date-03/06/2023//
// if the ages of 3 people are put telling which one is youngest//

//the following 6 conditions should be met//
//1.a1>a2>a3//
//2.a3>a2>a1//
//3.a2>a1>a3//
//4.a2>a3>a1//
//5.a1>a3>a2//
//6.a3>a1>a2//

#include<stdio.h>
int main()
{
int a1,a2,a3;
printf("enter the age of ram,shyam and ajay");
scanf("%d,%d,%d",&a1,&a2,&a3);
if(a1>a2)
{
    if(a2>a3)
   { 
    printf("%d,%d,%d",a1,a2,a3);//altough there was no need to enclose it in this {}bracket as it is default but for the sake of indentation//
   }

    else
    {
        if(a1>a3)
       { printf("%d,%d,%d",a1,a3,a2);
       }
        
            else
        {  printf("%d,%d,%d",a3,a1,a2);
        }
    }
}
else
{
    if(a1>a3)
    {
    printf("%d,%d,%d",a2,a1,a3);
    }
    else
    {
    if(a2>a3)
    {
    printf("%d,%d,%d",a2,a3,a1);
    }
    else
    {
    printf("%d,%d,%d",a3,a2,a1);
    }
    }
}

return 0;
}

    

    