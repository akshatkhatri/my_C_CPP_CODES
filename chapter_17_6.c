// author-akshat khatri//
// date-30-06-2023//
//  writing a menu-driven program on the working of a library//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

    typedef struct library_data
{
    int flag;
    int price;
    int accesion_no;
    char title[20];
    char author_name[30];
} library;

int compare(const void *x, const void *y)
{
    return ((library *)x)->accesion_no - ((library *)y)->accesion_no;
}

int main()
{
    library data[50];
    int choice = 0;

    while (1)
    {
        printf("press 1 for adding book information\n");
        printf("press 2 for displaying a book information\n");
        printf("press 3 to list all books of a given author\n");
        printf("press 4 to display title of a book specified by accession number\n");
        printf("press 5 to display the count of all books in the library\n");
        printf("press 6 for listing books in the order of accession number\n");
        printf("press 7 to exit\n");
        printf("\nENTER YOUR CHOICE\n");
        scanf("%d", &choice);
        if (choice > 7 || choice <= 0)
        {
            printf("Invalid choice. Please try again.\n");
            continue;
        }
        if (choice == 1)
        {
            int i = 0;
            while (1)
            {
                printf("enter the accession number\n");
                scanf("%d", &data[i].accesion_no);

                printf("enter the author name\n");
                scanf("%s", data[i].author_name);

                printf("enter the title of the book\n");
                scanf("%s", data[i].title);

                printf("enter the price of the book\n");
                scanf("%d", &data[i].price);

                printf("press 1 if book is issued, press 0 if not issued\n");
                scanf("%d", &data[i].flag);

                i++;

                int another_entry;
                printf("To add another book, press 1. To return to main menu, press any key.\n");
                scanf("%d", &another_entry);

                if (another_entry != 1)
                {
                    break;
                }
            }
        }
        else if (choice == 2)
        {
            int check = 0;
            printf("Enter the accession number of the book: ");
            scanf("%d", &check);
            int found = 0;
            for (int i = 0; i < 50; i++)
            {
                if (check == data[i].accesion_no)
                {
                    printf("Author name: %s\nTitle: %s\nPrice: %d\nFlag: %d\n",
                           data[i].author_name, data[i].title, data[i].price, data[i].flag);
                    found = 1;
                    break;
                }
            }
            if (!found)
            {
                printf("No such record found.\n");
            }
        }
        else if (choice == 3)
        {
            char author_check[30];
            printf("Enter the name of the author: ");
            scanf("%s", author_check);
            int found = 0;
            for (int i = 0; i < 50; i++)
            {
                if (strcmp(author_check, data[i].author_name) == 0)
                {
                    printf("%s - %d\n", data[i].title, data[i].price);
                    found = 1;
                }
            }
            if (!found)
            {
                printf("No books found for author %s\n", author_check);
            }
        }
        else if (choice == 4)
        {
            char check_book[20];
            printf("Enter the title of the book: ");
            scanf("%s", check_book);
            int found = 0;
            for (int i = 0; i < 50; i++)
            {
                if (strcmpi(check_book, data[i].title) == 0)
                {
                    printf("%s\n", data[i].title);
                    found = 1;
                    break;
                }
            }
            if (!found)
            {
                printf("No such record found.\n");
            }
        }
        else if (choice == 5)
        {
            printf("Total number of books: %d\n", sizeof(data) / sizeof(data[0]));
        }
        else if (choice == 6)
        {
            qsort(data, sizeof(data) / sizeof(data[0]), sizeof(library), compare);
            printf("Books in order of accession number:\n");
            for (int i = 0; i < 50; i++)
            {
                if (data[i].accesion_no == 0)
                {
                    break;
                }
                printf("%d. %s by %s (%d)\n", data[i].accesion_no,
                       data[i].title, data[i].author_name, data[i].price);
            }
        }
        else if (choice == 7)
        {
            break;
        }
    }
    return 0;
}
