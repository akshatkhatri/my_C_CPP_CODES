// author-akshat khatri//
// date-28-06-2023//
// a structure that contains data of customers in a bank//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct customers_bank
{

    int account_num;
    char name[30];
    int balance;
} customer;

void balance_defaulters(customer *);
void bank_transactions(customer *);
int main()
{

    {
        customer data[200] = {
            {1001, "John Smith", 5000.0},
            {1002, "Emily Johnson", 3000.0},
            {1003, "Michael Williams", 7000.0},
            {1004, "Emma Brown", 4000.0},
            {1005, "Daniel Davis", 6000.0},
            {1006, "Olivia Wilson", 5500.0},
            {1007, "William Thompson", 3500.0},
            {1008, "Sophia Anderson", 6500.0},
            {1009, "James Taylor", 4500.0},
            {1010, "Mia Thomas", 2500.0},
            {1091, "Liam Rodriguez", 4200.0},
            {1092, "Ava Garcia", 3800.0},
            {1093, "Noah Lee", 5600.0},
            {1094, "Isabella Martinez", 4700.0},
            {1095, "Lucas Clark", 5100.0},
            {1096, "Sophia Rodriguez", 4400.0},
            {1097, "Mason Thompson", 3200.0},
            {1098, "Amelia Hernandez", 4800.0},
            {1099, "Logan Lee", 3900.0},
            {1100, "Harper Davis", 5900.0},

            {1191, "Jackson Adams", 5400.0},
            {1192, "Luna Mitchell", 4700.0},
            {1193, "Henry Lewis", 6100.0},
            {1194, "Grace Baker", 3900.0},
            {1195, "Samuel Young", 5200.0},
            {1196, "Scarlett Turner", 4500.0},
            {1197, "Benjamin King", 4800.0},
            {1198, "Chloe Hill", 3600.0},
            {1199, "Carter Nelson", 5600.0},
            {1200, "Zoey Allen", 4100.0},

            {1291, "David Moore", 800.0},
            {1292, "Nora Scott", 950.0},
            {1293, "Ethan Young", 670.0},
            {1294, "Avery Adams", 720.0},
            {1295, "Mila Walker", 530.0},
            {1296, "Liam Turner", 880.0},
            {1297, "Ella Baker", 690.0},
            {1298, "Caleb Hill", 780.0},
            {1299, "Aria Reed", 980.0},
            {1300, "Wyatt Anderson", 620.0},

        };
        balance_defaulters(&data[0]);
        while (1)
        {
            bank_transactions(&data[0]);
        }
        return 0;
    }
}
void balance_defaulters(customer *data)
{
    printf("the list of people with less than 1000 balance is\n");
    for (int i = 0; i < 50; i++)
    {
        if (data[i].balance < 1000 && data[i].balance != 0)
        {
            printf("%s\n", data[i].name);
            printf("%d\n", data[i].balance);
        }
    }
}
void bank_transactions(customer *data)
{

    int action, account_number, withdraw, deposit;
    char choice;

    do{
    
        printf("press 1 for deposit and press 0 for withdrawl\n");
        scanf("%d", &action);
        if (action != 0 && action != 1)
        {
            printf("invalid choice\n");
        }
        else if (action == 0)
        {
            printf("enter account number\n");
            scanf("%d", &account_number);

            printf("enter the ammount to withdraw\n");
            scanf("%d", &withdraw);

            for (int i = 0; i < 50; i++)
            {
                if (data[i].account_num == account_number)
                {
                    data[i].balance = data[i].balance - withdraw;
                    if (data[i].balance < 0)
                    {
                        printf("insufficient funds for specific withdrawl\n");
                        exit(0);
                    }
                    printf("remaining funds are %d", data[i].balance);
                }
            }
            account_number = 0;
        }
        else if (action == 1)
        {
            printf("enter your account number\n");
            scanf("%d", &account_number);

            printf("enter the ammount for deposit\n");
            scanf("%d", &deposit);

            for (int i = 0; i < 50; i++)
            {
                if (data[i].account_num == account_number)
                {
                    data[i].balance += deposit;
                    printf("remaining funds are %d\n", data[i].balance);
                }
            }
        }
        printf("do you want to continue press y for yes and n for no\n");
        scanf("%c", &choice);
    } while (choice == 'y' || choice == 'Y');
}