// author-akshat khatri
// date-05-07-2023
// a program to encrypt and decrypt a file using offset cipher
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    FILE *f1;
    FILE *f2;

    f1 = fopen("upper.txt", "r");
    if (f1 == NULL)
    {
        printf("Unable to open the file\n");
        return 1;
    }

    f2 = fopen("encrypted.txt", "w");
    if (f2 == NULL)
    {
        printf("Unable to create the encrypted file\n");
        fclose(f1);
        return 1;
    }

    while ((ch = fgetc(f1)) != EOF)
    {
        ch = ch - 45;
        fputc(ch, f2);
    }

    puts("File encrypted successfully\n");
    fclose(f1);
    fclose(f2);
    return 0;
}
/*to decrypt the file simply use char ch=ch+23*/