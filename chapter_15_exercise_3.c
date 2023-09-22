//author-akshat khatri//
//date-26-06-2023//
// authenticate a credit card number//
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void check_creditcard(char *);
void remove_spaces_hyphens(char *);
int main()
{
    char cred_num[25];
    printf("enter the string\n");
    fgets(cred_num,sizeof(cred_num),stdin);
    remove_spaces_hyphens(cred_num);
    int len=strlen(cred_num);
    if(len!=16)
    {
        printf("enter a valid card number\n");
        exit(0);
    }
    check_creditcard(cred_num);
    return 0;

}
    void remove_spaces_hyphens(char *cred_num)
    {
        int i,j;
        for(i=0,j=0;cred_num[i]!='\0';i++)
        {
            if(cred_num[i]!=' '&& cred_num[i]!='-'&& cred_num[i] != '\n')
            {
                cred_num[j]=cred_num[i];
                j++;
            }
            
        }
        cred_num[j]='\0';
    }
void check_creditcard(char *cred_num)
{
    char even[16]={0};
    char odd[16]={0};
    int sum1=0;
    int sum2=0;
    int totalsum;
    for(int i=0;i<16;i=i+2)
    {
        even[i]=((cred_num[i]-'0')*2);
    }
    for(int i=1;i<16;i=i+2)
    {
        odd[i]=cred_num[i]-'0';
    }
    for(int i=0;i<16;i++)
    {
        if(even[i]>=10)
        {
            even[i]=even[i]-9;
        }
        
        sum1=sum1+even[i];
        sum2=sum2+odd[i];
    }
    printf("%d\n",sum1);
    printf("%d\n",sum2);
    totalsum=sum1+sum2;
    if(totalsum%10==0)
    {
        printf("the credit card is valid\n");
    }
    else
    {
        printf("the card is invalid\n");
    }
}
