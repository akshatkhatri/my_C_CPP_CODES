// author-akshat khatri//
// date-13-07-2023//
// inserting elements in array in specific positions//
#include <stdio.h>
#include <stdlib.h>
void insert_in_array(int, int, int, int *);
int main()
{
    int size, num, pos;
    int *ptr;
    printf("enter the size of the array you want to create \n");
    scanf("%d", &size);

    ptr = (int *)malloc(size * (sizeof(int))); // dynamically allocated memory for the array using malloc function//

    printf("enter the number you want to insert\n");
    scanf("%d", &num);

    printf("enter the position in which you want to enter \n");
    scanf("%d", &pos); // note that the position entered here is not index like if the user enters position as 3 he is referring to arr[2]//

    if (pos <= 0 || pos > size) // checking if the position entered by the user is correct or not//
    {
        printf("invalid input\n");
        exit(1);
    }

    for (int i = 0; i < size; i++) // taking input from the user for the array//
    {
        printf("enter the %d number for the array\n", i);
        scanf("%d", ptr + i);
    }
    int index = pos - 1;
    int *res;

    printf("the old array was: "); // printing old array
    for (int i = 0; i < size; i++)
    {
        printf("%d ", *(ptr + i));
    }

    insert_in_array(size, index, num, ptr); // function call for inserting array function//

    size++; // because after every insertion size will be incremented//

    printf("\nsuccesfully inserted\n");

    printf("new array is: ");

    for (int i = 0; i < size; i++) // printing new array//
    {
        printf("%d ", *(ptr + i));
    }
    free(ptr);//free the allocated memory//
    return 0;
} 
void insert_in_array(int size, int index, int num, int *ptr)
{
    for (int i = size-1; i >= index; i--)
    {
        *(ptr + i + 1) = *(ptr + i);
    }
    *(ptr + index) = num;
}
