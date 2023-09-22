//author-akshat khatri
//date-03-08-2023
//make a menu driven program which has features of a linked list
/*#include<stdio.h>
#include<stdlib.h>

struct node 
{
    struct node *prev;
    int data;
    struct node *next;
};
void insert_new_node(int size)
{
    
    int data;
    struct node *head=(struct node *)malloc(sizeof(struct node));

    printf("enter the data for the 1st newnode\n");
    scanf("%d",&data);

    head->data=data;
    head->prev=NULL;
    head->next=NULL;
    struct node *last=head;

    for(int i=2;i<size;i++)
    {
        struct node *newnode=(struct node *)malloc(sizeof(struct node));
        printf("enter the data of %d node",i);
        scanf("%d",&data);
        
        newnode->data=data;
        newnode->next=NULL;
        newnode->prev=last;

        last->next=newnode;
        last=newnode;    
    }
    printf("\ndoubly linked list updated succesfully\n");

}
void display_list(struct node *head)
{
    struct node *temp;
    int n=1;

    if(temp==NULL)
    {
        printf("empty linked list\n");
    }
    else
    {
        while(temp!=NULL)
        {
            printf("data of %d node is %d",n,temp->data);
            temp=temp->next;
            n++;
        }

    }
}
void reverse_a_list(struct node *head)
{
    struct node *current;
    struct node *temp;

    current=head;

    while(current!=NULL)
    {
        temp=current->next;
        current->next=current->prev;
        current->prev=temp;
    
    current=temp;
    }
    
    temp=head;
    head=last;
    last=temp;

    printf("list reversed succesfully\n");
}*/
#include<stdio.h>
#include<stdlib.h>

struct node 
{
    struct node *prev;
    int data;
    struct node *next;
};

void insert_new_node(int size)
{
    int data;
    struct node *head = NULL;
    struct node *last = NULL;

    for (int i = 1; i <= size; i++)
    {
        printf("Enter the data of %d node: ", i);
        scanf("%d", &data);
        
        struct node *newnode = (struct node *)malloc(sizeof(struct node));
        newnode->data = data;
        newnode->next = NULL;
        newnode->prev = last;

        if (last != NULL)
            last->next = newnode;

        last = newnode;

        if (head == NULL)
            head = newnode;
    }
    printf("\nDoubly linked list updated successfully.\n");
}

void display_list(struct node *head)
{
    struct node *temp = head;
    int n = 1;

    if (temp == NULL)
    {
        printf("Empty linked list\n");
    }
    else
    {
        while (temp != NULL)
        {
            printf("Data of node %d is %d\n", n, temp->data);
            temp = temp->next;
            n++;
        }
    }
}

void reverse_a_list(struct node **head)
{
    if (*head == NULL)
    {
        printf("The list is empty. Cannot reverse an empty list.\n");
        return;
    }

    struct node *current = *head;
    struct node *temp = NULL;

    while (current != NULL)
    {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        current = current->prev;
    }

    if (temp != NULL)
    {
        *head = temp->prev; // Update the head pointer to the new head
    }

    printf("List reversed successfully.\n");
}

int main()
{
   int n;
   int choice;

    printf("DOUBLY LINKED LIST PROGRAM\n");
    printf("1.create list\n");
    printf("2.reverse list\n");
    printf("3.display list\n");
    printf("0.exit\n");

    printf("\nenter your choice\n");
    scanf("%d",&choice);

   switch(choice)
   {
    case 1:
    {
    printf("enter the total number of nodes you want in the linked list\n");
    scanf("%d",&n);
    insert_new_node(n);
    break;
    }
    case 2:
    {
        reverse_a_list()
    }
    /*to be continued */

   }

    return 0;
}
