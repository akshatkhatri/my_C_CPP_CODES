// name=ishita
// while loop
// date 10-07-23
#include <stdio.h>
int main()
{
    int i = 0;
    int number, limit, positive, negative, zero;
    int positive_count = 0, negative_count = 0, zero_count = 0;
    printf("enter the limit");
    scanf("%d", &limit);
    while (i <= limit)
    {
        printf("enter the number\n");
        scanf("%d", &number);
        if (number > 0)
        {
            printf("number is positive\n");
            positive_count++;
        }
        else if (number < 0)
        {
            printf("the entered number is negative\n");
            negative_count++;
        }
        else if (number == 0)
        {
            printf("number is zero\n");
            zero_count++;
        }
        i++;
    }
    printf("total count for positive integers=%d\n",positive_count);
    printf("total count of negative integers=%d\n",negative_count);
    printf("total count for zeros=%d\n",zero_count);
}