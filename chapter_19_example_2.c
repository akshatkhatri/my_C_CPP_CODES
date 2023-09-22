// author-akshat khatri
// date-05-07-2023
// write a program to append the contents of one file into another
#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *f1, *f2;
    char ch;
    char str[80];

    f1 = fopen("test.txt", "r");
    if (f1 == NULL)
    {
        printf("unable to open file\n");
        exit(0);
    }
    f2 = fopen("test2.txt", "a");
    if (f2 == NULL)
    {
        printf("unable to open file\n");
        exit(0);
    }
    while (fgets(str, 79, f1) != NULL)
    {

        fputs(str, f2);
    }
    fclose(f2);
    fclose(f1);
    puts("appending completed\n");
    return 0;
}
