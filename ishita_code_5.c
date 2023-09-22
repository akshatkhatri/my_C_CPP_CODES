//author-akshat khatri//
//date-22-06-2023//
// prog to find whether a char is vowel or not//
#include <stdio.h>

int Vowel(char c);
int main() 
 {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (Vowel(ch)==1)
        printf("%c is a vowel.\n", ch);
    else
        printf("%c is not a vowel.\n", ch);

    return 0;
}
int Vowel(char c) {
    
    


    switch (c) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            return 1; 
        default:
            return 0; 
    }
}
