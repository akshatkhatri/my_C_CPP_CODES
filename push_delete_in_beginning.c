// author-akshat khatri
// date-17-07-2023
// creating a push function to make a linked list and to delete the first element from the linked list
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
 void print_list(struct node *);
int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node)); // dynamic allocation
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *fourth = (struct node *)malloc(sizeof(struct node));

      struct node *temp=(struct node *)malloc(sizeof(struct node));

    head->next = second;//linking the nodes
    second->next = third;
    third->next = fourth;
    fourth->next = NULL;

    head->data = 1;//initializing data in the nodes
    second->data = 2;
    third->data = 3;
    fourth->data = 4;

    print_list(head);//printing the list

    if (head == NULL)//checking if list is empty
    {
        printf("NULL");
    }
    else
    {
        struct node *temp=head;//assigning current head to a temporary variable temp
        head=temp->next;
        free(temp);//freeing the location i.e deleting it
        print_list(head);//printing the result
    }
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
/*complete the push function*/
