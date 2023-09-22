// author-akshat khatri
// date-15-08-2023
// implementing queue using arrays

#include <stdio.h>
#include <stdlib.h>

#define ENQUEUE_CHOICE 1
#define DEQUEUE_CHOICE 2
#define PEEK_CHOICE 3
#define DISPLAY_CHOICE 4

/*structure declartion for queues*/

struct queue
{
    int size;
    int front;
    int rear;
    int *arr;
};

/*function declaration for checking if the queue is empty or not*/

int is_empty(struct queue *ptr)
{
    if (ptr->front == ptr->rear)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
/*function declaration for checking if the queue is full or not*/

int is_full(struct queue *ptr)
{
    if (ptr->rear == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
/*function to add an item in the queue i.e. enqueue*/

void enqueue(struct queue **ptr, int data)
{
    if (is_full(*ptr))
    {
        printf("severe queue overflow condition\n");
    }
    else
    {
        (*ptr)->rear++;
        (*ptr)->arr[(*ptr)->rear] = data;
        printf("element %d has been enqueued in the queue\n", data);
    }
}
/*function to dequeue or delete the items from the array or queue*/

void dequeue(struct queue **ptr)
{
    if (is_empty(*ptr))
    {
        printf("severe queue underflow condition\n");
    }
    else
    {
        (*ptr)->front++;
        printf("element %d has been dequeued\n", (*ptr)->arr[(*ptr)->front]);
    }
}
/*function to peek an element from the queue*/

void peek(struct queue *ptr)
{
    if (is_empty(ptr))
    {
        printf("severe queue underflow condition\n");
    }
    else
    {
        printf("the element peeked is %d\n", ptr->arr[ptr->rear]);
    }
}

/*function to create a queue by input from the user*/

struct queue *create_queue(int size)
{
    struct queue *ptr = (struct queue *)malloc(sizeof(struct queue));
    (ptr)->size = size;

    (ptr)->rear = -1;
    (ptr)->front = -1;

    ptr->arr = (int *)malloc((ptr->size) * sizeof(int));

    return ptr;

    /*(ptr)->rear++;

    (ptr)->arr[(ptr)->rear] = data;*/
}

/*function to display a queue*/

void display_queue(struct queue *ptr)
{
    if (is_empty(ptr))
    {
        printf("the stack is empty\n");
    }

    for (int i = ptr->front + 1; i <= ptr->rear; i++) // the loop is starting from front +1
    {
        printf("the %d element is %d\n", (i + 1), ptr->arr[i]);
    }
}

/*MAIN EXECUTION*/

int main()
{
    int data, size, choice;
    struct queue *top;
    printf("enter the size of the queue you want to create\n");
    scanf("%d", &size);

    top = create_queue(size);

    do
    {
        printf("press 1 for Enqueue\npress 2 for Dequeue\npress 3 for peeking an element\npress 4 for displaying the queue\n press 0 to EXIT\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case ENQUEUE_CHOICE:

            printf("enter the element you want to insert\n");
            scanf("%d", &data);
            enqueue(&top, data);
            break;

        case DEQUEUE_CHOICE:

            dequeue(&top);
            break;

        case PEEK_CHOICE:

            peek(top);
            break;

        case DISPLAY_CHOICE:

            display_queue(top);
            break;

        default:
            printf("inavlid choice entered\n");
            break;
        }

    } while (choice != 0);

    printf("THANK YOU :)\n");

    free(top->arr);
    free(top);

    return 0;
}
//