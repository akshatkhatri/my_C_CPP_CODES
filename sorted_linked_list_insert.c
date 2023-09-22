// author-akshat khatri
// date-17-07-2023
// inserting an element in a sorted linked list
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
void print_list(struct node *ptr);

int main()
{
    int num;

    struct node *head=(struct node *)malloc(sizeof(struct node));
    struct node *second=(struct node *)malloc(sizeof(struct node));
    struct node *third=(struct node *)malloc(sizeof(struct node));
    struct node *fourth=(struct node *)malloc(sizeof(struct node));

    struct node*newnode=(struct node *)malloc(sizeof(struct node));

    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=NULL;

    head->data=1;
    second->data=2;
    third->data=4;
    fourth->data=5;

    printf("enter the number you want to insert in the linked list\n");
    scanf("%d",&num);

    newnode->data=num;

    if(head==NULL||head->data>=newnode->data)
    {
        newnode->next=head;
        head=newnode;
    }
    else
    {
        struct node *temp=head;
        while(temp->next!=NULL&&temp->next->data<newnode->data)
        {
            temp=temp->next;
        }
        newnode->next=temp->next;
        temp->next=newnode;


    }
    print_list(head);
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