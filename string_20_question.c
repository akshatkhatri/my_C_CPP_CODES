//author-akshat khatri//
//date-24-06-2023//
// some questions on strings//
#include<stdio.h>
#include<string.h>
//question- write a c program to input a string and print it//
/*int main()   
{
    char str1[20];
    scanf("%[^\n]s",&str1);
    printf("the string you entered is %s",str1);
    return 0;
}*/
// question- a c program to find the length of a string without using library functions//
/*int main()

{
    char str1[20];
    scanf("%[^\n]s",&str1);
    int count=0;
    for(int i=0;i<=20;i++)
    {
        if(str1[i]=='\0')
        {
            break;
        }
        count++;
    }
    printf("%d",count);

}*/
// question- a c program to seperate individual characters from a string//
/*int main()
{
    char string1[25];
    scanf("%[^\n]s",&string1);
    for(int i=0;i<25;i++)
    {
        if(string1[i]=='\0')
        {
            break;
        }
        printf("%c \n",string1[i]);
    }
}*/
// question- a c program to print individual characters of a string in reversed order//
/*int main()
{
    char str1[30];
    scanf("%[^\n]s",&str1);
    int x=strlen(str1);
    for(int i=x;i>=0;i--)
    {
        printf("%c ",str1[i]);
    }
    return 0;
}*/
// question- write a c program to print the total number of words in a string//
/*int main()
{
    char str1[50];
    printf("enter the string\n");
    scanf("%[^\n]s",&str1);
    int x=strlen(str1);
    int count=1;
    for(int i=0;i<x;i++)
    {
        if(str1[i]=='\0')
        {
            break;
        }
        else if(str1[i]==' ')
        {
            count++;
        }
    }
    printf("%d word(s)\n",count);
}*/
// question- write a c program to compare the two strings length without lib functions//
/*int main()
{
    char string1[20];
    char string2[20];
    printf("enter the 1st string\n");
    scanf("%19[^\n]",&string1);

    printf("enter the 2nd string\n");
    scanf(" %19[^\n]",&string2);

    int x=strlen(string1);
    int y=strlen(string2);
    
    int i;
        for( i=0;i<x&&i<y;i++)
        {
            if(string1[i]!=string2[i])
            {
                printf("the strings are not equal\n");
                printf("they were equal till %d",i);
            
            break;
            }
        }
        if(i==x&&i==y)
        {
            printf("they are equal");
        }
    
return 0;
}*/
//question- write a c program to count number of alphabets,digits and special characters in a string//
/*int main()
{
    char string1[50];
    printf("enter the string you want\n");
    fgets(string1,sizeof(string1),stdin);
    strupr(string1);
    int countalpha=0;
    int countnum=0;
    int countspecial=0;
    for(int i = 0;i < strlen(string1);i++)
    {
        if(string1[i]=='\0')
        {
            break;
        }
        else if(string1[i] > 64 && string1[i] < 91)
        {
            countalpha++;
        }
        else if(string1[i] > 47 && string1[i] < 58)
        {
            countnum++;
        }
        else 
        {
            countspecial++;
        }
    }
    printf("the number of alphabets are %d\n",countalpha);
    printf("the number of digits were %d\n",countnum);
    printf("the number of special characters were %d\n",countspecial);
    return 0;

}*/
//question- write a program to copy one string to another string//
/*int main()
{
    char string1[50];
    fgets(string1,sizeof(string1),stdin);
    char string2[50];
    strncpy(string2,string1,sizeof(string1));
    printf("%s",string2);
    return 0;
}
*/
//question- write a c program to count the number of vowels and consonants in a string//
/*void countvowel(char *,int);
int main()
{
    char string1[50];
    printf("enter the string\n");
    fgets(string1,sizeof(string1),stdin);
    int len=strlen(string1);
    strlwr(string1);
    countvowel(&string1[0],len);
    return 0;
}
void countvowel(char *ptr,int len)
{
    int vowel =0;
    int cons=0;
    for(int i=0;i<len;i++)
    {
        if(*(ptr + i) == 'a' || *(ptr + i) == 'e' || *(ptr + i) == 'i' || *(ptr + i) == 'o' || *(ptr + i) == 'u')
        {
            vowel++;
        }
        else if ((ptr[i]>='a' && ptr[i]<='z') || (ptr[i]>='A' && ptr[i]<='Z'))
        {
            cons++;
        }
    }
    printf("the no. of vowels are %d",vowel);
    printf("the no. of consonants are %d",cons);
}*/
//question- write a c program to find the maximum no.of characters in a string//
/*int main() {
    char str[MAX_LENGTH];
    int frequency[256] = {0};

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Removing the trailing newline character
    str[strcspn(str, "\n")] = '\0';

    // Counting the frequency of each character
    for (int i = 0; i < strlen(str); i++) {
        frequency[(int)str[i]]++;
    }

    int highestFrequency = 0;

    // Finding the highest frequency
    for (int i = 0; i < 256; i++) {
        if (frequency[i] > highestFrequency) {
            highestFrequency = frequency[i];
        }
    }

    // Counting the number of characters with the highest frequency
    int highestFrequencyCount = 0;
    for (int i = 0; i < 256; i++) {
        if (frequency[i] == highestFrequency) {
            highestFrequencyCount++;
        }
    }

    printf("The Highest frequency of character(s) ");
    for (int i = 0; i < 256; i++) {
        if (frequency[i] == highestFrequency) {
            printf("'%c' ", (char)i);
        }
    }
    printf("\nappears number of times: %d\n", highestFrequency);

    printf("Number of characters with highest frequency: %d\n", highestFrequencyCount);

    return 0;
}
*/
//question- write a program to sort an integer array using bubble sort//
/*void print_array(int *,int);
void sort_array(int *,int);
void swap_numbers(int *,int *);
int main()
{
    int n;
    printf("enter the no. of elements you will  enter\n");
    scanf("%d",&n);
    int numbers[n];
    printf("enter the array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&numbers[i]);
    }
  
    printf("\n");
    printf("the bubble sorted array is \n");
    sort_array(&numbers[0],n);
    print_array(&numbers[0],n);
    return 0;
}
void sort_array(int *ptr,int n)
{
    int temp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(*(ptr+j)>*(ptr+j+1))
            {
                temp=*(ptr+j);
                *(ptr+j)=*(ptr+j+1);
                *(ptr+(j+1))=temp;
            }
        }
    }
    
}
void swap_numbers(int *ptr1,int *ptr2)
{
    int temp;
    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
}
void print_array(int *ptr1,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",*(ptr1+i));
    }
}*/
//question- wrire a program to sort a string using bubble sort//
/*void main()
{
  char name[25][50],temp[25];
  int n,i,j;
  
       printf("\n\nSorts the strings of an array using bubble sort :\n");
       printf("-----------------------------------------------------\n");  
  
 
  printf("Input number of strings :");
  scanf("%d",&n);

printf("Input string %d :\n",n);
  for(i=0;i<=n;i++)
  {
       
       fgets(name[i], sizeof name, stdin);
  }
     

     for(i=1;i<=n;i++)
	for(j=0;j<=n-i;j++)
	  if(strcmp(name[j],name[j+1])>0)
	  { 
            strcpy(temp,name[j]);
	    strcpy(name[j],name[j+1]);
	    strcpy(name[j+1],temp);
	  }
   printf("The strings appears after sorting :\n");
	      for(i=0;i<=n;i++)
		 printf("%s\n",name[i]);
 
} */
//write a c program to check whether a substring is present in a string//
/*int main()
{
    char string1[100];
    char string2[100];
    int extract,len;
    printf("enter the string\n");
    fgets(string1,sizeof(string1),stdin);
    printf("enter the no. to start extraction from\n");
    scanf("%d",&extract);
    printf("enter the length of the substring\n");
    scanf("%d",&len);
    for(int i=0;i<len;i++)
    {
        string2[i]=string1[extract];
        extract++;
    }
    string2[len]='\0';
    printf("extracted substring is %s\n",string2);
    return 0;
}*/
//write a c program to check if a given string is present inside the string or not//
/*int main() {
    char string[100];
    char substring[100];

    printf("Enter the string: ");
    fgets(string, sizeof(string), stdin);
    

    printf("Enter the substring: ");
    fgets(substring, sizeof(substring), stdin);
    

    if (strstr(string, substring) != NULL) {
        printf("Substring is present.\n");
    } else {
        printf("Substring is not present.\n");
    }

    return 0;
}*/
//write a c program which converts uppercase to lowercase and vice-versa//
/*int main()
{
    char string1[60];
    printf("enter the string\n");
    fgets(string1,sizeof(string1),stdin);
    int n=strlen(string1);
    for(int i=0;i<n;i++)
    {
        if((int)string1[i]>64 && (int)string1[i]<91)
        {
            string1[i]=(int)string1[i]+32;
        }
        else if(string1[i]>96 && string1[i]<123)
        {
            string1[i]=(int)string1[i]-32;
        }
    }
    puts(string1);
    return 0;
}*/
    //write a c program to find the number of times the word 'the' occurs//
    /*skipped
    
    
    */
    // write a c program to remove characters from a string except alphabets//
    /*int main()
    {
        char str1[100];
        char str2[100];
        printf("enter the string you want\n");
        fgets(str1,sizeof(str1),stdin);
        int j=0;
        for(int i=0;i<strlen(str1);i++)
        {
            if((str1[i]>='a'&& str1[i]<='z'|| str1[i]>='A'&&str1[i]<='Z'))
            {
                str2[j]=str1[i];
                j++;
            }
        }
        str2[j]='\0';
        puts(str2);
        return 0;
    }*/
    // write a c program to find the frequency of a char in a string//
    /*int main()
    {
        char str1[100];
        char frequency[256]={0};
        char x;
        printf("enter the string you want to enter\n");
        fgets(str1,sizeof(str1),stdin);
        printf("enter the character you want to find frequency of \n ");
        scanf("%c",&x);
        for(int i=0;i<strlen(str1);i++)
        {
            frequency[str1[i]]++;
            
        }
        printf("%d\n",frequency[x]);
    }*/
// write a c program to combine two strings manually//
/*void combine_string(char *,char *,int);
int main()
{
    char str1[100];
    char str2[100];
    int n;
    printf("enter the string you want\n");
    fgets(str1,sizeof(str1),stdin);
    printf(" enter the 2nd string\n");
    fgets(str2,sizeof(str2),stdin);
    n=strlen(str1);
    combine_string(&str1[0],&str2[0],n);
    return 0;
}
void combine_string(char *str1,char *str2,int n)
{
    char str3[200];
    for(int i=0;i<n;i++)
    {
       str3[i+n] = *(str2+i);
       str3[i] = *(str1+i);
       
    }
    printf("\n%s\n",str3);
}*/
// write a c program to find the largest and smallest word in a string//