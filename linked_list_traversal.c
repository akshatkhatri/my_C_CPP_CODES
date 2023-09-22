// author-akshat khatri
// date-15-07-2023
// creating and traversing a linked list
#include <stdio.h>
#include <stdlib.h>

struct node // declaring the structure with a data part and the part which stores the adress of next node;
{
    int data;
    struct node *next;
};

void linked_list_traversal(struct node *);

int main()
{
    struct node *head; // declaring the pointers to the struct node//
    struct node *second;
    struct node *third;
    struct node *fourth;

    head = (struct node *)malloc(sizeof(struct node));   // allocating memory in the heap for the pointers//
    second = (struct node *)malloc(sizeof(struct node)); // allocating memory in the heap for the pointers//
    third = (struct node *)malloc(sizeof(struct node));  // allocating memory in the heap for the pointers//
    fourth = (struct node *)malloc(sizeof(struct node)); // allocating memory in the heap for the pointers//

    // linking the first and second node
    head->data = 23;
    head->next = second;
    // linking the second and third node
    second->data = 33;
    second->next = third;
    // linking the third and fourth node
    third->data = 44;
    third->next = fourth;
    // ending the list with 4th node
    fourth->data = 55;
    fourth->next = NULL;
    // function call for linked list traversal
    linked_list_traversal(head);
    return 0;
}
void linked_list_traversal(struct node *ptr)
{
    while (ptr != NULL) // the loop ends when end of linked list is encountered
    {
        printf("element is %d\n", ptr->data);
        ptr = ptr->next; // updating the location of pointer such that it points to the next node//
    }
}
