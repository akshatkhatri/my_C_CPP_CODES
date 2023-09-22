//author-akshat khatri//
//date-21-06-2023//
// searching a number in an array and finding out how many times it occured//
#include<stdio.h>
int main()
{
    int number[]={2,3,7,7,7,4,5,9,23,45};
        int count,num;
        printf("enter the number you want to search\n");
        scanf("%d",&num);
        count=0;
        for(int i=0;i<=9;i++)
        {
            if(number[i]==num)
            {
                count++;
            }
        }
        printf("%d times\n",count);
        return 0;
}