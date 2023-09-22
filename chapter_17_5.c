// author-akshat khatri//
// date-30-06-2023//
//  create a structure for employees and display the names of those whose tenure has excedded 3 years//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct employee_data
{
    char name[30];
    int code;
    int doj;
    int moj;
    int yoj;

} employee;

int main()
{
    int d, m, y;
    employee data[3];
    for (int i = 0; i < 3; i++)
    {
        printf("enter the code of the employee\n");
        scanf("%d", &data[i].code);
        getchar();

        printf("enter the name of the employee\n");
        fgets(data[i].name, 30, stdin);

        printf("enter the doj moj and yoj of the employee\n");
        scanf("%d %d %d", &data[i].doj, &data[i].moj, &data[i].yoj);

        printf("enter the current date\n");
        scanf("%d %d %d", &d, &m, &y);
        if ((y - data[i].yoj) > 3)
        {
            printf("the employee tenure has increased by 3 years %s\n", data[i].name);
        }
        else if (y - data[i].yoj == 3)
        {
            if (m > data[i].moj)
            {
                printf("the employee tenure has increased by 3 years %s\n", data[i].name);
            }
            else if (m == data[i].moj)
            {
                if (d > data[i].doj)
                {
                    printf("the employee tenure has increased by 3 years %s\n", data[i].name);
                }
            }
        }
        else if ((y - data[i].yoj < 3))
        {
            printf("the employee tenure is below 3 years %s\n", data[i].name);
        }
    }
    return 0;
}