#include <stdio.h>
int main()
{
    int n1, n2, sum, multiply, division, sub;
    char operator;
    printf("enter the two numbers");
    scanf("%d %d", &n1, &n2);
    printf("enter the operator");
    fflush(stdin);
    scanf("%c", &operator);
    switch (operator)
    {
    case '*':
        multiply = n1 * n2;
        printf("%d", multiply);
        break;
    case '+':
        sum = n1 + n2;
        printf("%d", sum);
        break;
    case '/':
        division = n1 / n2;
        printf("%d", division);
        break;
    case '-':
        sub = n1 - n2;
        printf("%d", sub);
        break;
    default:
        printf("enter valid operator");
    }
    return 0;
}