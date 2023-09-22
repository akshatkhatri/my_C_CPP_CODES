// author-akshat khatri
// date-13-07-2023//
// deleting an element from a specific position of the array//
#include <stdio.h>
#include <stdlib.h>
int delete_in_array(int, int, int *);
int main()
{
    int size, pos;
    int *ptr;

    printf("enter the size of the array\n");
    scanf("%d",&size);

    ptr = (int *)malloc(size * sizeof(int)); // dynamically allocated memory for the array

    if (ptr == NULL) // checking if malloc was able to allocate memory or not
    {
        printf("unable to allocate memory\n");
        exit(0); // exiting from the function
    }

    for(int i=0;i<size;i++)
    {
        printf("enter the %d element\n",i+1);
        scanf("%d",ptr+i);//scanning from the adress of ptr
    }

    printf("the array you entered is \n");

    for(int j=0;j<size;j++)
    {
        printf("%d ",*(ptr+j));//printing from the adress of ptr
    }

    printf("\nenter the position from where you want to delete\n");
    scanf("%d", &pos);

    if (pos <= 0 || pos > size) // bounds checking //
    {
        printf("invalid input\n");
        exit(1);
    }

    size = delete_in_array(size, pos, ptr); // function call for the delete array element function

    printf("the modified array is \n");

    for (int i = 0; i < size; i++) // printing the modified array//
    {
        printf("%d ", *(ptr + i));
    }
    free(ptr);//freeing the allocated memory

    return 0;
}
int delete_in_array(int size, int pos, int *ptr)
{
    int index = pos - 1; // index based on arrays//

    for (int i = index; i < size; i++)
    {
        *(ptr + i) = *(ptr + i + 1); // replacing the +1 element with current element//
    }
    size--;
    return size;
}
