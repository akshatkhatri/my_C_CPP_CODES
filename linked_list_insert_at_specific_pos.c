// author-akshat khatri
// date-16-07-2023
// adding data in a user specified position in a linked list
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

struct node
{
    int data;
    struct node *next;
};

void print_list(struct node *);
void insert_node(int, int, struct node **);

int main()
{
    int data, pos;

    struct node *head = (struct node *)malloc(sizeof(struct node)); // dynamic memory allocation for the nodes
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *fourth = (struct node *)malloc(sizeof(struct node));

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = NULL; // end of linked list

    struct node *temp = head;

    printf("enter the elements one by one in the linked list\n");
    while (temp != NULL)
    {
        scanf("%d", &data);
        temp->data = data; // assigning the value received from user into the variable
        temp = temp->next; // updating the pointer to point to the next node
    }

    print_list(head); // printing the current list

    printf("please enter the position you want to insert the node in \n");
    scanf("%d", &pos);

    if (pos > 5)
    {
        printf("invalid input\n");
        Beep(500, 1000);
        exit(0);
    }

    printf("enter the number you want to enter\n");
    scanf("%d", &data);

    insert_node(data, pos, &head); // inserting the node in the linked list

    print_list(head); // printing the updated list

    return 0;
}
void print_list(struct node *ptr)
{
    printf("the updated list is \n");
    // temporary pointer to traverse through the linked list
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}
void insert_node(int data, int pos, struct node **head)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node)); // allocating memory for the newnode

    struct node *ptr = *head;
    /*one special case for starting position (1) of the linked list*/
    if (pos == 1)
    {
        newnode->data = data;
        newnode->next = *head;
        newnode = *head;
    }

    for (int i = 1; i < pos - 1; i++)
    {
        ptr = ptr->next; // traverse till the `position-1` element
    }
    newnode->data = data;
    newnode->next = ptr->next;
    ptr->next = newnode;
    /*
    in the above two steps what we did is -
    1.we assigned the value of ptr->next to newnode->next i.e the adress of pos+1
    2.then we updated the pointer of the pos-1 node to point to the newnode instead of the pos+1 node
    */
}