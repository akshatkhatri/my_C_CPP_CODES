// author-akshat khatri
// date-05-07-2023
// a program to merge lines alternately from two files and write the result to a new file
#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *f1, *f2, *f3;
    char ch;
    char str[80];
    char str2[80];
    f1 = fopen("test.txt", "r");
    if (f1 == NULL)
    {
        printf("unable to open file\n");
        exit(1);
    }
    f2 = fopen("upper.txt", "r");

    if (f2 == NULL)
    {
        printf("unable to open file\n");
        exit(0);
    }
    f3 = fopen("new.txt", "w");
    if (f3 == NULL)
    {
        printf("unable to open file \n");
        exit(2);
    }
    while (fgets(str, 79, f1) != NULL && fgets(str2, 79, f2) != NULL)
    {
        fprintf(f3, "%s", str);
        fprintf(f3, "%s", str2);
    }
    while (fgets(str, 79, f1) != NULL)
    {
        fprintf(f3, "%s", str);
    }
    while (fgets(str2, 79, f2) != NULL)
    {
        fprintf(f3, "%s", str2);
    }

    puts("line merged succesfully \n");

    fclose(f1);
    fclose(f2);
    fclose(f3);

    return 0;
}