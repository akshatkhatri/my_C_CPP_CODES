//author-akshat khatri//
//date-25-06-2023//
//  algorithm for uniquely identifying a ISBN number//
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void remove_spaces_hyphens(char *);
int check_sum_digit(char *);
int main()
{
    char string_isbn[20];
    
    printf("enter the ISBN number\n");
    fgets(string_isbn,sizeof(string_isbn),stdin);

    remove_spaces_hyphens(string_isbn);
    int len=strlen(string_isbn);

    if(len!=10)
    {
        printf("invalid number(check digits again)");
        exit(0);
    }
    int check=check_sum_digit(string_isbn);
    printf("the checksum is %d\n",check);
    
    if(check==string_isbn[len-1]-'0')
    {
        printf("the number is a valid ISBN number");
    }
    else
    {
        printf("the number is not valid");
    }
    return 0;
}

void remove_spaces_hyphens(char *string_isbn)
    {
        int i,j;
        for( i=0,j=0;string_isbn[i]!='\0';i++)
        {
            if(string_isbn[i]!=' '&& string_isbn[i]!='-'&& string_isbn[i] != '\n')
            {
                string_isbn[j]=string_isbn[i];
                j++;
            }
        }
        string_isbn[j]='\0';

    }
    
    int check_sum_digit(char *string_isbn)
    {
        int numbers[10]={10,9,8,7,6,5,4,3,2,1};
        int multiplied[10];
        int sum=0;
        int rem,checksum;
        for(int i=0;i<10;i++)//to multiply each element by weight assigned to it//
        {
            multiplied[i]=(string_isbn[i]-'0')*(numbers[i]);
      
        
            sum=sum+multiplied[i];
        }
        rem=sum%11;
        if(rem==0)
        {
            checksum=0;
            return checksum;
        }
       
        else
        {
            checksum=11-rem;
            return checksum;
        }
    }
