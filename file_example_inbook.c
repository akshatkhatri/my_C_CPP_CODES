// author-akshat khatri
// date-03-07-2023
// inbook practise of file input output
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include<unistd.h>

/*//copying a string into a file
int main()
{
    FILE *fp = NULL;
    int len;
    char *str;

    printf("enter the length of the string \n");
    scanf("%d",&len);

    str=(char *)malloc((len+1)*sizeof(char));//always free the memory after using malloc//
    if(str==NULL)
    {
        printf("memory allocation failed\n");
        exit(1);
    }

    printf("enter the string you want to enter\n");
    fflush(stdin);
    fgets(str,len+1,stdin);

   fp= fopen("test.txt","w");
    if(fp==NULL)
    {
        puts("file failed to open");
        exit(1);
    }

    fprintf(fp,"%s",str);
    printf("file overwritten succesfully %c\n",2);
    free(str);//memory freed//
    fclose(fp);
    return 0;
}*/

/*//copying a string from a file to be displayed in the terminal//
int main()
{
    FILE *f1;
    char ch;
   f1= fopen("test.txt","r");
    if(f1==NULL)
    {
        printf("file failed to open \n");
        exit(0);
    }
    while(ch!=EOF)
    {
    ch=fgetc(f1);
    printf("%c",ch);
    }
    printf("\n");
    printf("file extracted succesfully");
    fclose(f1);
} */

/*//counting how many characters,\n,\t,spaces are there in a file//
int main()
{
    FILE *f1;
    char ch;
    int count_char = 0, count_space = 0, count_tabs = 0, count_newlines = 0;

    f1 = fopen("test2.txt", "r");
    if (f1 == NULL)
    {
        printf("Unable to open the file\n");
        exit(1);
    }

    ch = ' ';
    while (ch != EOF)
    {
        ch = fgetc(f1);
        if (ch == ' ')
        {
            count_space++;
        }
        else if (ch == '\n')
        {
            count_newlines++;
        }
        else if (ch == '\t')
        {
            count_tabs++;
        }
        else
        {
            count_char++;
        }
    }

    fclose(f1);

    printf("The number of characters is %d\n", count_char);
    printf("The number of newline characters is %d\n", count_newlines);
    printf("The number of tabs present is %d\n", count_tabs);
    printf("The number of spaces present is %d\n", count_space);

    return 0;
}
*/

/*//copyimg the contents of one file into another//
int main()
{
    FILE *f1,*f2;
    char ch;
    f1=fopen("test.txt","r");
    if(f1==NULL)
    {
        printf("there was an error opening the file\n");
        exit(1);
    }
    f2=fopen("test2.txt","w");
    if(f2==NULL)
    {
        printf("there was an error opening this file\n");
        exit(2);
    }
    while(ch!=EOF)
    {
        ch=fgetc(f1);
        fputc(ch,f2);
    }
    fclose(f1);
    fclose(f2);
    puts("file copied succesfully\n");
    return 0;
}*/

/*//reading an input from the user into a file and then displaying it//
int main()
{
    FILE *f1, *f2;
    char str[80];

   
    f1 = fopen("test.txt", "w");
    if (f1 == NULL)
    {
        printf("cannot open file \n");
    }
    while (fgets(str, sizeof(str), stdin))
    {
        if (strcmp(str, "\n") == 0)  // Stop reading if an empty line is encountered
            break;

        fputs(str, f1);
        fputs("\n", f1);
    }
    fclose(f1);
    puts("the given strings are read succesfully in the file\n");
    f2=fopen("test.txt","r");
    if(f2==NULL)
    {
        puts("unable to open file \n");
    }
    puts("file contents are being read now......\n");
    sleep(5);

    while(fgets(str,79,f2)!=NULL)
    {
        printf("%s",str);
    }
    fclose(f2);
    return 0;


}
// printf("enter the length of the string you want to enter\n");
    //scanf("%d", &len);
    //str = (char *)malloc((len+1) * sizeof(char));
    //if (str == NULL)
    //{
    //    printf("failed to allocate memory\n");
    //}
*/

/*//appending string into a file//
int main()
{
    char str[31];
    FILE *f1=NULL;
    f1=fopen("test.txt","a");
    if(f1==NULL)
    {
        printf("unable top open file\n");
        exit(1);
    }
    puts("enter the string you want to enter\n");
    fgets(str,31,stdin);

    fprintf(f1,"\n%s",str);
    puts("succesfully appended\n");
    fclose(f1);
    return 0;
}*/

  