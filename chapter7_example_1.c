//author-akshat khatri//
//date-11-06-2023//
//menu-driven program//
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int choice,num,i,fact;
    while(1)
    {
        printf("\n 1-factorial\n");
        printf("\n2-prime\n");
        printf("\n3.odd/even\n");
        printf("\n4-exit\n");
        printf("your choice?\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            printf("enter a number");
            scanf("%d",&num);
            fact=1;
            for(i=1;i<=num;i++)
            {
                fact=fact*i;//factorial of a number//
            }
                printf("factorial value  is %d\n",fact);
            break;//ends the loop here//
            
            case 2:
            printf("enter a number");
            fflush(stdin);
            scanf("%d",&num);
            for(i=2;i<num;i++)
            {
                if(num%i==0)
                {
                    printf("the number is not a prime number\n");
                    break;
                }
                if(i==num)
                {
                    printf("the number is prime\n");
                    }
                        break;
                
            }
            case 3:
            printf("enter a number");
            scanf("%d",&num);
            if(num%2==0)
            {
                printf("the number is even\n");
            }
            else
            {
                printf("the number is odd\n");
            }
                break;
            
            case 4:
            exit(0);//terminates program execution included in the <stdlib.h>//
            default:
            printf("the choice is invalid\a\n");//\a means alarm//


        }

    }
    return 0;
}