//author-akshat khatri//
//date-07-06-2023//
//a matchstick game//
#include<stdio.h>
int main()
{
int userchoice,computerchoice,matchsticks;
matchsticks=0; //initialization of condition//
while(matchsticks<21)
{
    printf("enter the number\n");
    scanf("%d",&userchoice);
    if((userchoice<1)||(userchoice>4))//checking if the number entered is not greater than 4 or less than 1 //
    {
    printf("the number chosen is invalid\n");
    }
     matchsticks=matchsticks+5;//userchoice+computer choice//

        if(matchsticks>=21)
        {
            printf("the computer picked the last matchstick ,computer wins\n");
        }
    
        computerchoice=5-userchoice;// computers's condition to win//
        
        if(matchsticks<21)
        {
            printf("the computer choice is :%d\n",computerchoice);
             printf("total matchsticks are %d\n",matchsticks);
        }   
}

return 0;
}    
