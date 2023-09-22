// author-akshat khatri
// date-16-07-2023
// adding data at the end of a linked list
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void print_list(struct node *);
void insert_at_end(int,struct node **);
int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));//dynamic memory allocation for the structure
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *fourth = (struct node *)malloc(sizeof(struct node));

    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=NULL;

    struct node *ptr;//pointer to help us traverse the array
    int data,data2;//variable which will store the value to be added at the end of list
    ptr=head;

    while(ptr!=NULL)//loop for entering data inside the while loop
    {
        printf("enter the data for  elements\n");
        scanf("%d",&data2);
        ptr->data=data2;
        ptr=ptr->next;
    }

    print_list(head);

    printf("enter the data you want to add at the end of linked list\n");
    scanf("%d",&data);
/*function calls for prinitng data before and after insertion*/
    
    insert_at_end(data,&head);
    print_list(head);

    return 0;
}

void print_list(struct node *ptr)
{
    printf("the updated list is now \n");
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
    printf("\n");
}
void insert_at_end(int data,struct node **ptr)
{
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    struct node *temp=*ptr;

     newnode->next=NULL;//as it will be the last node so next should be NULL
     newnode->data=data;

    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;//the former last node's next will store the address of our newnode
}