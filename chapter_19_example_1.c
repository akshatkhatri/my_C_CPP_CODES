// author-akshat khatri
// date-04-07-2023
//  a program to read a file and then display its contents along with a line number before each line
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f1 = NULL;
    char ch;
    int count = 1;
    f1 = fopen("test.txt", "r");
    if (f1 == NULL)
    {
        printf("UNABLE TO OPEN THE FILE\n");
    }
    printf("\n%3d: ", count);
    while (ch != EOF)
    {
        ch = fgetc(f1);
        if (ch == '\n')
        {
            count++;
            printf("\n%3d: ", count);
        }
        else
            printf("%c", ch);
    }
    fclose(f1);
    return 0;
}