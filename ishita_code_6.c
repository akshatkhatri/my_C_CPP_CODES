//author-akshat khatri//
//date-22-06-2023//
#include<stdio.h>
int main()
{
    int stars;
    int count =0;
    printf("enter the no.of rows you want");
    scanf("%d",&stars);
    printf("\t*\n");
    for(int i=2;i<=stars;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("\b*\t");
        }
        printf("\n");
    }
}