// author-akshat khatri//
// date-26-06-2023//
// write a program to find if a square matrix is symetric//
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

int is_symmetric(int matrix[MAX_SIZE][MAX_SIZE], int size);

int main()
{
    int size;
    int matrix[MAX_SIZE][MAX_SIZE];

    printf("Enter the size of the matrix (maximum %d): ", MAX_SIZE);
    scanf("%d", &size);

    if (size > MAX_SIZE)
    {
        printf("Invalid size. Maximum size is %d\n", MAX_SIZE);
        exit(EXIT_FAILURE);
    }

    printf("Enter the matrix elements row-wise:\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    if (is_symmetric(matrix, size))
    {
        printf("The matrix is symmetric\n");
    }
    else
    {
        printf("The matrix is not symmetric\n");
    }

    return 0;
}

int is_symmetric(int matrix[MAX_SIZE][MAX_SIZE], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (matrix[i][j] != matrix[j][i])
            {
                return 0;
            }
        }
    }

    return 1;
}