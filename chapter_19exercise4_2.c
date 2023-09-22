// author-akshat khatri
// date-05-07-2023
// writing a program to encrypt decrypt a file using subsitution cipher
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    char alpha[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    char key[26] = {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p', 'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'z', 'x', 'c', 'v', 'b', 'n', 'm'};

    FILE *f1, *f2;

    f1 = fopen("test.txt", "r");
    if (f1 == NULL)
    {
        printf("unable to open file\n");
    }
    f2 = fopen("sub_encryption.txt", "w");
    if (f2 == NULL)
    {
        printf("unable to open file\n");
    }

    while (ch != EOF)
    {
        ch = fgetc(f1);
        for (int i = 0; i < 26; i++)
        {
            if (ch == alpha[i])
            {
                ch = key[i];
            }
        }
        fputc(ch, f2);
    }

    puts("sub_encryption completed \n");
    fclose(f1);
    fclose(f2);

    return 0;
}
