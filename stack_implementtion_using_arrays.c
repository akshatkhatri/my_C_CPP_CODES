
// author-akshat khatri
// date-07-08-2023
// implementing stack data structure using arrays (gfg)

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int check;
struct stack
{
    int top;
    unsigned int capacity;
    int *array;
};

struct stack *create_stack(unsigned int capacity)
{
    struct stack *stack = (struct stack *)malloc(sizeof(struct stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->array = (int *)malloc(sizeof(int) * stack->capacity);
    return stack;
}
int isfull(struct stack *stack)
{
    if (stack->top == stack->capacity - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isempty(struct stack *stack)
{
    if (stack->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void push(struct stack *stack, int data)
{
    check = isfull(stack);
    if (check == 1)
    {
        printf("ERROR!,overflow condition\n");
        return;
    }
    stack->top++;
    stack->array[stack->top] = data;
    printf("%d was pushed to stack succesfully\n", data);
    return;
}
void pop(struct stack *stack)
{
    check = isempty(stack);
    if (check == 1)
    {
        printf("ERROR!,underflow condition\n");
        return;
    }
    else
    {
        printf("the data deleted is %d\n", stack->array[stack->top]);
        stack->top--;
    }
}
void peek(struct stack *stack)
{
    check = isempty(stack);
    if (check == 1)
    {
        printf("error!,underflow condition\n");
        return;
    }
    else
    {
        printf("the data at the top of the stack is %d\n", stack->array[stack->top]);
    }
}
void display_stack(struct stack *stack)
{
    check = isempty(stack);
    if (check == 1)
    {
        printf("error!,underflow condition\n");
        return;
    }
    else
    {
        

        for (int i = stack->top; i >= 0; i--)
        {
            printf("\n");
            printf("|%6d|\n", stack->array[i]);
           
        }

        return;
    }
}
int main()
{
    struct stack *stack = create_stack(10);
    int ch;
    int item;

    do
    {
        printf("press 1 for pushing an item into the stack\npress 2 for popping an item from the stack\npress 3 for peeking an element from the stack\npress 4 for displaying the stack\npress 0 to EXIT\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("enter the data you want to push in the stack\n");
            scanf("%d", &item);
            push(stack, item);
            printf("\n");
            break;

        case 2:
            pop(stack);
            printf("\n");
            break;

        case 3:
            peek(stack);
            printf("\n");
            break;

        case 4:
            display_stack(stack);
            printf("\n");
            break;

        default:
            printf("invalid choice!\n");
            printf("\n");
            break;
        }
    } while (ch != 0);
    return 0;
}
