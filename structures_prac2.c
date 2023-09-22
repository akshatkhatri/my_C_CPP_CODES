// author-akshat khatri//
// date-28-06-2023//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct employee_data
{
    int sr_no;
    char name[20];
    char designation[30];

} employee;

void print_data(employee *);
int main()
{
    employee data[5];
    printf("enter the data of employee\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d %s %[^\n]", data[i].sr_no, &data[i].name, &data[i].designation);
    }
    printf("\ndata of employees is\n");
    print_data(data);
    return 0;
}
void print_data(employee *ptr)
{
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", ptr->sr_no);
        printf(" %s", ptr->name);
        printf(" %s\n", ptr->designation);
    }
}
