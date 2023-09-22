//author-akshat-khatri
//date-02/07/2023
//generating random numbers//
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    srand(time(NULL));
    printf("the random number is %d",rand()%6+1);
}