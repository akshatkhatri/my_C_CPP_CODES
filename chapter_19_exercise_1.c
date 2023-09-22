// author-akshat khatri
// date-05-07-2023
// a file containing student records . write a program such as the names are displayed in sorted order
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student_records
{
    char name[30];
    int age;
} student;

int main()
{
    FILE *f1;
    student e;
    student sort_name[40];
    char ch = 'Y';
    
    f1 = fopen("student_record.txt", "a");
    if (f1 == NULL) {
        printf("Failed to open the file.\n");
        return 1;
    }
    
    while (ch == 'Y')
    {
        printf("Enter name and age: ");
        scanf("%s %d", e.name, &e.age);
        fprintf(f1, "%s %d\n", e.name, e.age);
        printf("Add another record? (Y/N): ");
        getchar();  // Consume the newline character from the previous scanf
        ch = getchar();
    }
    
    fclose(f1);
    
    f1 = fopen("student_record.txt", "r");
    if (f1 == NULL) {
        printf("Failed to open the file.\n");
        return 1;
    }
    
    int i = 0;
    while (fscanf(f1, "%s %d", sort_name[i].name, &sort_name[i].age) != EOF && i < 40)
    {
        i++;
    }
    
    fclose(f1);
    
    // Sort the records based on the names (using bubble sort for simplicity)
    for (int j = 0; j < i - 1; j++)
    {
        for (int k = 0; k < i - j - 1; k++)
        {
            if (strcmp(sort_name[k].name, sort_name[k + 1].name) > 0)
            {
                // Swap the records
                student temp = sort_name[k];
                sort_name[k] = sort_name[k + 1];
                sort_name[k + 1] = temp;
            }
        }
    }
    
    // Print the sorted records
    printf("\nSorted records:\n");
    for (int j = 0; j < i; j++)
    {
        printf("Name: %s, Age: %d\n", sort_name[j].name, sort_name[j].age);
    }
    
    return 0;
}

    /*student rec_1 = {"akshat", 18};
    student rec_2 = {"ishita", 19};
    student rec_3 = {"rahul", 20};
    student rec_4 = {"lakshita", 17};
    student rec_5 = {"lavanya", 16};*/

   /* fprintf(f1, "%s %d\n", rec_1.name, rec_1.age);
    fprintf(f1, "%s %d\n", rec_2.name, rec_2.age);
    fprintf(f1, "%s %d\n", rec_3.name, rec_3.age);
    fprintf(f1, "%s %d\n", rec_4.name, rec_4.age);
    fprintf(f1, "%s %d\n", rec_5.name, rec_5.age);*/

    

  


