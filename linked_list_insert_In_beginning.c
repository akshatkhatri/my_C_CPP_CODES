// author-akshat khatri
// date-16-07-2023
// adding data at the beginning of a linked list
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
void insert_node(struct node **, int);
void print_list(struct node *);

int main()
{
    int data;
    struct node *head = (struct node *)malloc(sizeof(struct node)); // dynamic memory allocation for nodes
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *fourth = (struct node *)malloc(sizeof(struct node));

    struct node *temp = head; // this pointer will help us in traversing the array

    head->next = second; // linking the nodes to each other
    second->next = third;
    third->next = fourth;
    fourth->next = NULL;

    printf("enter the 4 elements one by one\n");
    while (temp != NULL)
    {

        scanf("%d", &data);

        temp->data = data;

        temp = temp->next; // updating the pointer to point to the next location
    }
    print_list(head);

    printf("\nenter the number you want to enter at the start of the list\n"); // taking input from user for the new node
    scanf("%d", &data);

    insert_node(&head, data); // function call for inserting the new node

    print_list(head); // function call for printing the list

    return 0; // end of execution
}

void print_list(struct node *ptr) // function for printing a list
{
    printf("the elements in the updated list are-> ");

    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next; // updating the pointer
    }
}
void insert_node(struct node **ptr, int data) // function for inserting a node
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));

    newnode->next = *ptr;
    newnode->data = data;
    *ptr = newnode;
}
